#include "agorartcengine.h"
#include <QDebug>


AgoraRtcEngine::AgoraRtcEngine(QObject *parent) : QObject(parent)
  ,m_rtcEngine(nullptr)
  ,m_eventHandler(nullptr)
{
    m_rtcEngine = createAgoraRtcEngine();

    agora::rtc::RtcEngineContext ctx;
    ctx.eventHandler = this;
    ctx.appId = "aab8b8f5a8cd4469a63042fcfafe7063";
    ctx.enableAudio = true;
    ctx.enableVideo = true;
  #ifdef WEBRTC_ANDROID
    ctx.context = android_app_context;
  #endif

    m_rtcEngine->initialize(ctx);
}

AgoraRtcEngine::~AgoraRtcEngine()
{
    if(m_rtcEngine) {
        m_rtcEngine->release();
    }
}

void AgoraRtcEngine::joinChannel(){
    printf("joinChannel...\n");
    m_rtcEngine->joinChannel(nullptr, "channelId", nullptr, 111);
}

void AgoraRtcEngine::onJoinChannelSuccess(const char* channel, agora::rtc::uid_t userId, int elapsed) {
    printf("onJoinChannelSuccess...\n");
}
