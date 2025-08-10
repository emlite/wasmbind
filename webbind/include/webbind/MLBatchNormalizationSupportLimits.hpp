#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLTensorLimits;
class MLDataTypeLimits;

/// Dictionary type MLBatchNormalizationSupportLimits
class MLBatchNormalizationSupportLimits : public emlite::Val {
  explicit MLBatchNormalizationSupportLimits(Handle h) noexcept;
public:
    static MLBatchNormalizationSupportLimits take_ownership(Handle h) noexcept;
    explicit MLBatchNormalizationSupportLimits(const emlite::Val &val) noexcept;
    MLBatchNormalizationSupportLimits() noexcept;
    [[nodiscard]] MLBatchNormalizationSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `mean` attribute.
    [[nodiscard]] MLTensorLimits mean() const;
    /// Setter of the `mean` attribute.
    void mean(const MLTensorLimits& value);
    /// Getter of the `variance` attribute.
    [[nodiscard]] MLTensorLimits variance() const;
    /// Setter of the `variance` attribute.
    void variance(const MLTensorLimits& value);
    /// Getter of the `scale` attribute.
    [[nodiscard]] MLTensorLimits scale() const;
    /// Setter of the `scale` attribute.
    void scale(const MLTensorLimits& value);
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLTensorLimits bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind