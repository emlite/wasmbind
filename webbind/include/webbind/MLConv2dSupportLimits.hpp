#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLConv2dSupportLimits
/// [`MLConv2dSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLConv2dSupportLimits)
class MLConv2dSupportLimits : public emlite::Val {
  explicit MLConv2dSupportLimits(Handle h) noexcept;
public:
    static MLConv2dSupportLimits take_ownership(Handle h) noexcept;
    explicit MLConv2dSupportLimits(const emlite::Val &val) noexcept;
    MLConv2dSupportLimits() noexcept;
    [[nodiscard]] MLConv2dSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits filter() const;
    void filter(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits bias() const;
    void bias(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind