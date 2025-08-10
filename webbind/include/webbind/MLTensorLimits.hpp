#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLRankRange;

/// Dictionary type MLTensorLimits
class MLTensorLimits : public emlite::Val {
  explicit MLTensorLimits(Handle h) noexcept;
public:
    static MLTensorLimits take_ownership(Handle h) noexcept;
    explicit MLTensorLimits(const emlite::Val &val) noexcept;
    MLTensorLimits() noexcept;
    [[nodiscard]] MLTensorLimits clone() const noexcept;
    /// Getter of the `dataTypes` attribute.
    [[nodiscard]] jsbind::Any dataTypes() const;
    /// Setter of the `dataTypes` attribute.
    void dataTypes(const jsbind::Any& value);
    /// Getter of the `rankRange` attribute.
    [[nodiscard]] MLRankRange rankRange() const;
    /// Setter of the `rankRange` attribute.
    void rankRange(const MLRankRange& value);
};

} // namespace webbind