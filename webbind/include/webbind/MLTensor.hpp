#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MLTensor : public emlite::Val {
    explicit MLTensor(Handle h) noexcept;

public:
    explicit MLTensor(const emlite::Val &val) noexcept;
    static MLTensor take_ownership(Handle h) noexcept;

    MLTensor clone() const noexcept;
    MLOperandDataType dataType() const;
    jsbind::TypedArray<unsigned long> shape() const;
    bool readable() const;
    bool writable() const;
    bool constant() const;
    jsbind::Undefined destroy();
};

