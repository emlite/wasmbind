#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLGruCellSupportLimits
/// [`MLGruCellSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLGruCellSupportLimits)
class MLGruCellSupportLimits : public emlite::Val {
  explicit MLGruCellSupportLimits(Handle h) noexcept;
public:
    static MLGruCellSupportLimits take_ownership(Handle h) noexcept;
    explicit MLGruCellSupportLimits(const emlite::Val &val) noexcept;
    MLGruCellSupportLimits() noexcept;
    [[nodiscard]] MLGruCellSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits weight() const;
    void weight(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits recurrentWeight() const;
    void recurrentWeight(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits hiddenState() const;
    void hiddenState(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits bias() const;
    void bias(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits recurrentBias() const;
    void recurrentBias(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind