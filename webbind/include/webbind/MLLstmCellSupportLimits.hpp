#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLLstmCellSupportLimits
/// [`MLLstmCellSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLLstmCellSupportLimits)
class MLLstmCellSupportLimits : public emlite::Val {
  explicit MLLstmCellSupportLimits(Handle h) noexcept;
public:
    static MLLstmCellSupportLimits take_ownership(Handle h) noexcept;
    explicit MLLstmCellSupportLimits(const emlite::Val &val) noexcept;
    MLLstmCellSupportLimits() noexcept;
    [[nodiscard]] MLLstmCellSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits weight() const;
    void weight(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits recurrentWeight() const;
    void recurrentWeight(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits hiddenState() const;
    void hiddenState(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits cellState() const;
    void cellState(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits bias() const;
    void bias(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits recurrentBias() const;
    void recurrentBias(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits peepholeWeight() const;
    void peepholeWeight(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits outputs() const;
    void outputs(const MLDataTypeLimits& value);
};

} // namespace webbind