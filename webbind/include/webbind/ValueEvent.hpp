#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The ValueEvent class.
/// [`ValueEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ValueEvent)
class ValueEvent : public Event {
    explicit ValueEvent(Handle h) noexcept;

public:
    explicit ValueEvent(const emlite::Val &val) noexcept;
    static ValueEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] ValueEvent clone() const noexcept;
    /// The `new ValueEvent(..)` constructor, creating a new ValueEvent instance
    ValueEvent(const jsbind::String& type);
    /// The `new ValueEvent(..)` constructor, creating a new ValueEvent instance
    ValueEvent(const jsbind::String& type, const jsbind::Any& initDict);
    /// Getter of the `value` attribute.
    /// [`ValueEvent.value`](https://developer.mozilla.org/en-US/docs/Web/API/ValueEvent/value)
    [[nodiscard]] jsbind::Any value() const;
};

