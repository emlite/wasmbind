#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;


class HTMLLegendElement : public HTMLElement {
    explicit HTMLLegendElement(Handle h) noexcept;

public:
    explicit HTMLLegendElement(const emlite::Val &val) noexcept;
    static HTMLLegendElement take_ownership(Handle h) noexcept;

    HTMLLegendElement clone() const noexcept;
    HTMLLegendElement();
    HTMLFormElement form() const;
    jsbind::String align() const;
    void align(const jsbind::String& value);
};

