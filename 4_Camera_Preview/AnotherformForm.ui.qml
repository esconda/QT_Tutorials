import QtQuick 2.4
import QtQuick.Controls 2.3
import QtMultimedia 5.4

Item {
    width: 867
    height: 510

    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 867
        height: 510
        color: "gray"

        Button {
            id: buttonopen
            x: 702
            y: 56
            text: qsTr("Open-Camera")
            onClicked: txtLog.text = txtLog.text + "The 'clicked' signal. <br>"
        }

        Button {
            id: buttonclose
            x: 702
            y: 128
            width: 100
            height: 40
            text: qsTr("Close-Camera")
        }

        Button {
            id: buttonsave
            x: 702
            y: 195
            text: qsTr("Save-Captured-file")
        }
    }
}
