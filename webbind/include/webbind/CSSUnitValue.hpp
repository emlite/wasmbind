#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSNumericValue.hpp"
#include "enums.hpp"


/// The CSSUnitValue class.
/// [`CSSUnitValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnitValue)
class CSSUnitValue : public CSSNumericValue {
    explicit CSSUnitValue(Handle h) noexcept;

public:
    explicit CSSUnitValue(const emlite::Val &val) noexcept;
    static CSSUnitValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSUnitValue clone() const noexcept;
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

