import QtQuick 2.4

CommandForm {
    btGo.onClicked: {
        console.log("testing...");
        main.joinChannel()
    }
//    Keys.onReturnPressed:{
//        main.joinChannel("pqy")
//    }
}
