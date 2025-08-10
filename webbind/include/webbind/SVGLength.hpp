#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SVGLength
/// [`SVGLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength)
class SVGLength : public emlite::Val {
    explicit SVGLength(Handle h) noexcept;
public:
    explicit SVGLength(const emlite::Val &val) noexcept;
    static SVGLength take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGLength clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `unitType` attribute.
    /// [`SVGLength.unitType`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/unitType)
    [[nodiscard]] unsigned short unitType() const;
    /// Getter of the `value` attribute.
    /// [`SVGLength.value`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/value)
    [[nodiscard]] float value() const;
    /// Setter of the `value` attribute.
    /// [`SVGLength.value`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/value)
    void value(float value);
    /// Getter of the `valueInSpecifiedUnits` attribute.
    /// [`SVGLength.valueInSpecifiedUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/valueInSpecifiedUnits)
    [[nodiscard]] float valueInSpecifiedUnits() const;
    /// Setter of the `valueInSpecifiedUnits` attribute.
    /// [`SVGLength.valueInSpecifiedUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/valueInSpecifiedUnits)
    void valueInSpecifiedUnits(float value);
    /// Getter of the `valueAsString` attribute.
    /// [`SVGLength.valueAsString`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/valueAsString)
    [[nodiscard]] jsbind::String valueAsString() const;
    /// Setter of the `valueAsString` attribute.
    /// [`SVGLength.valueAsString`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/valueAsString)
    void valueAsString(const jsbind::String& value);
    /// The newValueSpecifiedUnits method.
    /// [`SVGLength.newValueSpecifiedUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/newValueSpecifiedUnits)
    jsbind::Undefined newValueSpecifiedUnits(unsigned short unitType, float valueInSpecifiedUnits);
    /// The convertToSpecifiedUnits method.
    /// [`SVGLength.convertToSpecifiedUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLength/convertToSpecifiedUnits)
    jsbind::Undefined convertToSpecifiedUnits(unsigned short unitType);
};

} // namespace webbind