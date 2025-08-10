#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLBatchNormalizationSupportLimits
/// [`MLBatchNormalizationSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLBatchNormalizationSupportLimits)
class MLBatchNormalizationSupportLimits : public emlite::Val {
  explicit MLBatchNormalizationSupportLimits(Handle h) noexcept;
public:
    static MLBatchNormalizationSupportLimits take_ownership(Handle h) noexcept;
    explicit MLBatchNormalizationSupportLimits(const emlite::Val &val) noexcept;
    MLBatchNormalizationSupportLimits() noexcept;
    [[nodiscard]] MLBatchNormalizationSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits mean() const;
    void mean(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits variance() const;
    void variance(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits scale() const;
    void scale(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits bias() const;
    void bias(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind