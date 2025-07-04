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
    NavigationInterceptOptions clone() const noexcept;
    jsbind::Function handler() const;
    void handler(const jsbind::Function& value);
    NavigationFocusReset focusReset() const;
    void focusReset(const NavigationFocusReset& value);
    NavigationScrollBehavior scroll() const;
    void scroll(const NavigationScrollBehavior& value);
};

class NavigateEvent : public Event {
    explicit NavigateEvent(Handle h) noexcept;

public:
    explicit NavigateEvent(const emlite::Val &val) noexcept;
    static NavigateEvent take_ownership(Handle h) noexcept;

    NavigateEvent clone() const noexcept;
    NavigateEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    NavigationType navigationType() const;
    NavigationDestination destination() const;
    bool canIntercept() const;
    bool userInitiated() const;
    bool hashChange() const;
    AbortSignal signal() const;
    FormData formData() const;
    jsbind::DOMString downloadRequest() const;
    jsbind::Any info() const;
    bool hasUAVisualTransition() const;
    Element sourceElement() const;
    jsbind::Undefined intercept(const NavigationInterceptOptions& options);
    jsbind::Undefined scroll();
};

