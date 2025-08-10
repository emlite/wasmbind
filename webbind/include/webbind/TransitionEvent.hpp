#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class TransitionEventInit;

/// Interface TransitionEvent
/// [`TransitionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEvent)
class TransitionEvent : public Event {
    explicit TransitionEvent(Handle h) noexcept;
public:
    explicit TransitionEvent(const emlite::Val &val) noexcept;
    static TransitionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] TransitionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TransitionEvent(..)` constructor, creating a new TransitionEvent instance
    TransitionEvent(const jsbind::String& type);
    /// The `new TransitionEvent(..)` constructor, creating a new TransitionEvent instance
    TransitionEvent(const jsbind::String& type, const TransitionEventInit& transitionEventInitDict);
    /// [`TransitionEvent.propertyName`](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEvent/propertyName)
    /// [`TransitionEvent.propertyName`](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEvent/propertyName)
    [[nodiscard]] jsbind::String propertyName() const;
    /// [`TransitionEvent.elapsedTime`](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEvent/elapsedTime)
    /// [`TransitionEvent.elapsedTime`](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEvent/elapsedTime)
    [[nodiscard]] double elapsedTime() const;
    /// [`TransitionEvent.pseudoElement`](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEvent/pseudoElement)
    /// [`TransitionEvent.pseudoElement`](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEvent/pseudoElement)
    [[nodiscard]] jsbind::String pseudoElement() const;
};

} // namespace webbind