#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGLength : public emlite::Val {
    explicit SVGLength(Handle h) noexcept;

public:
    explicit SVGLength(const emlite::Val &val) noexcept;
    static SVGLength take_ownership(Handle h) noexcept;

    SVGLength clone() const noexcept;
    unsigned short unitType() const;
    float value() const;
    void value(float value);
    float valueInSpecifiedUnits() const;
    void valueInSpecifiedUnits(float value);
    jsbind::DOMString valueAsString() const;
    void valueAsString(const jsbind::DOMString& value);
    jsbind::Undefined newValueSpecifiedUnits(unsigned short unitType, float valueInSpecifiedUnits);
    jsbind::Undefined convertToSpecifiedUnits(unsigned short unitType);
};

