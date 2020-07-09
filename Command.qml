import QtQuick 2.4

CommandForm {
    textCmd.Keys.onReturnPressed:{
        main.joinChannel("pqy")
    }
}
