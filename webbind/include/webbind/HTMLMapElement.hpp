#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLCollection;


class HTMLMapElement : public HTMLElement {
    explicit HTMLMapElement(Handle h) noexcept;

public:
    explicit HTMLMapElement(const emlite::Val &val) noexcept;
    static HTMLMapElement take_ownership(Handle h) noexcept;

    HTMLMapElement clone() const noexcept;
    HTMLMapElement();
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    HTMLCollection areas() const;
};

