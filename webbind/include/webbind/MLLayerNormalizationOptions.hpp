#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLLayerNormalizationOptions
/// [`MLLayerNormalizationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLLayerNormalizationOptions)
class MLLayerNormalizationOptions : public MLOperatorOptions {
  explicit MLLayerNormalizationOptions(Handle h) noexcept;
public:
    static MLLayerNormalizationOptions take_ownership(Handle h) noexcept;
    explicit MLLayerNormalizationOptions(const emlite::Val &val) noexcept;
    MLLayerNormalizationOptions() noexcept;
    [[nodiscard]] MLLayerNormalizationOptions clone() const noexcept;
    [[nodiscard]] MLOperand scale() const;
    void scale(const MLOperand& value);
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> axes() const;
    void axes(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] double epsilon() const;
    void epsilon(double value);
};

} // namespace webbind