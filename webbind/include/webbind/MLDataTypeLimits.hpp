#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLDataTypeLimits
/// [`MLDataTypeLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLDataTypeLimits)
class MLDataTypeLimits : public emlite::Val {
  explicit MLDataTypeLimits(Handle h) noexcept;
public:
    static MLDataTypeLimits take_ownership(Handle h) noexcept;
    explicit MLDataTypeLimits(const emlite::Val &val) noexcept;
    MLDataTypeLimits() noexcept;
    [[nodiscard]] MLDataTypeLimits clone() const noexcept;
    [[nodiscard]] jsbind::Any dataTypes() const;
    void dataTypes(const jsbind::Any& value);
};

} // namespace webbind