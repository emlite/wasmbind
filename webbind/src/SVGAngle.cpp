#include <webbind/SVGAngle.hpp>


SVGAngle SVGAngle::take_ownership(Handle h) noexcept {
        return SVGAngle(h);
    }
SVGAngle SVGAngle::clone() const noexcept { return *this; }
SVGAngle::SVGAngle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAngle::SVGAngle(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned short SVGAngle::unitType() const {
    return emlite::Val::get("unitType").as<unsigned short>();
}

float SVGAngle::value() const {
    return emlite::Val::get("value").as<float>();
}

void SVGAngle::value(float value) {
    emlite::Val::set("value", value);
}

float SVGAngle::valueInSpecifiedUnits() const {
    return emlite::Val::get("valueInSpecifiedUnits").as<float>();
}

void SVGAngle::valueInSpecifiedUnits(float value) {
    emlite::Val::set("valueInSpecifiedUnits", value);
}

jsbind::DOMString SVGAngle::valueAsString() const {
    return emlite::Val::get("valueAsString").as<jsbind::DOMString>();
}

void SVGAngle::valueAsString(const jsbind::DOMString& value) {
    emlite::Val::set("valueAsString", value);
}

jsbind::Undefined SVGAngle::newValueSpecifiedUnits(unsigned short unitType, float valueInSpecifiedUnits) {
    return emlite::Val::call("newValueSpecifiedUnits", unitType, valueInSpecifiedUnits).as<jsbind::Undefined>();
}

jsbind::Undefined SVGAngle::convertToSpecifiedUnits(unsigned short unitType) {
    return emlite::Val::call("convertToSpecifiedUnits", unitType).as<jsbind::Undefined>();
}

