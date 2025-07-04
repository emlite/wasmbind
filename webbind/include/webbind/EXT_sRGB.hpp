#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EXT_sRGB : public emlite::Val {
    explicit EXT_sRGB(Handle h) noexcept;

public:
    explicit EXT_sRGB(const emlite::Val &val) noexcept;
    static EXT_sRGB take_ownership(Handle h) noexcept;

    EXT_sRGB clone() const noexcept;
};

