#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The CloseEvent class.
/// [`CloseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent)
class CloseEvent : public Event {
    explicit CloseEvent(Handle h) noexcept;

public:
    explicit CloseEvent(const emlite::Val &val) noexcept;
    static CloseEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] CloseEvent clone() const noexcept;
    /// The `new CloseEvent(..)` constructor, creating a new CloseEvent instance
    CloseEvent(const jsbind::String& type);
    /// The `new CloseEvent(..)` constructor, creating a new CloseEvent instance
    CloseEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `wasClean` attribute.
    /// [`CloseEvent.wasClean`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/wasClean)
    [[nodiscard]] bool wasClean() const;
    /// Getter of the `code` attribute.
    /// [`CloseEvent.code`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/code)
    [[nodiscard]] unsigned short code() const;
    /// Getter of the `reason` attribute.
    /// [`CloseEvent.reason`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/reason)
    [[nodiscard]] jsbind::String reason() const;
};

