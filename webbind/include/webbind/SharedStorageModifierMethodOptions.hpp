#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SharedStorageModifierMethodOptions
class SharedStorageModifierMethodOptions : public emlite::Val {
  explicit SharedStorageModifierMethodOptions(Handle h) noexcept;
public:
    static SharedStorageModifierMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageModifierMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageModifierMethodOptions() noexcept;
    [[nodiscard]] SharedStorageModifierMethodOptions clone() const noexcept;
    /// Getter of the `withLock` attribute.
    [[nodiscard]] jsbind::String withLock() const;
    /// Setter of the `withLock` attribute.
    void withLock(const jsbind::String& value);
};

} // namespace webbind