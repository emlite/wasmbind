#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLTableCaptionElement : public HTMLElement {
    explicit HTMLTableCaptionElement(Handle h) noexcept;

public:
    explicit HTMLTableCaptionElement(const emlite::Val &val) noexcept;
    static HTMLTableCaptionElement take_ownership(Handle h) noexcept;

    HTMLTableCaptionElement clone() const noexcept;
    HTMLTableCaptionElement();
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
};

