import QtQuick.Controls 1.2
import QtQuick.Window 2.2
import QtQuick.Layouts 1.1
import QtQuick 2.0

ApplicationWindow {
    id: ventana
    visible: true
    title: qsTr("Rejillas")
    x: Screen.width / 2 - width / 2
    y: Screen.height / 2 - height / 2

    signal qmlSignal(string comboText, string textfieldText)
    
    function enviaAncho(resultado) {
            console.log("resultado " + resultado);
            grid.children[4].text = resultado;
    }
    
    Connections {
        target: resultado
        onEnviaAncho : {
            console.log(res)
        }
    }

    GridLayout {
    	id: grid
        anchors.fill: parent
        Layout.fillWidth: true
        Layout.alignment: Qt.AlignTop
        
        Label {
            Layout.row: 0
            Layout.column: 0
            Layout.alignment: Qt.AlignRight
            text: qsTr("Altura de la rejilla")
        }

        ComboBox {
            id: comboFamilia
            Layout.row: 0
            Layout.column: 1
            width: 200
            model: [ "100", "150", "200", "250", "300", "350", "400", "450", "500", "600" ]
            enabled: true
        }

        TextField {
            Layout.column: 2
            Layout.row: 0
            Layout.columnSpan: 2
            Layout.fillWidth: true
            id: cajaCaudal
            objectName: "textfield"
            placeholderText: qsTr("Introduce caudal")
            validator: IntValidator {}
            //onEditingFinished: ventana.qmlSignal(comboFamilia.currentText, cajaCaudal.text)
        }
        
        Button {
            Layout.column: 4
            text: qsTr("Buscar rejilla")

            onClicked:
                // emit the submitTextField signal
                qmlSignal(comboFamilia.currentText, cajaCaudal.text)
                //console.log("hola")
                //ventana.enviaAncho("555")
        }

        Label {
            id: resultado
            objectName: "resultado"
            Layout.row: 0
            Layout.column: 5
            Layout.alignment: Qt.AlignRight
            text: qsTr("Resultado")
        }
    }

}