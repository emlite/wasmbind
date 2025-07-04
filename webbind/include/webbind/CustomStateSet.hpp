#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class CustomStateSet : public emlite::Val {
    explicit CustomStateSet(Handle h) noexcept;

public:
    explicit CustomStateSet(const emlite::Val &val) noexcept;
    static CustomStateSet take_ownership(Handle h) noexcept;

    CustomStateSet clone() const noexcept;
};

