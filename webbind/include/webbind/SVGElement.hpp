#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Element.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGSVGElement;
class SVGElement;
class SVGUseElement;
class DOMStringMap;
class FocusOptions;
class CSSStyleProperties;

/// Interface SVGElement
/// [`SVGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement)
class SVGElement : public Element {
    explicit SVGElement(Handle h) noexcept;
public:
    explicit SVGElement(const emlite::Val &val) noexcept;
    static SVGElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGElement.className`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/className)
    /// [`SVGElement.className`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/className)
    [[nodiscard]] SVGAnimatedString className() const;
    /// [`SVGElement.ownerSVGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/ownerSVGElement)
    /// [`SVGElement.ownerSVGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/ownerSVGElement)
    [[nodiscard]] SVGSVGElement ownerSVGElement() const;
    /// [`SVGElement.viewportElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/viewportElement)
    /// [`SVGElement.viewportElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/viewportElement)
    [[nodiscard]] SVGElement viewportElement() const;
    /// [`SVGElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/onbeforexrselect)
    /// [`SVGElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`SVGElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
    /// [`SVGElement.correspondingElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/correspondingElement)
    /// [`SVGElement.correspondingElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/correspondingElement)
    [[nodiscard]] SVGElement correspondingElement() const;
    /// [`SVGElement.correspondingUseElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/correspondingUseElement)
    /// [`SVGElement.correspondingUseElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/correspondingUseElement)
    [[nodiscard]] SVGUseElement correspondingUseElement() const;
    /// [`SVGElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/dataset)
    /// [`SVGElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/dataset)
    [[nodiscard]] DOMStringMap dataset() const;
    /// [`SVGElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/nonce)
    /// [`SVGElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/nonce)
    [[nodiscard]] jsbind::String nonce() const;
    /// Setter of the `nonce` attribute.
    /// [`SVGElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/nonce)
    void nonce(const jsbind::String& value);
    /// [`SVGElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/autofocus)
    /// [`SVGElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/autofocus)
    [[nodiscard]] bool autofocus() const;
    /// Setter of the `autofocus` attribute.
    /// [`SVGElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/autofocus)
    void autofocus(bool value);
    /// [`SVGElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/tabIndex)
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
    /// [`SVGElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/style)
    /// [`SVGElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/SVGElement/style)
    [[nodiscard]] CSSStyleProperties style() const;
};

} // namespace webbind