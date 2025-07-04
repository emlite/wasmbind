#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLParamElement : public HTMLElement {
    explicit HTMLParamElement(Handle h) noexcept;

public:
    explicit HTMLParamElement(const emlite::Val &val) noexcept;
    static HTMLParamElement take_ownership(Handle h) noexcept;

    HTMLParamElement clone() const noexcept;
    HTMLParamElement();
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::DOMString valueType() const;
    void valueType(const jsbind::DOMString& value);
};

