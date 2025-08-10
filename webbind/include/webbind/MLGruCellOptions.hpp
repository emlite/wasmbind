#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLGruCellOptions
class MLGruCellOptions : public MLOperatorOptions {
  explicit MLGruCellOptions(Handle h) noexcept;
public:
    static MLGruCellOptions take_ownership(Handle h) noexcept;
    explicit MLGruCellOptions(const emlite::Val &val) noexcept;
    MLGruCellOptions() noexcept;
    [[nodiscard]] MLGruCellOptions clone() const noexcept;
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLOperand bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLOperand& value);
    /// Getter of the `recurrentBias` attribute.
    [[nodiscard]] MLOperand recurrentBias() const;
    /// Setter of the `recurrentBias` attribute.
    void recurrentBias(const MLOperand& value);
    /// Getter of the `resetAfter` attribute.
    [[nodiscard]] bool resetAfter() const;
    /// Setter of the `resetAfter` attribute.
    void resetAfter(bool value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] MLGruWeightLayout layout() const;
    /// Setter of the `layout` attribute.
    void layout(const MLGruWeightLayout& value);
    /// Getter of the `activations` attribute.
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    /// Setter of the `activations` attribute.
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

} // namespace webbind