#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLInstanceNormalizationOptions
class MLInstanceNormalizationOptions : public MLOperatorOptions {
  explicit MLInstanceNormalizationOptions(Handle h) noexcept;
public:
    static MLInstanceNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLInstanceNormalizationOptions(const emlite::Val &val) noexcept;
    MLInstanceNormalizationOptions() noexcept;
    [[nodiscard]] MLInstanceNormalizationOptions clone() const noexcept;
    /// Getter of the `scale` attribute.
    [[nodiscard]] MLOperand scale() const;
    /// Setter of the `scale` attribute.
    void scale(const MLOperand& value);
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLOperand bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLOperand& value);
    /// Getter of the `epsilon` attribute.
    [[nodiscard]] double epsilon() const;
    /// Setter of the `epsilon` attribute.
    void epsilon(double value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] MLInputOperandLayout layout() const;
    /// Setter of the `layout` attribute.
    void layout(const MLInputOperandLayout& value);
};

} // namespace webbind