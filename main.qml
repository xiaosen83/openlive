import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    OpenView {
        x: 0
        y: 0
        width: 640
        height: 300
    }
    Command {
        x: 0
        y: 300
        width: 640
        height: 180
    }

    function joinChannel(channel) {
        agoraRtcEngine.joinChannel(channel);
    }
}
