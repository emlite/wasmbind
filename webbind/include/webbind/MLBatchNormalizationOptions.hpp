#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLBatchNormalizationOptions
/// [`MLBatchNormalizationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLBatchNormalizationOptions)
class MLBatchNormalizationOptions : public MLOperatorOptions {
  explicit MLBatchNormalizationOptions(Handle h) noexcept;
public:
    static MLBatchNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLBatchNormalizationOptions(const emlite::Val &val) noexcept;
    MLBatchNormalizationOptions() noexcept;
    [[nodiscard]] MLBatchNormalizationOptions clone() const noexcept;
    [[nodiscard]] MLOperand scale() const;
    void scale(const MLOperand& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] unsigned long axis() const;
    void axis(unsigned long value);
    [[nodiscard]] double epsilon() const;
    void epsilon(double value);
};

} // namespace webbind