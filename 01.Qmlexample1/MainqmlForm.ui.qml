import QtQuick 2.4
import QtQuick.Controls 2.3
import QtQuick.Extras 1.4
//import Qt3D.Core 2.0
//import Qt3D.Render 2.0
import QtQuick.Window 2.10

Item {
    id: rootitem
    width: 1240
    height: 1000
    property alias image: image
    property alias button: button //With this button will be seen in other qmls
    property alias checkBox: checkBox
    property alias camerabutton: camerabutton
    property alias imagebutton: imagebutton
    signal qmlSignal(bool message)
    //signal qmlCameraSignal(bool message)

    //Signal and slot to reach c++ function from qml
    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 1240
        height: 1000
        color: "gray"

        Button {
            id: button
            x: 570
            y: 854
            text: qsTr("Button")
        }

        CheckBox {
            id: checkBox
            x: 443
            y: 854
            text: qsTr("Check Box")
            checked: false
        }

        TextEdit {
            id: textEdit
            x: 506
            y: 823
            width: 80
            height: 20
            text: qsTr("Text Edit")
            font.pixelSize: 12
        }

        ToolSeparator {
            id: toolSeparator
            x: 544
            y: 860
        }

        Image {
            id: image
            objectName: "showimage"
            x: 413
            y: 13
            width: 600
            height: 600
            anchors.centerIn: parent
        }

        Button {
            id: imagebutton
            x: 700
            y: 854
            width: 101
            height: 40
            //            background: Rectangle {
            //                color: "blue"
            //            }
            text: qsTr("Open Image")
            display: AbstractButton.TextBesideIcon
        }

        Frame {
            id: frame
            x: 413
            y: 13
            width: 600
            height: 600
            transformOrigin: Item.Center
            anchors.centerIn: parent //set frame to center
        }

        Dial {
            id: dial
            x: 42
            y: 614
        }

        DelayButton {
            id: delayButton
            x: 172
            y: 614
            text: qsTr("Button")
        }

        Gauge {
            id: gauge
            x: 34
            y: 742
        }

        Button {
            id: camerabutton
            x: 701
            y: 911
            text: qsTr("Open-Camera")
        }

        Label {
            id: label
            x: 53
            y: 352
            width: 230
            height: 197
            text: qsTr("Label")
        }

        StackView {
            id: stackView
            x: 1019
            y: 381
            width: 200
            height: 200
        }
    }
}
