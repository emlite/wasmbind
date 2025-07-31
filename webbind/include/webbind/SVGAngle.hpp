#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SVGAngle class.
/// [`SVGAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle)
class SVGAngle : public emlite::Val {
    explicit SVGAngle(Handle h) noexcept;

public:
    explicit SVGAngle(const emlite::Val &val) noexcept;
    static SVGAngle take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGAngle clone() const noexcept;
    /// Getter of the `unitType` attribute.
    /// [`SVGAngle.unitType`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/unitType)
    [[nodiscard]] unsigned short unitType() const;
    /// Getter of the `value` attribute.
    /// [`SVGAngle.value`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/value)
    [[nodiscard]] float value() const;
    /// Setter of the `value` attribute.
    /// [`SVGAngle.value`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/value)
    void value(float value);
    /// Getter of the `valueInSpecifiedUnits` attribute.
    /// [`SVGAngle.valueInSpecifiedUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/valueInSpecifiedUnits)
    [[nodiscard]] float valueInSpecifiedUnits() const;
    /// Setter of the `valueInSpecifiedUnits` attribute.
    /// [`SVGAngle.valueInSpecifiedUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/valueInSpecifiedUnits)
    void valueInSpecifiedUnits(float value);
    /// Getter of the `valueAsString` attribute.
    /// [`SVGAngle.valueAsString`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/valueAsString)
    [[nodiscard]] jsbind::String valueAsString() const;
    /// Setter of the `valueAsString` attribute.
    /// [`SVGAngle.valueAsString`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/valueAsString)
    void valueAsString(const jsbind::String& value);
    /// The newValueSpecifiedUnits method.
    /// [`SVGAngle.newValueSpecifiedUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/newValueSpecifiedUnits)
    jsbind::Undefined newValueSpecifiedUnits(unsigned short unitType, float valueInSpecifiedUnits);
    /// The convertToSpecifiedUnits method.
    /// [`SVGAngle.convertToSpecifiedUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAngle/convertToSpecifiedUnits)
    jsbind::Undefined convertToSpecifiedUnits(unsigned short unitType);
};

