#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class BarProp : public emlite::Val {
    explicit BarProp(Handle h) noexcept;

public:
    explicit BarProp(const emlite::Val &val) noexcept;
    static BarProp take_ownership(Handle h) noexcept;

    BarProp clone() const noexcept;
    bool visible() const;
};

