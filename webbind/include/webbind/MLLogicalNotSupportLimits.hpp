#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLLogicalNotSupportLimits
class MLLogicalNotSupportLimits : public emlite::Val {
  explicit MLLogicalNotSupportLimits(Handle h) noexcept;
public:
    static MLLogicalNotSupportLimits take_ownership(Handle h) noexcept;
    explicit MLLogicalNotSupportLimits(const emlite::Val &val) noexcept;
    MLLogicalNotSupportLimits() noexcept;
    [[nodiscard]] MLLogicalNotSupportLimits clone() const noexcept;
    /// Getter of the `a` attribute.
    [[nodiscard]] MLTensorLimits a() const;
    /// Setter of the `a` attribute.
    void a(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind