#ifndef AGORARTCENGINE_H
#define AGORARTCENGINE_H
#include <memory>
#include <QString>
#include <QVariant>
#include "rtc_engine/IAgoraRtcEngine.h"

class AgoraRtcEngine : public QObject, public agora::rtc::IRtcEngineEventHandler{
    Q_OBJECT
public:
    explicit AgoraRtcEngine(QObject *parent = 0);
    ~AgoraRtcEngine();

    Q_INVOKABLE void joinChannel(const char* channel);

private:
    void onJoinChannelSuccess(const char* channel, agora::rtc::uid_t userId, int elapsed) override;

private:
    agora::rtc::IRtcEngine* m_rtcEngine;
    std::unique_ptr<agora::rtc::IRtcEngineEventHandler> m_eventHandler;
};
#endif // AGORARTCENGINE_H
