#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SharedStorageModifierMethodOptions.hpp"

namespace webbind {

/// Dictionary type SharedStorageSetMethodOptions
class SharedStorageSetMethodOptions : public SharedStorageModifierMethodOptions {
  explicit SharedStorageSetMethodOptions(Handle h) noexcept;
public:
    static SharedStorageSetMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageSetMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageSetMethodOptions() noexcept;
    [[nodiscard]] SharedStorageSetMethodOptions clone() const noexcept;
    /// Getter of the `ignoreIfPresent` attribute.
    [[nodiscard]] bool ignoreIfPresent() const;
    /// Setter of the `ignoreIfPresent` attribute.
    void ignoreIfPresent(bool value);
};

} // namespace webbind