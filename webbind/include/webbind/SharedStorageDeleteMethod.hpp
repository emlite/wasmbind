#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SharedStorageModifierMethod.hpp"

namespace webbind {

class SharedStorageModifierMethodOptions;

/// Interface SharedStorageDeleteMethod
/// [`SharedStorageDeleteMethod`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageDeleteMethod)
class SharedStorageDeleteMethod : public SharedStorageModifierMethod {
    explicit SharedStorageDeleteMethod(Handle h) noexcept;
public:
    explicit SharedStorageDeleteMethod(const emlite::Val &val) noexcept;
    static SharedStorageDeleteMethod take_ownership(Handle h) noexcept;
    [[nodiscard]] SharedStorageDeleteMethod clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SharedStorageDeleteMethod(..)` constructor, creating a new SharedStorageDeleteMethod instance
    SharedStorageDeleteMethod(const jsbind::String& key);
    /// The `new SharedStorageDeleteMethod(..)` constructor, creating a new SharedStorageDeleteMethod instance
    SharedStorageDeleteMethod(const jsbind::String& key, const SharedStorageModifierMethodOptions& options);
};

} // namespace webbind