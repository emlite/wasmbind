#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLCollection;


class HTMLDataListElement : public HTMLElement {
    explicit HTMLDataListElement(Handle h) noexcept;

public:
    explicit HTMLDataListElement(const emlite::Val &val) noexcept;
    static HTMLDataListElement take_ownership(Handle h) noexcept;

    HTMLDataListElement clone() const noexcept;
    HTMLDataListElement();
    HTMLCollection options() const;
};

