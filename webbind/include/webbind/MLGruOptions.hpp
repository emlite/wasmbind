#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLGruOptions
class MLGruOptions : public MLOperatorOptions {
  explicit MLGruOptions(Handle h) noexcept;
public:
    static MLGruOptions take_ownership(Handle h) noexcept;
    explicit MLGruOptions(const emlite::Val &val) noexcept;
    MLGruOptions() noexcept;
    [[nodiscard]] MLGruOptions clone() const noexcept;
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLOperand bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLOperand& value);
    /// Getter of the `recurrentBias` attribute.
    [[nodiscard]] MLOperand recurrentBias() const;
    /// Setter of the `recurrentBias` attribute.
    void recurrentBias(const MLOperand& value);
    /// Getter of the `initialHiddenState` attribute.
    [[nodiscard]] MLOperand initialHiddenState() const;
    /// Setter of the `initialHiddenState` attribute.
    void initialHiddenState(const MLOperand& value);
    /// Getter of the `resetAfter` attribute.
    [[nodiscard]] bool resetAfter() const;
    /// Setter of the `resetAfter` attribute.
    void resetAfter(bool value);
    /// Getter of the `returnSequence` attribute.
    [[nodiscard]] bool returnSequence() const;
    /// Setter of the `returnSequence` attribute.
    void returnSequence(bool value);
    /// Getter of the `direction` attribute.
    [[nodiscard]] MLRecurrentNetworkDirection direction() const;
    /// Setter of the `direction` attribute.
    void direction(const MLRecurrentNetworkDirection& value);
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