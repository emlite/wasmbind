#include <webbind/SVGPathSegment.hpp>


SVGPathSegment SVGPathSegment::take_ownership(Handle h) noexcept {
        return SVGPathSegment(h);
    }
SVGPathSegment SVGPathSegment::clone() const noexcept { return *this; }
SVGPathSegment::SVGPathSegment(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGPathSegment::SVGPathSegment(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString SVGPathSegment::type() const {
    return emlite::Val::get("type").as<jsbind::DOMString>();
}

void SVGPathSegment::type(const jsbind::DOMString& value) {
    emlite::Val::set("type", value);
}

jsbind::FrozenArray<float> SVGPathSegment::values() const {
    return emlite::Val::get("values").as<jsbind::FrozenArray<float>>();
}

void SVGPathSegment::values(jsbind::FrozenArray<float> value) {
    emlite::Val::set("values", value);
}

