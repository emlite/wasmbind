#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionConversionResult
class AttributionConversionResult : public emlite::Val {
  explicit AttributionConversionResult(Handle h) noexcept;
public:
    static AttributionConversionResult take_ownership(Handle h) noexcept;
    explicit AttributionConversionResult(const emlite::Val &val) noexcept;
    AttributionConversionResult() noexcept;
    [[nodiscard]] AttributionConversionResult clone() const noexcept;
    /// Getter of the `report` attribute.
    [[nodiscard]] jsbind::Uint8Array report() const;
    /// Setter of the `report` attribute.
    void report(const jsbind::Uint8Array& value);
};

} // namespace webbind