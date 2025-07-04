#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLDivElement : public HTMLElement {
    explicit HTMLDivElement(Handle h) noexcept;

public:
    explicit HTMLDivElement(const emlite::Val &val) noexcept;
    static HTMLDivElement take_ownership(Handle h) noexcept;

    HTMLDivElement clone() const noexcept;
    HTMLDivElement();
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
};

