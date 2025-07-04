#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLBRElement : public HTMLElement {
    explicit HTMLBRElement(Handle h) noexcept;

public:
    explicit HTMLBRElement(const emlite::Val &val) noexcept;
    static HTMLBRElement take_ownership(Handle h) noexcept;

    HTMLBRElement clone() const noexcept;
    HTMLBRElement();
    jsbind::DOMString clear() const;
    void clear(const jsbind::DOMString& value);
};

