#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEvent.hpp"
#include "CompositionEventInit.hpp"

namespace webbind {

/// Interface CompositionEvent
/// [`CompositionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CompositionEvent)
class CompositionEvent : public UIEvent {
    explicit CompositionEvent(Handle h) noexcept;
public:
    explicit CompositionEvent(const emlite::Val &val) noexcept;
    static CompositionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] CompositionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CompositionEvent(..)` constructor, creating a new CompositionEvent instance
    CompositionEvent(const jsbind::String& type);
    /// The `new CompositionEvent(..)` constructor, creating a new CompositionEvent instance
    CompositionEvent(const jsbind::String& type, const CompositionEventInit& eventInitDict);
    /// Getter of the `data` attribute.
    /// [`CompositionEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/CompositionEvent/data)
    [[nodiscard]] jsbind::String data() const;
    /// The initCompositionEvent method.
    /// [`CompositionEvent.initCompositionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CompositionEvent/initCompositionEvent)
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg);
    /// The initCompositionEvent method.
    /// [`CompositionEvent.initCompositionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CompositionEvent/initCompositionEvent)
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg);
    /// The initCompositionEvent method.
    /// [`CompositionEvent.initCompositionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CompositionEvent/initCompositionEvent)
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg);
    /// The initCompositionEvent method.
    /// [`CompositionEvent.initCompositionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CompositionEvent/initCompositionEvent)
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const jsbind::Any& viewArg);
    /// The initCompositionEvent method.
    /// [`CompositionEvent.initCompositionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CompositionEvent/initCompositionEvent)
    jsbind::Undefined initCompositionEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const jsbind::Any& viewArg, const jsbind::String& dataArg);
};

} // namespace webbind