import QtQuick 2.9
import QtQuick.Window 2.2
import QtMultimedia 5.4
import QtQuick.Controls 2.4
import QtQuick 2.12
import QtMultimedia 5.12
import QtQuick.Layouts 1.12
import QtQuick.Controls 1.4 as C1
import QtQuick.Controls.Material 2.3
Rectangle{
    id:rectangle
    width: 640
    height: 480
    color: "gray"

    property var picturesModel : []

    function addPicture(source){
    var image = {
            "id":source,
            "source":source
        };
    picturesModel.push(image);
    rectangle.picturesModelChanged();
    }

    Image {
        id: image
        source: "qrc:/mimage.jpg"

        Item {

            Camera {
                id: camera

                imageProcessing.whiteBalanceMode: CameraImageProcessing.WhiteBalanceFlash

                exposure {
                    exposureCompensation: -1.0
                    exposureMode: Camera.ExposurePortrait
                }

                flash.mode: Camera.FlashRedEyeReduction

                imageCapture {
                    onImageCaptured: {
                        addPicture(preview)  // Show the preview in an Image
                    }
                }

                videoRecorder{
                    resolution: "480x360"
                    frameRate: 60
                }

            }
        }

    }
VideoOutput {
    id:videooutput
    source: camera
    //anchors.fill: parent
    focus : visible // to receive focus and capture key events when visible
     }


    Button{
        id :button
        width:120
        height:30
        x:480
        y:80
        font.pointSize: 8
        font.capitalization: Font.MixedCase
        text: qsTr("Open-Button")

        onPressed: {
           camera.start()
           var i;
            //Birden fazla capture etmiyor burayı araştır ve düzelt
            for(i=0;i<parseInt(combom.currentText);i++){
                    camera.imageCapture.capture();
                    console.log("Image captured path", camera.imageCapture.capturedImagePath);
                    console.log("Camera is ready or not",camera.imageCapture.ready);
            }
        }

        }

    Button{
        id :button1
        width:120
        height:30
        x:480
        y:120
        font.pointSize: 8
        font.capitalization: Font.MixedCase
        text: qsTr("Camera Stop")

        onPressed: {
            camera.stop();
        }
        }

    Button{
        id: button2
        width:120
        height:30
        x:480
        y:160
        font.pointSize: 8
        font.capitalization: Font.MixedCase
        text: qsTr("Save-Button")
    }

    ComboBox{
        id: combom
        width:120
        height:30
        x:480
        y:200
        font.pointSize: 8
        font.capitalization: Font.MixedCase

        textRole: "key"
            model: ListModel {
                ListElement { key: "10"; value: 10 }
                ListElement { key: "20"; value: 30 }
                ListElement { key: "30"; value: 40 }
            }
    onEditTextChanged: {
       console.log("text changed",combom.currentText)
    }
    }

}
