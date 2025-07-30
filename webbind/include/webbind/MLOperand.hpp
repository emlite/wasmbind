#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MLOperand : public emlite::Val {
    explicit MLOperand(Handle h) noexcept;

public:
    explicit MLOperand(const emlite::Val &val) noexcept;
    static MLOperand take_ownership(Handle h) noexcept;

    MLOperand clone() const noexcept;
    MLOperandDataType dataType() const;
    jsbind::TypedArray<unsigned long> shape() const;
};

