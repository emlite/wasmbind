#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRFrame;
class XRInputSource;


/// The XRInputSourceEvent class.
/// [`XRInputSourceEvent`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent)
class XRInputSourceEvent : public Event {
    explicit XRInputSourceEvent(Handle h) noexcept;

public:
    explicit XRInputSourceEvent(const emlite::Val &val) noexcept;
    static XRInputSourceEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] XRInputSourceEvent clone() const noexcept;
    /// The `new XRInputSourceEvent(..)` constructor, creating a new XRInputSourceEvent instance
    XRInputSourceEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `frame` attribute.
    /// [`XRInputSourceEvent.frame`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent/frame)
    [[nodiscard]] XRFrame frame() const;
    /// Getter of the `inputSource` attribute.
    /// [`XRInputSourceEvent.inputSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceEvent/inputSource)
    [[nodiscard]] XRInputSource inputSource() const;
};

