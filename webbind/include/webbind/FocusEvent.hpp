#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEvent.hpp"
#include "FocusEventInit.hpp"

namespace webbind {

class EventTarget;

/// Interface FocusEvent
/// [`FocusEvent`](https://developer.mozilla.org/en-US/docs/Web/API/FocusEvent)
class FocusEvent : public UIEvent {
    explicit FocusEvent(Handle h) noexcept;
public:
    explicit FocusEvent(const emlite::Val &val) noexcept;
    static FocusEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] FocusEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FocusEvent(..)` constructor, creating a new FocusEvent instance
    FocusEvent(const jsbind::String& type);
    /// The `new FocusEvent(..)` constructor, creating a new FocusEvent instance
    FocusEvent(const jsbind::String& type, const FocusEventInit& eventInitDict);
    /// [`FocusEvent.relatedTarget`](https://developer.mozilla.org/en-US/docs/Web/API/FocusEvent/relatedTarget)
    /// [`FocusEvent.relatedTarget`](https://developer.mozilla.org/en-US/docs/Web/API/FocusEvent/relatedTarget)
    [[nodiscard]] EventTarget relatedTarget() const;
};

} // namespace webbind