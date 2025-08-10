#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLLstmCellOptions
/// [`MLLstmCellOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLLstmCellOptions)
class MLLstmCellOptions : public MLOperatorOptions {
  explicit MLLstmCellOptions(Handle h) noexcept;
public:
    static MLLstmCellOptions take_ownership(Handle h) noexcept;
    explicit MLLstmCellOptions(const emlite::Val &val) noexcept;
    MLLstmCellOptions() noexcept;
    [[nodiscard]] MLLstmCellOptions clone() const noexcept;
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    [[nodiscard]] MLOperand peepholeWeight() const;
    void peepholeWeight(const MLOperand& value);
    [[nodiscard]] MLLstmWeightLayout layout() const;
    void layout(const MLLstmWeightLayout& value);
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

} // namespace webbind