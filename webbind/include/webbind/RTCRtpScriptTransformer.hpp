#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class ReadableStream;
class WritableStream;

/// Interface RTCRtpScriptTransformer
/// [`RTCRtpScriptTransformer`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer)
class RTCRtpScriptTransformer : public EventTarget {
    explicit RTCRtpScriptTransformer(Handle h) noexcept;
public:
    explicit RTCRtpScriptTransformer(const emlite::Val &val) noexcept;
    static RTCRtpScriptTransformer take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCRtpScriptTransformer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `readable` attribute.
    /// [`RTCRtpScriptTransformer.readable`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// The generateKeyFrame method.
    /// [`RTCRtpScriptTransformer.generateKeyFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer/generateKeyFrame)
    jsbind::Promise<long long> generateKeyFrame();
    /// The generateKeyFrame method.
    /// [`RTCRtpScriptTransformer.generateKeyFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer/generateKeyFrame)
    jsbind::Promise<long long> generateKeyFrame(const jsbind::String& rid);
    /// The sendKeyFrameRequest method.
    /// [`RTCRtpScriptTransformer.sendKeyFrameRequest`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer/sendKeyFrameRequest)
    jsbind::Promise<jsbind::Undefined> sendKeyFrameRequest();
    /// Getter of the `writable` attribute.
    /// [`RTCRtpScriptTransformer.writable`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer/writable)
    [[nodiscard]] WritableStream writable() const;
    /// Getter of the `onkeyframerequest` attribute.
    /// [`RTCRtpScriptTransformer.onkeyframerequest`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer/onkeyframerequest)
    [[nodiscard]] jsbind::Any onkeyframerequest() const;
    /// Setter of the `onkeyframerequest` attribute.
    /// [`RTCRtpScriptTransformer.onkeyframerequest`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer/onkeyframerequest)
    void onkeyframerequest(const jsbind::Any& value);
    /// Getter of the `options` attribute.
    /// [`RTCRtpScriptTransformer.options`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpScriptTransformer/options)
    [[nodiscard]] jsbind::Any options() const;
};

} // namespace webbind