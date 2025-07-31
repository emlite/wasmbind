#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Element.hpp"
#include "SVGElement.hpp"
#include "enums.hpp"

class CSSStyleDeclaration;
class DOMStringMap;


/// The MathMLElement class.
/// [`MathMLElement`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement)
class MathMLElement : public Element {
    explicit MathMLElement(Handle h) noexcept;

public:
    explicit MathMLElement(const emlite::Val &val) noexcept;
    static MathMLElement take_ownership(Handle h) noexcept;

    [[nodiscard]] MathMLElement clone() const noexcept;
    /// Getter of the `style` attribute.
    /// [`MathMLElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/style)
    [[nodiscard]] CSSStyleDeclaration style() const;
    /// Getter of the `onbeforexrselect` attribute.
    /// [`MathMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`MathMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
    /// Getter of the `dataset` attribute.
    /// [`MathMLElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/dataset)
    [[nodiscard]] DOMStringMap dataset() const;
    /// Getter of the `nonce` attribute.
    /// [`MathMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/nonce)
    [[nodiscard]] jsbind::String nonce() const;
    /// Setter of the `nonce` attribute.
    /// [`MathMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/nonce)
    void nonce(const jsbind::String& value);
    /// Getter of the `autofocus` attribute.
    /// [`MathMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/autofocus)
    [[nodiscard]] bool autofocus() const;
    /// Setter of the `autofocus` attribute.
    /// [`MathMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/autofocus)
    void autofocus(bool value);
    /// Getter of the `tabIndex` attribute.
    /// [`MathMLElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/tabIndex)
    [[nodiscard]] long tabIndex() const;
    /// Setter of the `tabIndex` attribute.
    /// [`MathMLElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/tabIndex)
    void tabIndex(long value);
    /// The focus method.
    /// [`MathMLElement.focus`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/focus)
    jsbind::Undefined focus();
    /// The focus method.
    /// [`MathMLElement.focus`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/focus)
    jsbind::Undefined focus(const FocusOptions& options);
    /// The blur method.
    /// [`MathMLElement.blur`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/blur)
    jsbind::Undefined blur();
};

