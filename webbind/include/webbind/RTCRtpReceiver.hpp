#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpCapabilities.hpp"
#include "RTCRtpReceiveParameters.hpp"
#include "RTCRtpContributingSource.hpp"
#include "RTCRtpSynchronizationSource.hpp"

namespace webbind {

class MediaStreamTrack;
class RTCDtlsTransport;
class RTCStatsReport;

/// Interface RTCRtpReceiver
/// [`RTCRtpReceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver)
class RTCRtpReceiver : public emlite::Val {
    explicit RTCRtpReceiver(Handle h) noexcept;
public:
    explicit RTCRtpReceiver(const emlite::Val &val) noexcept;
    static RTCRtpReceiver take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCRtpReceiver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCRtpReceiver.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/track)
    /// [`RTCRtpReceiver.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/track)
    [[nodiscard]] MediaStreamTrack track() const;
    /// [`RTCRtpReceiver.transport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/transport)
    /// [`RTCRtpReceiver.transport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/transport)
    [[nodiscard]] RTCDtlsTransport transport() const;
    /// The getCapabilities method.
    /// [`RTCRtpReceiver.getCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getCapabilities)
    static RTCRtpCapabilities getCapabilities(const jsbind::String& kind);
    /// The getParameters method.
    /// [`RTCRtpReceiver.getParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getParameters)
    RTCRtpReceiveParameters getParameters();
    /// The getContributingSources method.
    /// [`RTCRtpReceiver.getContributingSources`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getContributingSources)
    jsbind::TypedArray<RTCRtpContributingSource> getContributingSources();
    /// The getSynchronizationSources method.
    /// [`RTCRtpReceiver.getSynchronizationSources`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getSynchronizationSources)
    jsbind::TypedArray<RTCRtpSynchronizationSource> getSynchronizationSources();
    /// The getStats method.
    /// [`RTCRtpReceiver.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getStats)
    jsbind::Promise<RTCStatsReport> getStats();
    /// [`RTCRtpReceiver.jitterBufferTarget`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/jitterBufferTarget)
    /// [`RTCRtpReceiver.jitterBufferTarget`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/jitterBufferTarget)
    [[nodiscard]] jsbind::Any jitterBufferTarget() const;
    /// Setter of the `jitterBufferTarget` attribute.
    /// [`RTCRtpReceiver.jitterBufferTarget`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/jitterBufferTarget)
    void jitterBufferTarget(const jsbind::Any& value);
    /// [`RTCRtpReceiver.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/transform)
    /// [`RTCRtpReceiver.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/transform)
    [[nodiscard]] jsbind::Any transform() const;
    /// Setter of the `transform` attribute.
    /// [`RTCRtpReceiver.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/transform)
    void transform(const jsbind::Any& value);
};

} // namespace webbind