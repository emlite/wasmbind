#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class OES_standard_derivatives : public emlite::Val {
    explicit OES_standard_derivatives(Handle h) noexcept;

public:
    explicit OES_standard_derivatives(const emlite::Val &val) noexcept;
    static OES_standard_derivatives take_ownership(Handle h) noexcept;

    OES_standard_derivatives clone() const noexcept;
};

