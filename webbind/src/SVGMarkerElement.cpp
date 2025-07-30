#include <webbind/SVGMarkerElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedAngle.hpp>
#include <webbind/SVGAngle.hpp>
#include <webbind/SVGAnimatedRect.hpp>
#include <webbind/SVGAnimatedPreserveAspectRatio.hpp>


SVGMarkerElement SVGMarkerElement::take_ownership(Handle h) noexcept {
        return SVGMarkerElement(h);
    }
SVGMarkerElement SVGMarkerElement::clone() const noexcept { return *this; }
SVGMarkerElement::SVGMarkerElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGMarkerElement::SVGMarkerElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedLength SVGMarkerElement::refX() const {
    return SVGElement::get("refX").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGMarkerElement::refY() const {
    return SVGElement::get("refY").as<SVGAnimatedLength>();
}

SVGAnimatedEnumeration SVGMarkerElement::markerUnits() const {
    return SVGElement::get("markerUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedLength SVGMarkerElement::markerWidth() const {
    return SVGElement::get("markerWidth").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGMarkerElement::markerHeight() const {
    return SVGElement::get("markerHeight").as<SVGAnimatedLength>();
}

SVGAnimatedEnumeration SVGMarkerElement::orientType() const {
    return SVGElement::get("orientType").as<SVGAnimatedEnumeration>();
}

SVGAnimatedAngle SVGMarkerElement::orientAngle() const {
    return SVGElement::get("orientAngle").as<SVGAnimatedAngle>();
}

jsbind::String SVGMarkerElement::orient() const {
    return SVGElement::get("orient").as<jsbind::String>();
}

void SVGMarkerElement::orient(const jsbind::String& value) {
    SVGElement::set("orient", value);
}

jsbind::Undefined SVGMarkerElement::setOrientToAuto() {
    return SVGElement::call("setOrientToAuto").as<jsbind::Undefined>();
}

jsbind::Undefined SVGMarkerElement::setOrientToAngle(const SVGAngle& angle) {
    return SVGElement::call("setOrientToAngle", angle).as<jsbind::Undefined>();
}

SVGAnimatedRect SVGMarkerElement::viewBox() const {
    return SVGElement::get("viewBox").as<SVGAnimatedRect>();
}

SVGAnimatedPreserveAspectRatio SVGMarkerElement::preserveAspectRatio() const {
    return SVGElement::get("preserveAspectRatio").as<SVGAnimatedPreserveAspectRatio>();
}

