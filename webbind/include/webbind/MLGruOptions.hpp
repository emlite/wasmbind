#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLGruOptions
/// [`MLGruOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLGruOptions)
class MLGruOptions : public MLOperatorOptions {
  explicit MLGruOptions(Handle h) noexcept;
public:
    static MLGruOptions take_ownership(Handle h) noexcept;
    explicit MLGruOptions(const emlite::Val &val) noexcept;
    MLGruOptions() noexcept;
    [[nodiscard]] MLGruOptions clone() const noexcept;
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    [[nodiscard]] MLOperand initialHiddenState() const;
    void initialHiddenState(const MLOperand& value);
    [[nodiscard]] bool resetAfter() const;
    void resetAfter(bool value);
    [[nodiscard]] bool returnSequence() const;
    void returnSequence(bool value);
    [[nodiscard]] MLRecurrentNetworkDirection direction() const;
    void direction(const MLRecurrentNetworkDirection& value);
    [[nodiscard]] MLGruWeightLayout layout() const;
    void layout(const MLGruWeightLayout& value);
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

} // namespace webbind