#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class RTCRtpScriptTransformer;

/// Interface RTCTransformEvent
/// [`RTCTransformEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTransformEvent)
class RTCTransformEvent : public Event {
    explicit RTCTransformEvent(Handle h) noexcept;
public:
    explicit RTCTransformEvent(const emlite::Val &val) noexcept;
    static RTCTransformEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCTransformEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCTransformEvent.transformer`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTransformEvent/transformer)
    /// [`RTCTransformEvent.transformer`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTransformEvent/transformer)
    [[nodiscard]] RTCRtpScriptTransformer transformer() const;
};

} // namespace webbind