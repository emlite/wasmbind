#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLLstmSupportLimits
/// [`MLLstmSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLLstmSupportLimits)
class MLLstmSupportLimits : public emlite::Val {
  explicit MLLstmSupportLimits(Handle h) noexcept;
public:
    static MLLstmSupportLimits take_ownership(Handle h) noexcept;
    explicit MLLstmSupportLimits(const emlite::Val &val) noexcept;
    MLLstmSupportLimits() noexcept;
    [[nodiscard]] MLLstmSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits weight() const;
    void weight(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits recurrentWeight() const;
    void recurrentWeight(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits bias() const;
    void bias(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits recurrentBias() const;
    void recurrentBias(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits peepholeWeight() const;
    void peepholeWeight(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits initialHiddenState() const;
    void initialHiddenState(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits initialCellState() const;
    void initialCellState(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits outputs() const;
    void outputs(const MLDataTypeLimits& value);
};

} // namespace webbind