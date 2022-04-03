import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.4
import QtQuick.Controls.Material 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "gray"
    Material.theme: Material.Dark
    Material.accent: Material.Green

    Button{
    id:button
    width:200
    height:30
    x:150
    y:200
    text: qsTr("click Button")

    onClicked: {
        firstclass.print("My string is written");
    }
    }

}
