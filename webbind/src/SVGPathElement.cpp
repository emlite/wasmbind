#include <webbind/SVGPathElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/DOMPoint.hpp>
#include <webbind/SVGPathSegment.hpp>
#include <webbind/SVGPathDataSettings.hpp>

namespace webbind {

SVGPathElement SVGPathElement::take_ownership(Handle h) noexcept {
    return SVGPathElement(h);
}

SVGPathElement SVGPathElement::clone() const noexcept { return *this; }

emlite::Val SVGPathElement::instance() noexcept { return emlite::Val::global("SVGPathElement"); }

SVGPathElement::SVGPathElement(Handle h) noexcept : SVGGeometryElement(emlite::Val::take_ownership(h)) {}

SVGPathElement::SVGPathElement(const emlite::Val &val) noexcept: SVGGeometryElement(val) {}

SVGAnimatedNumber SVGPathElement::pathLength() const {
    return SVGGeometryElement::get("pathLength").as<SVGAnimatedNumber>();
}

float SVGPathElement::getTotalLength() {
    return SVGGeometryElement::call("getTotalLength").as<float>();
}

DOMPoint SVGPathElement::getPointAtLength(float distance) {
    return SVGGeometryElement::call("getPointAtLength", distance).as<DOMPoint>();
}

SVGPathSegment SVGPathElement::getPathSegmentAtLength(float distance) {
    return SVGGeometryElement::call("getPathSegmentAtLength", distance).as<SVGPathSegment>();
}

jsbind::TypedArray<SVGPathSegment> SVGPathElement::getPathData() {
    return SVGGeometryElement::call("getPathData").as<jsbind::TypedArray<SVGPathSegment>>();
}

jsbind::TypedArray<SVGPathSegment> SVGPathElement::getPathData(const SVGPathDataSettings& settings) {
    return SVGGeometryElement::call("getPathData", settings).as<jsbind::TypedArray<SVGPathSegment>>();
}

jsbind::Undefined SVGPathElement::setPathData(const jsbind::TypedArray<SVGPathSegment>& pathData) {
    return SVGGeometryElement::call("setPathData", pathData).as<jsbind::Undefined>();
}


} // namespace webbind