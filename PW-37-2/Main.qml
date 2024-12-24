import QtQuick
import QtQuick.Controls
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text{
        id: screen
        text: "Pause"        
        font.pointSize: 40
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: -100

    }

    Button{
        text:"⏸️"
        font.pointSize: 18
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -40
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 100
        onClicked: (screen.text = "Pause Play")
    }

    Button{
        text:"▶️"
        font.pointSize: 18
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -80
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 100
        onClicked: (screen.text = "Play")
    }

    Button{
        text:"⏹"
        font.pointSize: 18
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 100
        onClicked: (screen.text = "Stop Play")
    }

    Button{
        text:"⏪️"
        font.pointSize: 18
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 40
        anchors.verticalCenterOffset: 100
        onClicked: (playSlider.value -= 0.1)
    }

    Button{
        text:"⏩️"
        font.pointSize: 18
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 80
        anchors.verticalCenterOffset: 100
        onClicked: (playSlider.value += 0.1)
    }

    Slider{
        id: playSlider
        anchors.bottom: parent.bottom;
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Canvas {
            anchors.fill: parent
            onPaint: {
                const context = getContext("2d");
                context.beginPath();
                context.moveTo(150,50);
                context.lineTo(490,50);
                context.lineTo(490,250);
                context.lineTo(150,250);
                context.closePath();
                context.stroke();
            }
    }
}
