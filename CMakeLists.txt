# http://doc.qt.io/qt-5/cmake-manual.html
# https://techbase.kde.org/Development/Tutorials/CMake/FirstProject
# https://techbase.kde.org/Development/Tutorials/CMake/Frameworks

cmake_minimum_required(VERSION 3.0) 

project(rejillas)

# necesario para kf5
find_package(ECM REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH})
include(KDEInstallDirs)
include(KDECompilerSettings)
include(KDECMakeSettings)
include(FeatureSummary)

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

#target_link_libraries(rejillas ${KDE5_KDEUI_LIBS})

#install(TARGETS rejillas  ${INSTALL_TARGETS_DEFAULT_ARGS})