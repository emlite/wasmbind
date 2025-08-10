#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLBatchNormalizationOptions
class MLBatchNormalizationOptions : public MLOperatorOptions {
  explicit MLBatchNormalizationOptions(Handle h) noexcept;
public:
    static MLBatchNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLBatchNormalizationOptions(const emlite::Val &val) noexcept;
    MLBatchNormalizationOptions() noexcept;
    [[nodiscard]] MLBatchNormalizationOptions clone() const noexcept;
    /// Getter of the `scale` attribute.
    [[nodiscard]] MLOperand scale() const;
    /// Setter of the `scale` attribute.
    void scale(const MLOperand& value);
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLOperand bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLOperand& value);
    /// Getter of the `axis` attribute.
    [[nodiscard]] unsigned long axis() const;
    /// Setter of the `axis` attribute.
    void axis(unsigned long value);
    /// Getter of the `epsilon` attribute.
    [[nodiscard]] double epsilon() const;
    /// Setter of the `epsilon` attribute.
    void epsilon(double value);
};

} // namespace webbind