import QtQuick 2.0

Item {
    TextEdit {
        id: textCmd2
        color: "#1a0000"
        text: qsTr("####")
        anchors.fill: parent
        font.pixelSize: 12
        Keys.onSpacePressed: {
            main.joinChannel("pqy")
        }
        Keys.onReturnPressed:{
            main.joinChannel("pqy")
        }
    }
}
