#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLDataTypeLimits
class MLDataTypeLimits : public emlite::Val {
  explicit MLDataTypeLimits(Handle h) noexcept;
public:
    static MLDataTypeLimits take_ownership(Handle h) noexcept;
    explicit MLDataTypeLimits(const emlite::Val &val) noexcept;
    MLDataTypeLimits() noexcept;
    [[nodiscard]] MLDataTypeLimits clone() const noexcept;
    /// Getter of the `dataTypes` attribute.
    [[nodiscard]] jsbind::Any dataTypes() const;
    /// Setter of the `dataTypes` attribute.
    void dataTypes(const jsbind::Any& value);
};

} // namespace webbind