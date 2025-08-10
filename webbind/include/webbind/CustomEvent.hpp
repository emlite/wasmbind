#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "CustomEventInit.hpp"

namespace webbind {

/// Interface CustomEvent
/// [`CustomEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent)
class CustomEvent : public Event {
    explicit CustomEvent(Handle h) noexcept;
public:
    explicit CustomEvent(const emlite::Val &val) noexcept;
    static CustomEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] CustomEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CustomEvent(..)` constructor, creating a new CustomEvent instance
    CustomEvent(const jsbind::String& type);
    /// The `new CustomEvent(..)` constructor, creating a new CustomEvent instance
    CustomEvent(const jsbind::String& type, const CustomEventInit& eventInitDict);
    /// [`CustomEvent.detail`](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent/detail)
    /// [`CustomEvent.detail`](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent/detail)
    [[nodiscard]] jsbind::Any detail() const;
    /// The initCustomEvent method.
    /// [`CustomEvent.initCustomEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent/initCustomEvent)
    jsbind::Undefined initCustomEvent(const jsbind::String& type);
    /// The initCustomEvent method.
    /// [`CustomEvent.initCustomEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent/initCustomEvent)
    jsbind::Undefined initCustomEvent(const jsbind::String& type, bool bubbles);
    /// The initCustomEvent method.
    /// [`CustomEvent.initCustomEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent/initCustomEvent)
    jsbind::Undefined initCustomEvent(const jsbind::String& type, bool bubbles, bool cancelable);
    /// The initCustomEvent method.
    /// [`CustomEvent.initCustomEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent/initCustomEvent)
    jsbind::Undefined initCustomEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& detail);
};

} // namespace webbind