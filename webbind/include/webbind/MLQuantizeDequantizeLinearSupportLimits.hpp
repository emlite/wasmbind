#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLQuantizeDequantizeLinearSupportLimits
class MLQuantizeDequantizeLinearSupportLimits : public emlite::Val {
  explicit MLQuantizeDequantizeLinearSupportLimits(Handle h) noexcept;
public:
    static MLQuantizeDequantizeLinearSupportLimits take_ownership(Handle h) noexcept;
    explicit MLQuantizeDequantizeLinearSupportLimits(const emlite::Val &val) noexcept;
    MLQuantizeDequantizeLinearSupportLimits() noexcept;
    [[nodiscard]] MLQuantizeDequantizeLinearSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `scale` attribute.
    [[nodiscard]] MLTensorLimits scale() const;
    /// Setter of the `scale` attribute.
    void scale(const MLTensorLimits& value);
    /// Getter of the `zeroPoint` attribute.
    [[nodiscard]] MLTensorLimits zeroPoint() const;
    /// Setter of the `zeroPoint` attribute.
    void zeroPoint(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind