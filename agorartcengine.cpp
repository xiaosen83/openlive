#include "agorartcengine.h"
#include <QDebug>


AgoraRtcEngine::AgoraRtcEngine(QObject *parent) : QObject(parent)
  ,m_rtcEngine(nullptr)
  ,m_eventHandler(nullptr)
{
    m_rtcEngine = createAgoraRtcEngine();
}

AgoraRtcEngine::~AgoraRtcEngine()
{
    if(m_rtcEngine) {
        m_rtcEngine->release();
    }
}

void AgoraRtcEngine::joinChannel(const char* channel){
    printf("joinChannel...\n");
}

void AgoraRtcEngine::onJoinChannelSuccess(const char* channel, agora::rtc::uid_t userId, int elapsed) {
    printf("onJoinChannelSuccess...\n");
}
