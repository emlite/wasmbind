#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLPreluSupportLimits
/// [`MLPreluSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLPreluSupportLimits)
class MLPreluSupportLimits : public emlite::Val {
  explicit MLPreluSupportLimits(Handle h) noexcept;
public:
    static MLPreluSupportLimits take_ownership(Handle h) noexcept;
    explicit MLPreluSupportLimits(const emlite::Val &val) noexcept;
    MLPreluSupportLimits() noexcept;
    [[nodiscard]] MLPreluSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits slope() const;
    void slope(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind