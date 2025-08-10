#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLLayerNormalizationOptions
class MLLayerNormalizationOptions : public MLOperatorOptions {
  explicit MLLayerNormalizationOptions(Handle h) noexcept;
public:
    static MLLayerNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLLayerNormalizationOptions(const emlite::Val &val) noexcept;
    MLLayerNormalizationOptions() noexcept;
    [[nodiscard]] MLLayerNormalizationOptions clone() const noexcept;
    /// Getter of the `scale` attribute.
    [[nodiscard]] MLOperand scale() const;
    /// Setter of the `scale` attribute.
    void scale(const MLOperand& value);
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLOperand bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLOperand& value);
    /// Getter of the `axes` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    /// Setter of the `axes` attribute.
    void axes(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `epsilon` attribute.
    [[nodiscard]] double epsilon() const;
    /// Setter of the `epsilon` attribute.
    void epsilon(double value);
};

} // namespace webbind