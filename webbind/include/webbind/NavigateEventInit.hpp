#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class NavigationDestination;
class AbortSignal;
class FormData;
class Element;

/// Dictionary type NavigateEventInit
/// [`NavigateEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEventInit)
class NavigateEventInit : public EventInit {
  explicit NavigateEventInit(Handle h) noexcept;
public:
    static NavigateEventInit take_ownership(Handle h) noexcept;
    explicit NavigateEventInit(const emlite::Val &val) noexcept;
    NavigateEventInit() noexcept;
    [[nodiscard]] NavigateEventInit clone() const noexcept;
    [[nodiscard]] NavigationType navigationType() const;
    void navigationType(const NavigationType& value);
    [[nodiscard]] NavigationDestination destination() const;
    void destination(const NavigationDestination& value);
    [[nodiscard]] bool canIntercept() const;
    void canIntercept(bool value);
    [[nodiscard]] bool userInitiated() const;
    void userInitiated(bool value);
    [[nodiscard]] bool hashChange() const;
    void hashChange(bool value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] FormData formData() const;
    void formData(const FormData& value);
    [[nodiscard]] jsbind::String downloadRequest() const;
    void downloadRequest(const jsbind::String& value);
    [[nodiscard]] jsbind::Any info() const;
    void info(const jsbind::Any& value);
    [[nodiscard]] bool hasUAVisualTransition() const;
    void hasUAVisualTransition(bool value);
    [[nodiscard]] Element sourceElement() const;
    void sourceElement(const Element& value);
};

} // namespace webbind