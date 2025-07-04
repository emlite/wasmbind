#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLDirectoryElement : public HTMLElement {
    explicit HTMLDirectoryElement(Handle h) noexcept;

public:
    explicit HTMLDirectoryElement(const emlite::Val &val) noexcept;
    static HTMLDirectoryElement take_ownership(Handle h) noexcept;

    HTMLDirectoryElement clone() const noexcept;
    HTMLDirectoryElement();
    bool compact() const;
    void compact(bool value);
};

