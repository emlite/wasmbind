#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLDListElement : public HTMLElement {
    explicit HTMLDListElement(Handle h) noexcept;

public:
    explicit HTMLDListElement(const emlite::Val &val) noexcept;
    static HTMLDListElement take_ownership(Handle h) noexcept;

    HTMLDListElement clone() const noexcept;
    HTMLDListElement();
    bool compact() const;
    void compact(bool value);
};

