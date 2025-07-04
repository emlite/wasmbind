#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLTitleElement : public HTMLElement {
    explicit HTMLTitleElement(Handle h) noexcept;

public:
    explicit HTMLTitleElement(const emlite::Val &val) noexcept;
    static HTMLTitleElement take_ownership(Handle h) noexcept;

    HTMLTitleElement clone() const noexcept;
    HTMLTitleElement();
    jsbind::DOMString text() const;
    void text(const jsbind::DOMString& value);
};

