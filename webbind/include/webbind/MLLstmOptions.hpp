#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLLstmOptions
/// [`MLLstmOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLLstmOptions)
class MLLstmOptions : public MLOperatorOptions {
  explicit MLLstmOptions(Handle h) noexcept;
public:
    static MLLstmOptions take_ownership(Handle h) noexcept;
    explicit MLLstmOptions(const emlite::Val &val) noexcept;
    MLLstmOptions() noexcept;
    [[nodiscard]] MLLstmOptions clone() const noexcept;
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    [[nodiscard]] MLOperand peepholeWeight() const;
    void peepholeWeight(const MLOperand& value);
    [[nodiscard]] MLOperand initialHiddenState() const;
    void initialHiddenState(const MLOperand& value);
    [[nodiscard]] MLOperand initialCellState() const;
    void initialCellState(const MLOperand& value);
    [[nodiscard]] bool returnSequence() const;
    void returnSequence(bool value);
    [[nodiscard]] MLRecurrentNetworkDirection direction() const;
    void direction(const MLRecurrentNetworkDirection& value);
    [[nodiscard]] MLLstmWeightLayout layout() const;
    void layout(const MLLstmWeightLayout& value);
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

} // namespace webbind