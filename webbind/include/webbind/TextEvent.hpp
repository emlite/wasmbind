#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEvent.hpp"

namespace webbind {

class Window;

/// Interface TextEvent
/// [`TextEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextEvent)
class TextEvent : public UIEvent {
    explicit TextEvent(Handle h) noexcept;
public:
    explicit TextEvent(const emlite::Val &val) noexcept;
    static TextEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] TextEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `data` attribute.
    /// [`TextEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/TextEvent/data)
    [[nodiscard]] jsbind::String data() const;
    /// The initTextEvent method.
    /// [`TextEvent.initTextEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextEvent/initTextEvent)
    jsbind::Undefined initTextEvent(const jsbind::String& type);
    /// The initTextEvent method.
    /// [`TextEvent.initTextEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextEvent/initTextEvent)
    jsbind::Undefined initTextEvent(const jsbind::String& type, bool bubbles);
    /// The initTextEvent method.
    /// [`TextEvent.initTextEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextEvent/initTextEvent)
    jsbind::Undefined initTextEvent(const jsbind::String& type, bool bubbles, bool cancelable);
    /// The initTextEvent method.
    /// [`TextEvent.initTextEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextEvent/initTextEvent)
    jsbind::Undefined initTextEvent(const jsbind::String& type, bool bubbles, bool cancelable, const Window& view);
    /// The initTextEvent method.
    /// [`TextEvent.initTextEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextEvent/initTextEvent)
    jsbind::Undefined initTextEvent(const jsbind::String& type, bool bubbles, bool cancelable, const Window& view, const jsbind::String& data);
};

} // namespace webbind