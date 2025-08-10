#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLGruCellSupportLimits
class MLGruCellSupportLimits : public emlite::Val {
  explicit MLGruCellSupportLimits(Handle h) noexcept;
public:
    static MLGruCellSupportLimits take_ownership(Handle h) noexcept;
    explicit MLGruCellSupportLimits(const emlite::Val &val) noexcept;
    MLGruCellSupportLimits() noexcept;
    [[nodiscard]] MLGruCellSupportLimits clone() const noexcept;
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
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLTensorLimits bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLTensorLimits& value);
    /// Getter of the `recurrentBias` attribute.
    [[nodiscard]] MLTensorLimits recurrentBias() const;
    /// Setter of the `recurrentBias` attribute.
    void recurrentBias(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind