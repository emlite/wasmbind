#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLInstanceNormalizationOptions
/// [`MLInstanceNormalizationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLInstanceNormalizationOptions)
class MLInstanceNormalizationOptions : public MLOperatorOptions {
  explicit MLInstanceNormalizationOptions(Handle h) noexcept;
public:
    static MLInstanceNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLInstanceNormalizationOptions(const emlite::Val &val) noexcept;
    MLInstanceNormalizationOptions() noexcept;
    [[nodiscard]] MLInstanceNormalizationOptions clone() const noexcept;
    [[nodiscard]] MLOperand scale() const;
    void scale(const MLOperand& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] double epsilon() const;
    void epsilon(double value);
    [[nodiscard]] MLInputOperandLayout layout() const;
    void layout(const MLInputOperandLayout& value);
};

} // namespace webbind