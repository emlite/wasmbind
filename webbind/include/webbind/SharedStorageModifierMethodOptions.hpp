#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SharedStorageModifierMethodOptions
/// [`SharedStorageModifierMethodOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageModifierMethodOptions)
class SharedStorageModifierMethodOptions : public emlite::Val {
  explicit SharedStorageModifierMethodOptions(Handle h) noexcept;
public:
    static SharedStorageModifierMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageModifierMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageModifierMethodOptions() noexcept;
    [[nodiscard]] SharedStorageModifierMethodOptions clone() const noexcept;
    [[nodiscard]] jsbind::String withLock() const;
    void withLock(const jsbind::String& value);
};

} // namespace webbind