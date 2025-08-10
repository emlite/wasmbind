#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLRankRange.hpp"

namespace webbind {

/// Dictionary type MLTensorLimits
/// [`MLTensorLimits`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensorLimits)
class MLTensorLimits : public emlite::Val {
  explicit MLTensorLimits(Handle h) noexcept;
public:
    static MLTensorLimits take_ownership(Handle h) noexcept;
    explicit MLTensorLimits(const emlite::Val &val) noexcept;
    MLTensorLimits() noexcept;
    [[nodiscard]] MLTensorLimits clone() const noexcept;
    [[nodiscard]] jsbind::Any dataTypes() const;
    void dataTypes(const jsbind::Any& value);
    [[nodiscard]] MLRankRange rankRange() const;
    void rankRange(const MLRankRange& value);
};

} // namespace webbind