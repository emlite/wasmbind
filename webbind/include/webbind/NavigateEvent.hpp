#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "NavigateEventInit.hpp"
#include "NavigationInterceptOptions.hpp"
#include "enums.hpp"

namespace webbind {

class NavigationDestination;
class AbortSignal;
class FormData;
class Element;

/// Interface NavigateEvent
/// [`NavigateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent)
class NavigateEvent : public Event {
    explicit NavigateEvent(Handle h) noexcept;
public:
    explicit NavigateEvent(const emlite::Val &val) noexcept;
    static NavigateEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigateEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new NavigateEvent(..)` constructor, creating a new NavigateEvent instance
    NavigateEvent(const jsbind::String& type, const NavigateEventInit& eventInitDict);
    /// [`NavigateEvent.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/navigationType)
    /// [`NavigateEvent.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/navigationType)
    [[nodiscard]] NavigationType navigationType() const;
    /// [`NavigateEvent.destination`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/destination)
    /// [`NavigateEvent.destination`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/destination)
    [[nodiscard]] NavigationDestination destination() const;
    /// [`NavigateEvent.canIntercept`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/canIntercept)
    /// [`NavigateEvent.canIntercept`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/canIntercept)
    [[nodiscard]] bool canIntercept() const;
    /// [`NavigateEvent.userInitiated`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/userInitiated)
    /// [`NavigateEvent.userInitiated`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/userInitiated)
    [[nodiscard]] bool userInitiated() const;
    /// [`NavigateEvent.hashChange`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/hashChange)
    /// [`NavigateEvent.hashChange`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/hashChange)
    [[nodiscard]] bool hashChange() const;
    /// [`NavigateEvent.signal`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/signal)
    /// [`NavigateEvent.signal`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/signal)
    [[nodiscard]] AbortSignal signal() const;
    /// [`NavigateEvent.formData`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/formData)
    /// [`NavigateEvent.formData`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/formData)
    [[nodiscard]] FormData formData() const;
    /// [`NavigateEvent.downloadRequest`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/downloadRequest)
    /// [`NavigateEvent.downloadRequest`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/downloadRequest)
    [[nodiscard]] jsbind::String downloadRequest() const;
    /// [`NavigateEvent.info`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/info)
    /// [`NavigateEvent.info`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/info)
    [[nodiscard]] jsbind::Any info() const;
    /// [`NavigateEvent.hasUAVisualTransition`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/hasUAVisualTransition)
    /// [`NavigateEvent.hasUAVisualTransition`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/hasUAVisualTransition)
    [[nodiscard]] bool hasUAVisualTransition() const;
    /// [`NavigateEvent.sourceElement`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/sourceElement)
    /// [`NavigateEvent.sourceElement`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/sourceElement)
    [[nodiscard]] Element sourceElement() const;
    /// The intercept method.
    /// [`NavigateEvent.intercept`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/intercept)
    jsbind::Undefined intercept();
    /// The intercept method.
    /// [`NavigateEvent.intercept`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/intercept)
    jsbind::Undefined intercept(const NavigationInterceptOptions& options);
    /// The scroll method.
    /// [`NavigateEvent.scroll`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/scroll)
    jsbind::Undefined scroll();
};

} // namespace webbind