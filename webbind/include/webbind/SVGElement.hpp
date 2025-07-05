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
    FocusOptions clone() const noexcept;
    bool preventScroll() const;
    void preventScroll(bool value);
    bool focusVisible() const;
    void focusVisible(bool value);
};

class SVGElement : public Element {
    explicit SVGElement(Handle h) noexcept;

public:
    explicit SVGElement(const emlite::Val &val) noexcept;
    static SVGElement take_ownership(Handle h) noexcept;

    SVGElement clone() const noexcept;
    SVGAnimatedString className() const;
    SVGSVGElement ownerSVGElement() const;
    SVGElement viewportElement() const;
    jsbind::Any onbeforexrselect() const;
    void onbeforexrselect(const jsbind::Any& value);
    SVGElement correspondingElement() const;
    SVGUseElement correspondingUseElement() const;
    DOMStringMap dataset() const;
    jsbind::DOMString nonce() const;
    void nonce(const jsbind::DOMString& value);
    bool autofocus() const;
    void autofocus(bool value);
    long tabIndex() const;
    void tabIndex(long value);
    jsbind::Undefined focus();
    jsbind::Undefined focus(const FocusOptions& options);
    jsbind::Undefined blur();
    CSSStyleDeclaration style() const;
};

