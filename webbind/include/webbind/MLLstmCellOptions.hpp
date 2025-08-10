#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLLstmCellOptions
class MLLstmCellOptions : public MLOperatorOptions {
  explicit MLLstmCellOptions(Handle h) noexcept;
public:
    static MLLstmCellOptions take_ownership(Handle h) noexcept;
    explicit MLLstmCellOptions(const emlite::Val &val) noexcept;
    MLLstmCellOptions() noexcept;
    [[nodiscard]] MLLstmCellOptions clone() const noexcept;
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLOperand bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLOperand& value);
    /// Getter of the `recurrentBias` attribute.
    [[nodiscard]] MLOperand recurrentBias() const;
    /// Setter of the `recurrentBias` attribute.
    void recurrentBias(const MLOperand& value);
    /// Getter of the `peepholeWeight` attribute.
    [[nodiscard]] MLOperand peepholeWeight() const;
    /// Setter of the `peepholeWeight` attribute.
    void peepholeWeight(const MLOperand& value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] MLLstmWeightLayout layout() const;
    /// Setter of the `layout` attribute.
    void layout(const MLLstmWeightLayout& value);
    /// Getter of the `activations` attribute.
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    /// Setter of the `activations` attribute.
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

} // namespace webbind