# http://doc.qt.io/qt-5/cmake-manual.html
# https://techbase.kde.org/Development/Tutorials/CMake/FirstProject
# https://techbase.kde.org/Development/Tutorials/CMake/Frameworks
# http://www.kdab.com/using-cmake-with-qt-5/
# http://www.proli.net/2014/06/21/porting-your-project-to-qt5kf5/

cmake_minimum_required(VERSION 3.0) 

project(rejillas)

# necesario para kf5

find_package(ECM REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings)
include(FeatureSummary)

find_package(KF5 REQUIRED COMPONENTS CoreAddons Declarative I18n) #sudo apt-get install libkf5declarative-dev libkf5coreaddons-dev libkf5i18n-dev

# otra forma
#find_package(KF5CoreAddons) # kaboutdata esta en este modulo
#find_package(KF5Declarative)
#find_package(KF5I18n)

# necesario para Qt5
find_package(Qt5 REQUIRED COMPONENTS Widgets Core Gui Qml) #Widgets para qapplication; core para QCmdLineParser, qobject y QVariant; qml para QQmlEngine y QQmlComponent

# otra forma valida
#find_package(Qt5Widgets)
#find_package(Qt5Core)
#find_package(Qt5Gui)
#find_package(Qt5Qml)

# tus fuentes
set(rejillas_SRCS 
    main.cpp
    resultado.cpp
    resultado.h
    tabla.cpp
    tabla.h
    rejilla.h
    rejilla.cpp
)

add_executable(rejillas ${rejillas_SRCS})

target_link_libraries(rejillas Qt5::Widgets Qt5::Core Qt5::Gui Qt5::Qml KF5::CoreAddons KF5::Declarative KF5::I18n) #KF5::CoreAddons para kabaoutdata

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)

#install(TARGETS rejillas  ${INSTALL_TARGETS_DEFAULT_ARGS})