#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class XRInputSourceEventInit;
class XRFrame;
class XRInputSource;

/// Interface XRInputSourceEvent
/// [`XRInputSourceEvent`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent)
class XRInputSourceEvent : public Event {
    explicit XRInputSourceEvent(Handle h) noexcept;
public:
    explicit XRInputSourceEvent(const emlite::Val &val) noexcept;
    static XRInputSourceEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] XRInputSourceEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRInputSourceEvent(..)` constructor, creating a new XRInputSourceEvent instance
    XRInputSourceEvent(const jsbind::String& type, const XRInputSourceEventInit& eventInitDict);
    /// [`XRInputSourceEvent.frame`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent/frame)
    /// [`XRInputSourceEvent.frame`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent/frame)
    [[nodiscard]] XRFrame frame() const;
    /// [`XRInputSourceEvent.inputSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent/inputSource)
    /// [`XRInputSourceEvent.inputSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent/inputSource)
    [[nodiscard]] XRInputSource inputSource() const;
};

} // namespace webbind