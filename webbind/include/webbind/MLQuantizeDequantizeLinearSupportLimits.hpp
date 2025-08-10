#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLQuantizeDequantizeLinearSupportLimits
/// [`MLQuantizeDequantizeLinearSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLQuantizeDequantizeLinearSupportLimits)
class MLQuantizeDequantizeLinearSupportLimits : public emlite::Val {
  explicit MLQuantizeDequantizeLinearSupportLimits(Handle h) noexcept;
public:
    static MLQuantizeDequantizeLinearSupportLimits take_ownership(Handle h) noexcept;
    explicit MLQuantizeDequantizeLinearSupportLimits(const emlite::Val &val) noexcept;
    MLQuantizeDequantizeLinearSupportLimits() noexcept;
    [[nodiscard]] MLQuantizeDequantizeLinearSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits scale() const;
    void scale(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits zeroPoint() const;
    void zeroPoint(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind