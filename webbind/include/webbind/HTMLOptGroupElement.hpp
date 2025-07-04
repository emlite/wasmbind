#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLOptGroupElement : public HTMLElement {
    explicit HTMLOptGroupElement(Handle h) noexcept;

public:
    explicit HTMLOptGroupElement(const emlite::Val &val) noexcept;
    static HTMLOptGroupElement take_ownership(Handle h) noexcept;

    HTMLOptGroupElement clone() const noexcept;
    HTMLOptGroupElement();
    bool disabled() const;
    void disabled(bool value);
    jsbind::DOMString label() const;
    void label(const jsbind::DOMString& value);
};

