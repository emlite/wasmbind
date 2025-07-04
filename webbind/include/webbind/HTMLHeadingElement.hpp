#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLHeadingElement : public HTMLElement {
    explicit HTMLHeadingElement(Handle h) noexcept;

public:
    explicit HTMLHeadingElement(const emlite::Val &val) noexcept;
    static HTMLHeadingElement take_ownership(Handle h) noexcept;

    HTMLHeadingElement clone() const noexcept;
    HTMLHeadingElement();
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
};

