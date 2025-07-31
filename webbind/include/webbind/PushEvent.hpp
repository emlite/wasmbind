#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class PushMessageData;


/// The PushEvent class.
/// [`PushEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PushEvent)
class PushEvent : public ExtendableEvent {
    explicit PushEvent(Handle h) noexcept;

public:
    explicit PushEvent(const emlite::Val &val) noexcept;
    static PushEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PushEvent clone() const noexcept;
    /// The `new PushEvent(..)` constructor, creating a new PushEvent instance
    PushEvent(const jsbind::String& type);
    /// The `new PushEvent(..)` constructor, creating a new PushEvent instance
    PushEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `data` attribute.
    /// [`PushEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/PushEvent/data)
    [[nodiscard]] PushMessageData data() const;
};

