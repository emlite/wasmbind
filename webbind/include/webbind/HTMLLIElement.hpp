#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLLIElement : public HTMLElement {
    explicit HTMLLIElement(Handle h) noexcept;

public:
    explicit HTMLLIElement(const emlite::Val &val) noexcept;
    static HTMLLIElement take_ownership(Handle h) noexcept;

    HTMLLIElement clone() const noexcept;
    HTMLLIElement();
    long value() const;
    void value(long value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
};

