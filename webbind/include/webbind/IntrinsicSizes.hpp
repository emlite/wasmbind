#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class IntrinsicSizes : public emlite::Val {
    explicit IntrinsicSizes(Handle h) noexcept;

public:
    explicit IntrinsicSizes(const emlite::Val &val) noexcept;
    static IntrinsicSizes take_ownership(Handle h) noexcept;

    IntrinsicSizes clone() const noexcept;
    double minContentSize() const;
    double maxContentSize() const;
};

