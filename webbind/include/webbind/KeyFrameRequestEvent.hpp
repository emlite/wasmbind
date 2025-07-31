#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The KeyFrameRequestEvent class.
/// [`KeyFrameRequestEvent`](https://developer.mozilla.org/en-US/docs/Web/API/KeyFrameRequestEvent)
class KeyFrameRequestEvent : public Event {
    explicit KeyFrameRequestEvent(Handle h) noexcept;

public:
    explicit KeyFrameRequestEvent(const emlite::Val &val) noexcept;
    static KeyFrameRequestEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] KeyFrameRequestEvent clone() const noexcept;
    /// The `new KeyFrameRequestEvent(..)` constructor, creating a new KeyFrameRequestEvent instance
    KeyFrameRequestEvent(const jsbind::String& type);
    /// The `new KeyFrameRequestEvent(..)` constructor, creating a new KeyFrameRequestEvent instance
    KeyFrameRequestEvent(const jsbind::String& type, const jsbind::String& rid);
    /// Getter of the `rid` attribute.
    /// [`KeyFrameRequestEvent.rid`](https://developer.mozilla.org/en-US/docs/Web/API/KeyFrameRequestEvent/rid)
    [[nodiscard]] jsbind::String rid() const;
};

