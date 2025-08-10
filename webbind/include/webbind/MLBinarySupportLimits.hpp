#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLTensorLimits.hpp"
#include "MLDataTypeLimits.hpp"

namespace webbind {

/// Dictionary type MLBinarySupportLimits
/// [`MLBinarySupportLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLBinarySupportLimits)
class MLBinarySupportLimits : public emlite::Val {
  explicit MLBinarySupportLimits(Handle h) noexcept;
public:
    static MLBinarySupportLimits take_ownership(Handle h) noexcept;
    explicit MLBinarySupportLimits(const emlite::Val &val) noexcept;
    MLBinarySupportLimits() noexcept;
    [[nodiscard]] MLBinarySupportLimits clone() const noexcept;
    [[nodiscard]] MLTensorLimits a() const;
    void a(const MLTensorLimits& value);
    [[nodiscard]] MLTensorLimits b() const;
    void b(const MLTensorLimits& value);
    [[nodiscard]] MLDataTypeLimits output() const;
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind