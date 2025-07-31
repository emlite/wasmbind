#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SharedStorageModifierMethod class.
/// [`SharedStorageModifierMethod`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageModifierMethod)
class SharedStorageModifierMethod : public emlite::Val {
    explicit SharedStorageModifierMethod(Handle h) noexcept;

public:
    explicit SharedStorageModifierMethod(const emlite::Val &val) noexcept;
    static SharedStorageModifierMethod take_ownership(Handle h) noexcept;

    [[nodiscard]] SharedStorageModifierMethod clone() const noexcept;
};

