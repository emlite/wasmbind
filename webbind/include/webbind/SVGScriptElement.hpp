#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;


/// The SVGScriptElement class.
/// [`SVGScriptElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGScriptElement)
class SVGScriptElement : public SVGElement {
    explicit SVGScriptElement(Handle h) noexcept;

public:
    explicit SVGScriptElement(const emlite::Val &val) noexcept;
    static SVGScriptElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGScriptElement clone() const noexcept;
    /// Getter of the `type` attribute.
    /// [`SVGScriptElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGScriptElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`SVGScriptElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGScriptElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `crossOrigin` attribute.
    /// [`SVGScriptElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGScriptElement/crossOrigin)
    [[nodiscard]] jsbind::String crossOrigin() const;
    /// Setter of the `crossOrigin` attribute.
    /// [`SVGScriptElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGScriptElement/crossOrigin)
    void crossOrigin(const jsbind::String& value);
    /// Getter of the `href` attribute.
    /// [`SVGScriptElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGScriptElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

