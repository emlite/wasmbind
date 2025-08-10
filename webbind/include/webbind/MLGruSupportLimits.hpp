#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLGruSupportLimits
/// [`MLGruSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLGruSupportLimits)
class MLGruSupportLimits : public emlite::Val {
  explicit MLGruSupportLimits(Handle h) noexcept;
public:
    static MLGruSupportLimits take_ownership(Handle h) noexcept;
    explicit MLGruSupportLimits(const emlite::Val &val) noexcept;
    MLGruSupportLimits() noexcept;
    [[nodiscard]] MLGruSupportLimits clone() const noexcept;
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
    [[nodiscard]] MLTensorLimits initialHiddenState() const;
    void initialHiddenState(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits outputs() const;
    void outputs(const MLDataTypeLimits& value);
};

} // namespace webbind