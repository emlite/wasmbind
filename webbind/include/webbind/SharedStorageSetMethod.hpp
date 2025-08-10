#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SharedStorageModifierMethod.hpp"
#include "SharedStorageSetMethodOptions.hpp"

namespace webbind {

/// Interface SharedStorageSetMethod
/// [`SharedStorageSetMethod`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageSetMethod)
class SharedStorageSetMethod : public SharedStorageModifierMethod {
    explicit SharedStorageSetMethod(Handle h) noexcept;
public:
    explicit SharedStorageSetMethod(const emlite::Val &val) noexcept;
    static SharedStorageSetMethod take_ownership(Handle h) noexcept;
    [[nodiscard]] SharedStorageSetMethod clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SharedStorageSetMethod(..)` constructor, creating a new SharedStorageSetMethod instance
    SharedStorageSetMethod(const jsbind::String& key, const jsbind::String& value);
    /// The `new SharedStorageSetMethod(..)` constructor, creating a new SharedStorageSetMethod instance
    SharedStorageSetMethod(const jsbind::String& key, const jsbind::String& value, const SharedStorageSetMethodOptions& options);
};

} // namespace webbind