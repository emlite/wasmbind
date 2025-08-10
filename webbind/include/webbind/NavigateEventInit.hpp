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
class NavigateEventInit : public EventInit {
  explicit NavigateEventInit(Handle h) noexcept;
public:
    static NavigateEventInit take_ownership(Handle h) noexcept;
    explicit NavigateEventInit(const emlite::Val &val) noexcept;
    NavigateEventInit() noexcept;
    [[nodiscard]] NavigateEventInit clone() const noexcept;
    /// Getter of the `navigationType` attribute.
    [[nodiscard]] NavigationType navigationType() const;
    /// Setter of the `navigationType` attribute.
    void navigationType(const NavigationType& value);
    /// Getter of the `destination` attribute.
    [[nodiscard]] NavigationDestination destination() const;
    /// Setter of the `destination` attribute.
    void destination(const NavigationDestination& value);
    /// Getter of the `canIntercept` attribute.
    [[nodiscard]] bool canIntercept() const;
    /// Setter of the `canIntercept` attribute.
    void canIntercept(bool value);
    /// Getter of the `userInitiated` attribute.
    [[nodiscard]] bool userInitiated() const;
    /// Setter of the `userInitiated` attribute.
    void userInitiated(bool value);
    /// Getter of the `hashChange` attribute.
    [[nodiscard]] bool hashChange() const;
    /// Setter of the `hashChange` attribute.
    void hashChange(bool value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
    /// Getter of the `formData` attribute.
    [[nodiscard]] FormData formData() const;
    /// Setter of the `formData` attribute.
    void formData(const FormData& value);
    /// Getter of the `downloadRequest` attribute.
    [[nodiscard]] jsbind::String downloadRequest() const;
    /// Setter of the `downloadRequest` attribute.
    void downloadRequest(const jsbind::String& value);
    /// Getter of the `info` attribute.
    [[nodiscard]] jsbind::Any info() const;
    /// Setter of the `info` attribute.
    void info(const jsbind::Any& value);
    /// Getter of the `hasUAVisualTransition` attribute.
    [[nodiscard]] bool hasUAVisualTransition() const;
    /// Setter of the `hasUAVisualTransition` attribute.
    void hasUAVisualTransition(bool value);
    /// Getter of the `sourceElement` attribute.
    [[nodiscard]] Element sourceElement() const;
    /// Setter of the `sourceElement` attribute.
    void sourceElement(const Element& value);
};

} // namespace webbind