#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Element.hpp"

namespace webbind {

class CSSStyleProperties;
class DOMStringMap;
class FocusOptions;

/// Interface MathMLElement
/// [`MathMLElement`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement)
class MathMLElement : public Element {
    explicit MathMLElement(Handle h) noexcept;
public:
    explicit MathMLElement(const emlite::Val &val) noexcept;
    static MathMLElement take_ownership(Handle h) noexcept;
    [[nodiscard]] MathMLElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MathMLElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/style)
    /// [`MathMLElement.style`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/style)
    [[nodiscard]] CSSStyleProperties style() const;
    /// [`MathMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/onbeforexrselect)
    /// [`MathMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/onbeforexrselect)
    [[nodiscard]] jsbind::Any onbeforexrselect() const;
    /// Setter of the `onbeforexrselect` attribute.
    /// [`MathMLElement.onbeforexrselect`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/onbeforexrselect)
    void onbeforexrselect(const jsbind::Any& value);
    /// [`MathMLElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/dataset)
    /// [`MathMLElement.dataset`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/dataset)
    [[nodiscard]] DOMStringMap dataset() const;
    /// [`MathMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/nonce)
    /// [`MathMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/nonce)
    [[nodiscard]] jsbind::String nonce() const;
    /// Setter of the `nonce` attribute.
    /// [`MathMLElement.nonce`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/nonce)
    void nonce(const jsbind::String& value);
    /// [`MathMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/autofocus)
    /// [`MathMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/autofocus)
    [[nodiscard]] bool autofocus() const;
    /// Setter of the `autofocus` attribute.
    /// [`MathMLElement.autofocus`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/autofocus)
    void autofocus(bool value);
    /// [`MathMLElement.tabIndex`](https://developer.mozilla.org/en-US/docs/Web/API/MathMLElement/tabIndex)
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

} // namespace webbind