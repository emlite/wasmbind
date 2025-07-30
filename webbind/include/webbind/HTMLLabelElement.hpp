#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;


class HTMLLabelElement : public HTMLElement {
    explicit HTMLLabelElement(Handle h) noexcept;

public:
    explicit HTMLLabelElement(const emlite::Val &val) noexcept;
    static HTMLLabelElement take_ownership(Handle h) noexcept;

    HTMLLabelElement clone() const noexcept;
    HTMLLabelElement();
    HTMLFormElement form() const;
    jsbind::String htmlFor() const;
    void htmlFor(const jsbind::String& value);
    HTMLElement control() const;
};

