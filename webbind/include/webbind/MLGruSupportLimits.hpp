#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLTensorLimits;
class MLDataTypeLimits;

/// Dictionary type MLGruSupportLimits
class MLGruSupportLimits : public emlite::Val {
  explicit MLGruSupportLimits(Handle h) noexcept;
public:
    static MLGruSupportLimits take_ownership(Handle h) noexcept;
    explicit MLGruSupportLimits(const emlite::Val &val) noexcept;
    MLGruSupportLimits() noexcept;
    [[nodiscard]] MLGruSupportLimits clone() const noexcept;
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
    /// Getter of the `bias` attribute.
    [[nodiscard]] MLTensorLimits bias() const;
    /// Setter of the `bias` attribute.
    void bias(const MLTensorLimits& value);
    /// Getter of the `recurrentBias` attribute.
    [[nodiscard]] MLTensorLimits recurrentBias() const;
    /// Setter of the `recurrentBias` attribute.
    void recurrentBias(const MLTensorLimits& value);
    /// Getter of the `initialHiddenState` attribute.
    [[nodiscard]] MLTensorLimits initialHiddenState() const;
    /// Setter of the `initialHiddenState` attribute.
    void initialHiddenState(const MLTensorLimits& value);
    /// Getter of the `outputs` attribute.
    [[nodiscard]] MLDataTypeLimits outputs() const;
    /// Setter of the `outputs` attribute.
    void outputs(const MLDataTypeLimits& value);
};

} // namespace webbind