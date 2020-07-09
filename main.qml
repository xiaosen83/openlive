import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    //id: main
    visible: true
    width: 640
    height: 480
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
       console.log("joinChannel:", channel);
       agoraRtcEngine.joinChannel(channel);
    }
}
