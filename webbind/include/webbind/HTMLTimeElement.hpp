#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLTimeElement : public HTMLElement {
    explicit HTMLTimeElement(Handle h) noexcept;

public:
    explicit HTMLTimeElement(const emlite::Val &val) noexcept;
    static HTMLTimeElement take_ownership(Handle h) noexcept;

    HTMLTimeElement clone() const noexcept;
    HTMLTimeElement();
    jsbind::String dateTime() const;
    void dateTime(const jsbind::String& value);
};

