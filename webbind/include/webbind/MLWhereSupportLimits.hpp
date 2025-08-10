#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLWhereSupportLimits
class MLWhereSupportLimits : public emlite::Val {
  explicit MLWhereSupportLimits(Handle h) noexcept;
public:
    static MLWhereSupportLimits take_ownership(Handle h) noexcept;
    explicit MLWhereSupportLimits(const emlite::Val &val) noexcept;
    MLWhereSupportLimits() noexcept;
    [[nodiscard]] MLWhereSupportLimits clone() const noexcept;
    /// Getter of the `condition` attribute.
    [[nodiscard]] MLTensorLimits condition() const;
    /// Setter of the `condition` attribute.
    void condition(const MLTensorLimits& value);
    /// Getter of the `trueValue` attribute.
    [[nodiscard]] MLTensorLimits trueValue() const;
    /// Setter of the `trueValue` attribute.
    void trueValue(const MLTensorLimits& value);
    /// Getter of the `falseValue` attribute.
    [[nodiscard]] MLTensorLimits falseValue() const;
    /// Setter of the `falseValue` attribute.
    void falseValue(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind