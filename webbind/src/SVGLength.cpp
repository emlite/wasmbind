#include "webbind/SVGLength.hpp"

namespace webbind {

SVGLength SVGLength::take_ownership(Handle h) noexcept {
        return SVGLength(h);
    }
SVGLength SVGLength::clone() const noexcept { return *this; }
emlite::Val SVGLength::instance() noexcept { return emlite::Val::global("SVGLength"); }
SVGLength::SVGLength(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGLength::SVGLength(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned short SVGLength::unitType() const {
    return emlite::Val::get("unitType").as<unsigned short>();
}

float SVGLength::value() const {
    return emlite::Val::get("value").as<float>();
}

void SVGLength::value(float value) {
    emlite::Val::set("value", value);
}

float SVGLength::valueInSpecifiedUnits() const {
    return emlite::Val::get("valueInSpecifiedUnits").as<float>();
}

void SVGLength::valueInSpecifiedUnits(float value) {
    emlite::Val::set("valueInSpecifiedUnits", value);
}

jsbind::String SVGLength::valueAsString() const {
    return emlite::Val::get("valueAsString").as<jsbind::String>();
}

void SVGLength::valueAsString(const jsbind::String& value) {
    emlite::Val::set("valueAsString", value);
}

jsbind::Undefined SVGLength::newValueSpecifiedUnits(unsigned short unitType, float valueInSpecifiedUnits) {
    return emlite::Val::call("newValueSpecifiedUnits", unitType, valueInSpecifiedUnits).as<jsbind::Undefined>();
}

jsbind::Undefined SVGLength::convertToSpecifiedUnits(unsigned short unitType) {
    return emlite::Val::call("convertToSpecifiedUnits", unitType).as<jsbind::Undefined>();
}


} // namespace webbind