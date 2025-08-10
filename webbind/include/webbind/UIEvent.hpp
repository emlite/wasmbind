#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class UIEventInit;
class Window;
class InputDeviceCapabilities;

/// Interface UIEvent
/// [`UIEvent`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent)
class UIEvent : public Event {
    explicit UIEvent(Handle h) noexcept;
public:
    explicit UIEvent(const emlite::Val &val) noexcept;
    static UIEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] UIEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new UIEvent(..)` constructor, creating a new UIEvent instance
    UIEvent(const jsbind::String& type);
    /// The `new UIEvent(..)` constructor, creating a new UIEvent instance
    UIEvent(const jsbind::String& type, const UIEventInit& eventInitDict);
    /// [`UIEvent.view`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/view)
    /// [`UIEvent.view`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/view)
    [[nodiscard]] Window view() const;
    /// [`UIEvent.detail`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/detail)
    /// [`UIEvent.detail`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/detail)
    [[nodiscard]] long detail() const;
    /// [`UIEvent.sourceCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/sourceCapabilities)
    /// [`UIEvent.sourceCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/sourceCapabilities)
    [[nodiscard]] InputDeviceCapabilities sourceCapabilities() const;
    /// The initUIEvent method.
    /// [`UIEvent.initUIEvent`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/initUIEvent)
    jsbind::Undefined initUIEvent(const jsbind::String& typeArg);
    /// The initUIEvent method.
    /// [`UIEvent.initUIEvent`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/initUIEvent)
    jsbind::Undefined initUIEvent(const jsbind::String& typeArg, bool bubblesArg);
    /// The initUIEvent method.
    /// [`UIEvent.initUIEvent`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/initUIEvent)
    jsbind::Undefined initUIEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg);
    /// The initUIEvent method.
    /// [`UIEvent.initUIEvent`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/initUIEvent)
    jsbind::Undefined initUIEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg);
    /// The initUIEvent method.
    /// [`UIEvent.initUIEvent`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/initUIEvent)
    jsbind::Undefined initUIEvent(const jsbind::String& typeArg, bool bubblesArg, bool cancelableArg, const Window& viewArg, long detailArg);
    /// [`UIEvent.which`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/which)
    /// [`UIEvent.which`](https://developer.mozilla.org/en-US/docs/Web/API/UIEvent/which)
    [[nodiscard]] unsigned long which() const;
};

} // namespace webbind