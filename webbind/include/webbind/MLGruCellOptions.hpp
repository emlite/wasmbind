#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLGruCellOptions
/// [`MLGruCellOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLGruCellOptions)
class MLGruCellOptions : public MLOperatorOptions {
  explicit MLGruCellOptions(Handle h) noexcept;
public:
    static MLGruCellOptions take_ownership(Handle h) noexcept;
    explicit MLGruCellOptions(const emlite::Val &val) noexcept;
    MLGruCellOptions() noexcept;
    [[nodiscard]] MLGruCellOptions clone() const noexcept;
    [[nodiscard]] MLOperand bias() const;
    void bias(const MLOperand& value);
    [[nodiscard]] MLOperand recurrentBias() const;
    void recurrentBias(const MLOperand& value);
    [[nodiscard]] bool resetAfter() const;
    void resetAfter(bool value);
    [[nodiscard]] MLGruWeightLayout layout() const;
    void layout(const MLGruWeightLayout& value);
    [[nodiscard]] jsbind::TypedArray<MLRecurrentNetworkActivation> activations() const;
    void activations(const jsbind::TypedArray<MLRecurrentNetworkActivation>& value);
};

} // namespace webbind