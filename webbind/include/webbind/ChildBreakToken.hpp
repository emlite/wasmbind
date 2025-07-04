#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class LayoutChild;


class ChildBreakToken : public emlite::Val {
    explicit ChildBreakToken(Handle h) noexcept;

public:
    explicit ChildBreakToken(const emlite::Val &val) noexcept;
    static ChildBreakToken take_ownership(Handle h) noexcept;

    ChildBreakToken clone() const noexcept;
    BreakType breakType() const;
    LayoutChild child() const;
};

