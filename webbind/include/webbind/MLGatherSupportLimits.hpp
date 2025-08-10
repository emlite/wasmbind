#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLGatherSupportLimits
/// [`MLGatherSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLGatherSupportLimits)
class MLGatherSupportLimits : public emlite::Val {
  explicit MLGatherSupportLimits(Handle h) noexcept;
public:
    static MLGatherSupportLimits take_ownership(Handle h) noexcept;
    explicit MLGatherSupportLimits(const emlite::Val &val) noexcept;
    MLGatherSupportLimits() noexcept;
    [[nodiscard]] MLGatherSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits indices() const;
    void indices(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind