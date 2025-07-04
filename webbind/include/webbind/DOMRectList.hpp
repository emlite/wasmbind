#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRect;


class DOMRectList : public emlite::Val {
    explicit DOMRectList(Handle h) noexcept;

public:
    explicit DOMRectList(const emlite::Val &val) noexcept;
    static DOMRectList take_ownership(Handle h) noexcept;

    DOMRectList clone() const noexcept;
    unsigned long length() const;
    DOMRect item(unsigned long index);
};

