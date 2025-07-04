#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SharedStorageModifierMethod.hpp"
#include "enums.hpp"

class SharedStorageModifierMethodOptions;


class SharedStorageClearMethod : public SharedStorageModifierMethod {
    explicit SharedStorageClearMethod(Handle h) noexcept;

public:
    explicit SharedStorageClearMethod(const emlite::Val &val) noexcept;
    static SharedStorageClearMethod take_ownership(Handle h) noexcept;

    SharedStorageClearMethod clone() const noexcept;
    SharedStorageClearMethod(const SharedStorageModifierMethodOptions& options);
};

