import QtQuick 2.4
import Qt.labs.calendar 1.0
import QtQuick.Controls.Styles.Desktop 1.0
import QtQuick.Controls 1.5

Item {
    id: element
    width: 400
    height: 400

    property alias textCmd: textCmd
    property alias btGo: btGo

    TextEdit {
        id: textCmd
        x: 8
        width: 384
        height: 32
        color: "#1a0000"
        text: qsTr(">>")
        anchors.top: parent.top
        anchors.topMargin: 8
        font.pixelSize: 12
    }

    Button {
        id: btGo
        x: 130
        y: 46
        text: qsTr("Button")
    }
}




/*##^## Designer {
    D{i:1;anchors_height:392;anchors_width:384;anchors_x:8;anchors_y:8}
}
 ##^##*/
