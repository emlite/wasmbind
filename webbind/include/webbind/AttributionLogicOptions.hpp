#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionLogicOptions
class AttributionLogicOptions : public emlite::Val {
  explicit AttributionLogicOptions(Handle h) noexcept;
public:
    static AttributionLogicOptions take_ownership(Handle h) noexcept;
    explicit AttributionLogicOptions(const emlite::Val &val) noexcept;
    AttributionLogicOptions() noexcept;
    [[nodiscard]] AttributionLogicOptions clone() const noexcept;
    /// Getter of the `credit` attribute.
    [[nodiscard]] jsbind::TypedArray<double> credit() const;
    /// Setter of the `credit` attribute.
    void credit(jsbind::TypedArray<double> value);
};

} // namespace webbind