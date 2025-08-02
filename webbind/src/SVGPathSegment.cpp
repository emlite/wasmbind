#include <webbind/SVGPathSegment.hpp>


SVGPathSegment SVGPathSegment::take_ownership(Handle h) noexcept {
        return SVGPathSegment(h);
    }
SVGPathSegment SVGPathSegment::clone() const noexcept { return *this; }
emlite::Val SVGPathSegment::instance() noexcept { return emlite::Val::global("SVGPathSegment"); }
SVGPathSegment::SVGPathSegment(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGPathSegment::SVGPathSegment(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String SVGPathSegment::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void SVGPathSegment::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::TypedArray<float> SVGPathSegment::values() const {
    return emlite::Val::get("values").as<jsbind::TypedArray<float>>();
}

void SVGPathSegment::values(jsbind::TypedArray<float> value) {
    emlite::Val::set("values", value);
}

