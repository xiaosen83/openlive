import QtQuick 2.4

Item {
    width: 400
    height: 400

    TextEdit {
        id: textCmd
        color: "#1a0000"
        text: qsTr(">>")
        anchors.fill: parent
        font.pixelSize: 12
    }
}

/*##^## Designer {
    D{i:1;anchors_height:392;anchors_width:384;anchors_x:8;anchors_y:8}
}
 ##^##*/
