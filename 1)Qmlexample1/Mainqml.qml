import QtQuick 2.4
import QtQuick.Controls 2.3

MainqmlForm {
    //Call functions here

button.onClicked: {
    mainwindowcpp.showmessage() //We can reach mainwindow with this
}
checkBox.onClicked: {  //if checkbox is clicked send checkbox is "checked or not" signal to slot to call c++ function "cppcheckboxstatus"
    qmlSignal(checkBox.checked)

}

imagebutton.onClicked: {
    mainwindowcpp.showimage()
}

camerabutton.onClicked:{
    mainwindowcpp.opencamera()
}
}
