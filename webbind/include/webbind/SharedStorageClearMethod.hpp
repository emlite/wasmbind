#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SharedStorageModifierMethod.hpp"
#include "enums.hpp"

class SharedStorageModifierMethodOptions;


/// The SharedStorageClearMethod class.
/// [`SharedStorageClearMethod`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageClearMethod)
class SharedStorageClearMethod : public SharedStorageModifierMethod {
    explicit SharedStorageClearMethod(Handle h) noexcept;

public:
    explicit SharedStorageClearMethod(const emlite::Val &val) noexcept;
    static SharedStorageClearMethod take_ownership(Handle h) noexcept;

    [[nodiscard]] SharedStorageClearMethod clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SharedStorageClearMethod(..)` constructor, creating a new SharedStorageClearMethod instance
    SharedStorageClearMethod();
    /// The `new SharedStorageClearMethod(..)` constructor, creating a new SharedStorageClearMethod instance
    SharedStorageClearMethod(const SharedStorageModifierMethodOptions& options);
};

