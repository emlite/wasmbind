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
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String valueType() const;
    void valueType(const jsbind::String& value);
};

