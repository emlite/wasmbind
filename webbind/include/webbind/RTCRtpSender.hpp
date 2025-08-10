#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStreamTrack;
class RTCDtlsTransport;
class RTCRtpCapabilities;
class RTCRtpSendParameters;
class RTCSetParameterOptions;
class MediaStream;
class RTCStatsReport;
class RTCDTMFSender;

/// Interface RTCRtpSender
/// [`RTCRtpSender`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender)
class RTCRtpSender : public emlite::Val {
    explicit RTCRtpSender(Handle h) noexcept;
public:
    explicit RTCRtpSender(const emlite::Val &val) noexcept;
    static RTCRtpSender take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCRtpSender clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCRtpSender.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/track)
    /// [`RTCRtpSender.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/track)
    [[nodiscard]] MediaStreamTrack track() const;
    /// [`RTCRtpSender.transport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/transport)
    /// [`RTCRtpSender.transport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/transport)
    [[nodiscard]] RTCDtlsTransport transport() const;
    /// The getCapabilities method.
    /// [`RTCRtpSender.getCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/getCapabilities)
    static RTCRtpCapabilities getCapabilities(const jsbind::String& kind);
    /// The setParameters method.
    /// [`RTCRtpSender.setParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/setParameters)
    jsbind::Promise<jsbind::Undefined> setParameters(const RTCRtpSendParameters& parameters);
    /// The setParameters method.
    /// [`RTCRtpSender.setParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/setParameters)
    jsbind::Promise<jsbind::Undefined> setParameters(const RTCRtpSendParameters& parameters, const RTCSetParameterOptions& setParameterOptions);
    /// The getParameters method.
    /// [`RTCRtpSender.getParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/getParameters)
    RTCRtpSendParameters getParameters();
    /// The replaceTrack method.
    /// [`RTCRtpSender.replaceTrack`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/replaceTrack)
    jsbind::Promise<jsbind::Undefined> replaceTrack(const MediaStreamTrack& withTrack);
    /// The setStreams method.
    /// [`RTCRtpSender.setStreams`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/setStreams)
    jsbind::Undefined setStreams(const MediaStream& streams);
    /// The getStats method.
    /// [`RTCRtpSender.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/getStats)
    jsbind::Promise<RTCStatsReport> getStats();
    /// [`RTCRtpSender.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/transform)
    /// [`RTCRtpSender.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/transform)
    [[nodiscard]] jsbind::Any transform() const;
    /// Setter of the `transform` attribute.
    /// [`RTCRtpSender.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/transform)
    void transform(const jsbind::Any& value);
    /// The generateKeyFrame method.
    /// [`RTCRtpSender.generateKeyFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/generateKeyFrame)
    jsbind::Promise<jsbind::Undefined> generateKeyFrame();
    /// The generateKeyFrame method.
    /// [`RTCRtpSender.generateKeyFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/generateKeyFrame)
    jsbind::Promise<jsbind::Undefined> generateKeyFrame(const jsbind::TypedArray<jsbind::String>& rids);
    /// [`RTCRtpSender.dtmf`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/dtmf)
    /// [`RTCRtpSender.dtmf`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/dtmf)
    [[nodiscard]] RTCDTMFSender dtmf() const;
};

} // namespace webbind