#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLDataElement : public HTMLElement {
    explicit HTMLDataElement(Handle h) noexcept;

public:
    explicit HTMLDataElement(const emlite::Val &val) noexcept;
    static HTMLDataElement take_ownership(Handle h) noexcept;

    HTMLDataElement clone() const noexcept;
    HTMLDataElement();
    jsbind::String value() const;
    void value(const jsbind::String& value);
};

