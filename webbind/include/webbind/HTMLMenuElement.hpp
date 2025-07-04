#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLMenuElement : public HTMLElement {
    explicit HTMLMenuElement(Handle h) noexcept;

public:
    explicit HTMLMenuElement(const emlite::Val &val) noexcept;
    static HTMLMenuElement take_ownership(Handle h) noexcept;

    HTMLMenuElement clone() const noexcept;
    HTMLMenuElement();
    bool compact() const;
    void compact(bool value);
};

