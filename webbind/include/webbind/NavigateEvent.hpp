#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class NavigationDestination;
class AbortSignal;
class FormData;
class Element;
class NavigationInterceptOptions;


class NavigationInterceptOptions : public emlite::Val {
  explicit NavigationInterceptOptions(Handle h) noexcept;
public:
    static NavigationInterceptOptions take_ownership(Handle h) noexcept;
    explicit NavigationInterceptOptions(const emlite::Val &val) noexcept;
    NavigationInterceptOptions() noexcept;
    [[nodiscard]] NavigationInterceptOptions clone() const noexcept;
    [[nodiscard]] jsbind::Function handler() const;
    void handler(const jsbind::Function& value);
    [[nodiscard]] NavigationFocusReset focusReset() const;
    void focusReset(const NavigationFocusReset& value);
    [[nodiscard]] NavigationScrollBehavior scroll() const;
    void scroll(const NavigationScrollBehavior& value);
};

/// The NavigateEvent class.
/// [`NavigateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent)
class NavigateEvent : public Event {
    explicit NavigateEvent(Handle h) noexcept;

public:
    explicit NavigateEvent(const emlite::Val &val) noexcept;
    static NavigateEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigateEvent clone() const noexcept;
    /// The `new NavigateEvent(..)` constructor, creating a new NavigateEvent instance
    NavigateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `navigationType` attribute.
    /// [`NavigateEvent.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/navigationType)
    [[nodiscard]] NavigationType navigationType() const;
    /// Getter of the `destination` attribute.
    /// [`NavigateEvent.destination`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/destination)
    [[nodiscard]] NavigationDestination destination() const;
    /// Getter of the `canIntercept` attribute.
    /// [`NavigateEvent.canIntercept`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/canIntercept)
    [[nodiscard]] bool canIntercept() const;
    /// Getter of the `userInitiated` attribute.
    /// [`NavigateEvent.userInitiated`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/userInitiated)
    [[nodiscard]] bool userInitiated() const;
    /// Getter of the `hashChange` attribute.
    /// [`NavigateEvent.hashChange`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/hashChange)
    [[nodiscard]] bool hashChange() const;
    /// Getter of the `signal` attribute.
    /// [`NavigateEvent.signal`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/signal)
    [[nodiscard]] AbortSignal signal() const;
    /// Getter of the `formData` attribute.
    /// [`NavigateEvent.formData`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/formData)
    [[nodiscard]] FormData formData() const;
    /// Getter of the `downloadRequest` attribute.
    /// [`NavigateEvent.downloadRequest`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/downloadRequest)
    [[nodiscard]] jsbind::String downloadRequest() const;
    /// Getter of the `info` attribute.
    /// [`NavigateEvent.info`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/info)
    [[nodiscard]] jsbind::Any info() const;
    /// Getter of the `hasUAVisualTransition` attribute.
    /// [`NavigateEvent.hasUAVisualTransition`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent/hasUAVisualTransition)
    [[nodiscard]] bool hasUAVisualTransition() const;
    /// Getter of the `sourceElement` attribute.
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

