#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLUListElement : public HTMLElement {
    explicit HTMLUListElement(Handle h) noexcept;

public:
    explicit HTMLUListElement(const emlite::Val &val) noexcept;
    static HTMLUListElement take_ownership(Handle h) noexcept;

    HTMLUListElement clone() const noexcept;
    HTMLUListElement();
    bool compact() const;
    void compact(bool value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
};

