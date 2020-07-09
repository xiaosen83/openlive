import QtQuick 2.4

Item {
    width: 400
    height: 400

    Rectangle {
        id: rectangle
        color: "#ffffff"
        border.color: "#dcbfbf"
        anchors.fill: parent

        Text {
            id: editCmd
            x: 66
            y: 76
            text: qsTr("openlive")
            font.pixelSize: 12
        }
    }
}

/*##^## Designer {
    D{i:1;anchors_height:200;anchors_width:200;anchors_x:0;anchors_y:0}
}
 ##^##*/
