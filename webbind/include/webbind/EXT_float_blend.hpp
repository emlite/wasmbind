#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EXT_float_blend : public emlite::Val {
    explicit EXT_float_blend(Handle h) noexcept;

public:
    explicit EXT_float_blend(const emlite::Val &val) noexcept;
    static EXT_float_blend take_ownership(Handle h) noexcept;

    EXT_float_blend clone() const noexcept;
};

