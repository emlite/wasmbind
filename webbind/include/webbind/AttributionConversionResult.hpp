#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionConversionResult
/// [`AttributionConversionResult`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionConversionResult)
class AttributionConversionResult : public emlite::Val {
  explicit AttributionConversionResult(Handle h) noexcept;
public:
    static AttributionConversionResult take_ownership(Handle h) noexcept;
    explicit AttributionConversionResult(const emlite::Val &val) noexcept;
    AttributionConversionResult() noexcept;
    [[nodiscard]] AttributionConversionResult clone() const noexcept;
    [[nodiscard]] jsbind::Uint8Array report() const;
    void report(const jsbind::Uint8Array& value);
};

} // namespace webbind