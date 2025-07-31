#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The SFrameTransformErrorEvent class.
/// [`SFrameTransformErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformErrorEvent)
class SFrameTransformErrorEvent : public Event {
    explicit SFrameTransformErrorEvent(Handle h) noexcept;

public:
    explicit SFrameTransformErrorEvent(const emlite::Val &val) noexcept;
    static SFrameTransformErrorEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] SFrameTransformErrorEvent clone() const noexcept;
    /// The `new SFrameTransformErrorEvent(..)` constructor, creating a new SFrameTransformErrorEvent instance
    SFrameTransformErrorEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `errorType` attribute.
    /// [`SFrameTransformErrorEvent.errorType`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformErrorEvent/errorType)
    [[nodiscard]] SFrameTransformErrorEventType errorType() const;
    /// Getter of the `keyID` attribute.
    /// [`SFrameTransformErrorEvent.keyID`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformErrorEvent/keyID)
    [[nodiscard]] jsbind::Any keyID() const;
    /// Getter of the `frame` attribute.
    /// [`SFrameTransformErrorEvent.frame`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformErrorEvent/frame)
    [[nodiscard]] jsbind::Any frame() const;
};

