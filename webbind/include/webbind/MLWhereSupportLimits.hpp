#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLWhereSupportLimits
/// [`MLWhereSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLWhereSupportLimits)
class MLWhereSupportLimits : public emlite::Val {
  explicit MLWhereSupportLimits(Handle h) noexcept;
public:
    static MLWhereSupportLimits take_ownership(Handle h) noexcept;
    explicit MLWhereSupportLimits(const emlite::Val &val) noexcept;
    MLWhereSupportLimits() noexcept;
    [[nodiscard]] MLWhereSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits condition() const;
    void condition(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits trueValue() const;
    void trueValue(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits falseValue() const;
    void falseValue(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind