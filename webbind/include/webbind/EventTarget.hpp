#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Event;
class Observable;
class ObservableEventListenerOptions;

/// Interface EventTarget
/// [`EventTarget`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget)
class EventTarget : public emlite::Val {
    explicit EventTarget(Handle h) noexcept;
public:
    explicit EventTarget(const emlite::Val &val) noexcept;
    static EventTarget take_ownership(Handle h) noexcept;
    [[nodiscard]] EventTarget clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new EventTarget(..)` constructor, creating a new EventTarget instance
    EventTarget();
    /// The addEventListener method.
    /// [`EventTarget.addEventListener`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/addEventListener)
    jsbind::Undefined addEventListener(const jsbind::String& type, const jsbind::Function& callback);
    /// The addEventListener method.
    /// [`EventTarget.addEventListener`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/addEventListener)
    jsbind::Undefined addEventListener(const jsbind::String& type, const jsbind::Function& callback, const jsbind::Any& options);
    /// The removeEventListener method.
    /// [`EventTarget.removeEventListener`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/removeEventListener)
    jsbind::Undefined removeEventListener(const jsbind::String& type, const jsbind::Function& callback);
    /// The removeEventListener method.
    /// [`EventTarget.removeEventListener`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/removeEventListener)
    jsbind::Undefined removeEventListener(const jsbind::String& type, const jsbind::Function& callback, const jsbind::Any& options);
    /// The dispatchEvent method.
    /// [`EventTarget.dispatchEvent`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/dispatchEvent)
    bool dispatchEvent(const Event& event);
    /// The when method.
    /// [`EventTarget.when`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/when)
    Observable when(const jsbind::String& type);
    /// The when method.
    /// [`EventTarget.when`](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/when)
    Observable when(const jsbind::String& type, const ObservableEventListenerOptions& options);
};

} // namespace webbind