#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLWhereSupportLimits.hpp"

namespace webbind {

/// Dictionary type MLOpSupportLimits
class MLOpSupportLimits : public emlite::Val {
  explicit MLOpSupportLimits(Handle h) noexcept;
public:
    static MLOpSupportLimits take_ownership(Handle h) noexcept;
    explicit MLOpSupportLimits(const emlite::Val &val) noexcept;
    MLOpSupportLimits() noexcept;
    [[nodiscard]] MLOpSupportLimits clone() const noexcept;
    /// Getter of the `where` attribute.
    [[nodiscard]] MLWhereSupportLimits where() const;
    /// Setter of the `where` attribute.
    void where(const MLWhereSupportLimits& value);
};

} // namespace webbind