#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLLogicalNotSupportLimits
/// [`MLLogicalNotSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLLogicalNotSupportLimits)
class MLLogicalNotSupportLimits : public emlite::Val {
  explicit MLLogicalNotSupportLimits(Handle h) noexcept;
public:
    static MLLogicalNotSupportLimits take_ownership(Handle h) noexcept;
    explicit MLLogicalNotSupportLimits(const emlite::Val &val) noexcept;
    MLLogicalNotSupportLimits() noexcept;
    [[nodiscard]] MLLogicalNotSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits a() const;
    void a(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind