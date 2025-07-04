#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Element.hpp"
#include "SVGElement.hpp"
#include "enums.hpp"

class CSSStyleDeclaration;
class DOMStringMap;


class MathMLElement : public Element {
    explicit MathMLElement(Handle h) noexcept;

public:
    explicit MathMLElement(const emlite::Val &val) noexcept;
    static MathMLElement take_ownership(Handle h) noexcept;

    MathMLElement clone() const noexcept;
    CSSStyleDeclaration style() const;
    jsbind::Any onbeforexrselect() const;
    void onbeforexrselect(const jsbind::Any& value);
    DOMStringMap dataset() const;
    jsbind::DOMString nonce() const;
    void nonce(const jsbind::DOMString& value);
    bool autofocus() const;
    void autofocus(bool value);
    long tabIndex() const;
    void tabIndex(long value);
    jsbind::Undefined focus(const FocusOptions& options);
    jsbind::Undefined blur();
};

