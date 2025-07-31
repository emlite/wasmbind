#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSRule;


/// The CSSStyleDeclaration class.
/// [`CSSStyleDeclaration`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration)
class CSSStyleDeclaration : public emlite::Val {
    explicit CSSStyleDeclaration(Handle h) noexcept;

public:
    explicit CSSStyleDeclaration(const emlite::Val &val) noexcept;
    static CSSStyleDeclaration take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSStyleDeclaration clone() const noexcept;
    /// Getter of the `cssText` attribute.
    /// [`CSSStyleDeclaration.cssText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/cssText)
    [[nodiscard]] jsbind::String cssText() const;
    /// Setter of the `cssText` attribute.
    /// [`CSSStyleDeclaration.cssText`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/cssText)
    void cssText(const jsbind::String& value);
    /// Getter of the `length` attribute.
    /// [`CSSStyleDeclaration.length`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`CSSStyleDeclaration.item`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/item)
    jsbind::String item(unsigned long index);
    /// The getPropertyValue method.
    /// [`CSSStyleDeclaration.getPropertyValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/getPropertyValue)
    jsbind::String getPropertyValue(const jsbind::String& property);
    /// The getPropertyPriority method.
    /// [`CSSStyleDeclaration.getPropertyPriority`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/getPropertyPriority)
    jsbind::String getPropertyPriority(const jsbind::String& property);
    /// The setProperty method.
    /// [`CSSStyleDeclaration.setProperty`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/setProperty)
    jsbind::Undefined setProperty(const jsbind::String& property, const jsbind::String& value);
    /// The setProperty method.
    /// [`CSSStyleDeclaration.setProperty`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/setProperty)
    jsbind::Undefined setProperty(const jsbind::String& property, const jsbind::String& value, const jsbind::String& priority);
    /// The removeProperty method.
    /// [`CSSStyleDeclaration.removeProperty`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/removeProperty)
    jsbind::String removeProperty(const jsbind::String& property);
    /// Getter of the `parentRule` attribute.
    /// [`CSSStyleDeclaration.parentRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleDeclaration/parentRule)
    [[nodiscard]] CSSRule parentRule() const;
};

