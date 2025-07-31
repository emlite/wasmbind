#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Element.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGSVGElement;
class SVGUseElement;
class DOMStringMap;
class FocusOptions;
class CSSStyleDeclaration;


class FocusOptions : public emlite::Val {
  explicit FocusOptions(Handle h) noexcept;
public:
    static FocusOptions take_ownership(Handle h) noexcept;
    explicit FocusOptions(const emlite::Val &val) noexcept;
    FocusOptions() noexcept;
    [[nodiscard]] FocusOptions clone() const noexcept;
    [[nodiscard]] bool preventScroll() const;
    void preventScroll(bool value);
    [[nodiscard]] bool focusVisible() const;
    void focusVisible(bool value);
};

/// The SVGElement class.
/// [`SVGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement)
class SVGElement : public Element {
    explicit SVGElement(Handle h) noexcept;

public:
    explicit SVGElement(const emlite::Val &val) noexcept;
    static SVGElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGElement clone() const noexcept;
    /// Getter of the `className` attribute.
    /// [`SVGElement.className`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/className)
    [[nodiscard]] SVGAnimatedString className() const;
    /// Getter of the `ownerSVGElement` attribute.
    /// [`SVGElement.ownerSVGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/ownerSVGElement)
    [[nodiscard]] SVGSVGElement ownerSVGElement() const;
    /// Getter of the `viewportElement` attribute.
    /// [`SVGElement.viewportElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/viewportElement)
    [[nodiscard]] SVGElement viewportElement() const;
    /// Getter of the `onbeforexrselect` attribute.
    /// [`SVGElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`SVGElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
    /// Getter of the `correspondingElement` attribute.
    /// [`SVGElement.correspondingElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/correspondingElement)
    [[nodiscard]] SVGElement correspondingElement() const;
    /// Getter of the `correspondingUseElement` attribute.
    /// [`SVGElement.correspondingUseElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/correspondingUseElement)
    [[nodiscard]] SVGUseElement correspondingUseElement() const;
    /// Getter of the `dataset` attribute.
    /// [`SVGElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/dataset)
    [[nodiscard]] DOMStringMap dataset() const;
    /// Getter of the `nonce` attribute.
    /// [`SVGElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/nonce)
    [[nodiscard]] jsbind::String nonce() const;
    /// Setter of the `nonce` attribute.
    /// [`SVGElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/nonce)
    void nonce(const jsbind::String& value);
    /// Getter of the `autofocus` attribute.
    /// [`SVGElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/autofocus)
    [[nodiscard]] bool autofocus() const;
    /// Setter of the `autofocus` attribute.
    /// [`SVGElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/autofocus)
    void autofocus(bool value);
    /// Getter of the `tabIndex` attribute.
    /// [`SVGElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/tabIndex)
    [[nodiscard]] long tabIndex() const;
    /// Setter of the `tabIndex` attribute.
    /// [`SVGElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/tabIndex)
    void tabIndex(long value);
    /// The focus method.
    /// [`SVGElement.focus`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/focus)
    jsbind::Undefined focus();
    /// The focus method.
    /// [`SVGElement.focus`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/focus)
    jsbind::Undefined focus(const FocusOptions& options);
    /// The blur method.
    /// [`SVGElement.blur`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/blur)
    jsbind::Undefined blur();
    /// Getter of the `style` attribute.
    /// [`SVGElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/style)
    [[nodiscard]] CSSStyleDeclaration style() const;
};

