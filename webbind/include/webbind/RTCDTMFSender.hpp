#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface RTCDTMFSender
/// [`RTCDTMFSender`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender)
class RTCDTMFSender : public EventTarget {
    explicit RTCDTMFSender(Handle h) noexcept;
public:
    explicit RTCDTMFSender(const emlite::Val &val) noexcept;
    static RTCDTMFSender take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDTMFSender clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The insertDTMF method.
    /// [`RTCDTMFSender.insertDTMF`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender/insertDTMF)
    jsbind::Undefined insertDTMF(const jsbind::String& tones);
    /// The insertDTMF method.
    /// [`RTCDTMFSender.insertDTMF`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender/insertDTMF)
    jsbind::Undefined insertDTMF(const jsbind::String& tones, unsigned long duration);
    /// The insertDTMF method.
    /// [`RTCDTMFSender.insertDTMF`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender/insertDTMF)
    jsbind::Undefined insertDTMF(const jsbind::String& tones, unsigned long duration, unsigned long interToneGap);
    /// Getter of the `ontonechange` attribute.
    /// [`RTCDTMFSender.ontonechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender/ontonechange)
    [[nodiscard]] jsbind::Any ontonechange() const;
    /// Setter of the `ontonechange` attribute.
    /// [`RTCDTMFSender.ontonechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender/ontonechange)
    void ontonechange(const jsbind::Any& value);
    /// Getter of the `canInsertDTMF` attribute.
    /// [`RTCDTMFSender.canInsertDTMF`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender/canInsertDTMF)
    [[nodiscard]] bool canInsertDTMF() const;
    /// Getter of the `toneBuffer` attribute.
    /// [`RTCDTMFSender.toneBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender/toneBuffer)
    [[nodiscard]] jsbind::String toneBuffer() const;
};

} // namespace webbind