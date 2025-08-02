#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SharedStorageModifierMethod.hpp"
#include "enums.hpp"

class SharedStorageModifierMethodOptions;


/// The SharedStorageAppendMethod class.
/// [`SharedStorageAppendMethod`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageAppendMethod)
class SharedStorageAppendMethod : public SharedStorageModifierMethod {
    explicit SharedStorageAppendMethod(Handle h) noexcept;

public:
    explicit SharedStorageAppendMethod(const emlite::Val &val) noexcept;
    static SharedStorageAppendMethod take_ownership(Handle h) noexcept;

    [[nodiscard]] SharedStorageAppendMethod clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SharedStorageAppendMethod(..)` constructor, creating a new SharedStorageAppendMethod instance
    SharedStorageAppendMethod(const jsbind::String& key, const jsbind::String& value);
    /// The `new SharedStorageAppendMethod(..)` constructor, creating a new SharedStorageAppendMethod instance
    SharedStorageAppendMethod(const jsbind::String& key, const jsbind::String& value, const SharedStorageModifierMethodOptions& options);
};

