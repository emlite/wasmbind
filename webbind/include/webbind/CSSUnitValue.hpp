#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSNumericValue.hpp"

namespace webbind {

/// Interface CSSUnitValue
/// [`CSSUnitValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnitValue)
class CSSUnitValue : public CSSNumericValue {
    explicit CSSUnitValue(Handle h) noexcept;
public:
    explicit CSSUnitValue(const emlite::Val &val) noexcept;
    static CSSUnitValue take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSUnitValue clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSUnitValue(..)` constructor, creating a new CSSUnitValue instance
    CSSUnitValue(double value, const jsbind::String& unit);
    /// Getter of the `value` attribute.
    /// [`CSSUnitValue.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnitValue/value)
    [[nodiscard]] double value() const;
    /// Setter of the `value` attribute.
    /// [`CSSUnitValue.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnitValue/value)
    void value(double value);
    /// Getter of the `unit` attribute.
    /// [`CSSUnitValue.unit`](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnitValue/unit)
    [[nodiscard]] jsbind::String unit() const;
};

} // namespace webbind