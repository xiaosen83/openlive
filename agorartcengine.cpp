#include "agorartcengine.h"
#include <QDebug>


AgoraRtcEngine::AgoraRtcEngine(QObject *parent) : QObject(parent)
  ,m_rtcEngine(nullptr)
  ,m_eventHandler(nullptr)
{
    m_rtcEngine = (createAgoraRtcEngine());
    agora::rtc::RtcEngineContext ctx;
    ctx.eventHandler = this;
    ctx.appId = "aab8b8f5a8cd4469a63042fcfafe7063";
    ctx.enableAudio = false;
    ctx.enableVideo = false;

    int ret = m_rtcEngine->initialize(ctx);
    fprintf(stderr, "initialize ret:%d\n", ret);
}

AgoraRtcEngine::~AgoraRtcEngine()
{
    if(m_rtcEngine) {
        m_rtcEngine->release();
    }
}

void AgoraRtcEngine::joinChannel(){
    printf("joinChannel...\n");
    int ret = m_rtcEngine->joinChannel("aab8b8f5a8cd4469a63042fcfafe7063", "channelId", nullptr, 111);
    fprintf(stderr, "joinChannel ret:%d\n", ret);
}

void AgoraRtcEngine::onJoinChannelSuccess(const char* channel, agora::rtc::uid_t userId, int elapsed) {
    printf("onJoinChannelSuccess...\n");
}
