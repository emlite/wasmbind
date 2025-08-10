#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLScatterSupportLimits
/// [`MLScatterSupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLScatterSupportLimits)
class MLScatterSupportLimits : public emlite::Val {
  explicit MLScatterSupportLimits(Handle h) noexcept;
public:
    static MLScatterSupportLimits take_ownership(Handle h) noexcept;
    explicit MLScatterSupportLimits(const emlite::Val &val) noexcept;
    MLScatterSupportLimits() noexcept;
    [[nodiscard]] MLScatterSupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits input() const;
    void input(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits indices() const;
    void indices(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits updates() const;
    void updates(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind