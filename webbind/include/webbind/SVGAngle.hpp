#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGAngle : public emlite::Val {
    explicit SVGAngle(Handle h) noexcept;

public:
    explicit SVGAngle(const emlite::Val &val) noexcept;
    static SVGAngle take_ownership(Handle h) noexcept;

    SVGAngle clone() const noexcept;
    unsigned short unitType() const;
    float value() const;
    void value(float value);
    float valueInSpecifiedUnits() const;
    void valueInSpecifiedUnits(float value);
    jsbind::String valueAsString() const;
    void valueAsString(const jsbind::String& value);
    jsbind::Undefined newValueSpecifiedUnits(unsigned short unitType, float valueInSpecifiedUnits);
    jsbind::Undefined convertToSpecifiedUnits(unsigned short unitType);
};

