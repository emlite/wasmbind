#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SharedStorageModifierMethod : public emlite::Val {
    explicit SharedStorageModifierMethod(Handle h) noexcept;

public:
    explicit SharedStorageModifierMethod(const emlite::Val &val) noexcept;
    static SharedStorageModifierMethod take_ownership(Handle h) noexcept;

    SharedStorageModifierMethod clone() const noexcept;
};

