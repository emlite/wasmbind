#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "CloseEventInit.hpp"

namespace webbind {

/// Interface CloseEvent
/// [`CloseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent)
class CloseEvent : public Event {
    explicit CloseEvent(Handle h) noexcept;
public:
    explicit CloseEvent(const emlite::Val &val) noexcept;
    static CloseEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] CloseEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CloseEvent(..)` constructor, creating a new CloseEvent instance
    CloseEvent(const jsbind::String& type);
    /// The `new CloseEvent(..)` constructor, creating a new CloseEvent instance
    CloseEvent(const jsbind::String& type, const CloseEventInit& eventInitDict);
    /// [`CloseEvent.wasClean`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/wasClean)
    /// [`CloseEvent.wasClean`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/wasClean)
    [[nodiscard]] bool wasClean() const;
    /// [`CloseEvent.code`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/code)
    /// [`CloseEvent.code`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/code)
    [[nodiscard]] unsigned short code() const;
    /// [`CloseEvent.reason`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/reason)
    /// [`CloseEvent.reason`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEvent/reason)
    [[nodiscard]] jsbind::String reason() const;
};

} // namespace webbind