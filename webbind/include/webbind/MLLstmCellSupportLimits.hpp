#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLLstmCellSupportLimits
class MLLstmCellSupportLimits : public emlite::Val {
  explicit MLLstmCellSupportLimits(Handle h) noexcept;
public:
    static MLLstmCellSupportLimits take_ownership(Handle h) noexcept;
    explicit MLLstmCellSupportLimits(const emlite::Val &val) noexcept;
    MLLstmCellSupportLimits() noexcept;
    [[nodiscard]] MLLstmCellSupportLimits clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] MLTensorLimits input() const;
    /// Setter of the `input` attribute.
    void input(const MLTensorLimits& value);
    /// Getter of the `weight` attribute.
    [[nodiscard]] MLTensorLimits weight() const;
    /// Setter of the `weight` attribute.
    void weight(const MLTensorLimits& value);
    /// Getter of the `recurrentWeight` attribute.
    [[nodiscard]] MLTensorLimits recurrentWeight() const;
    /// Setter of the `recurrentWeight` attribute.
    void recurrentWeight(const MLTensorLimits& value);
    /// Getter of the `hiddenState` attribute.
    [[nodiscard]] MLTensorLimits hiddenState() const;
    /// Setter of the `hiddenState` attribute.
    void hiddenState(const MLTensorLimits& value);
    /// Getter of the `cellState` attribute.
    [[nodiscard]] MLTensorLimits cellState() const;
    /// Setter of the `cellState` attribute.
    void cellState(const MLTensorLimits& value);
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLTensorLimits bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLTensorLimits& value);
    /// Getter of the `recurrentBias` attribute.
    [[nodiscard]] MLTensorLimits recurrentBias() const;
    /// Setter of the `recurrentBias` attribute.
    void recurrentBias(const MLTensorLimits& value);
    /// Getter of the `peepholeWeight` attribute.
    [[nodiscard]] MLTensorLimits peepholeWeight() const;
    /// Setter of the `peepholeWeight` attribute.
    void peepholeWeight(const MLTensorLimits& value);
    /// Getter of the `outputs` attribute.
    [[nodiscard]] MLDataTypeLimits outputs() const;
    /// Setter of the `outputs` attribute.
    void outputs(const MLDataTypeLimits& value);
};

} // namespace webbind