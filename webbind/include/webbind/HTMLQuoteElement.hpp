#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLQuoteElement : public HTMLElement {
    explicit HTMLQuoteElement(Handle h) noexcept;

public:
    explicit HTMLQuoteElement(const emlite::Val &val) noexcept;
    static HTMLQuoteElement take_ownership(Handle h) noexcept;

    HTMLQuoteElement clone() const noexcept;
    HTMLQuoteElement();
    jsbind::String cite() const;
    void cite(const jsbind::String& value);
};

