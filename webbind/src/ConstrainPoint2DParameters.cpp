#include <webbind/ConstrainPoint2DParameters.hpp>
#include <webbind/Point2D.hpp>

namespace webbind {

ConstrainPoint2DParameters::ConstrainPoint2DParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ConstrainPoint2DParameters ConstrainPoint2DParameters::take_ownership(Handle h) noexcept {
    return ConstrainPoint2DParameters(h);
}

ConstrainPoint2DParameters::ConstrainPoint2DParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}

ConstrainPoint2DParameters::ConstrainPoint2DParameters() noexcept: emlite::Val(emlite::Val::object()) {}

ConstrainPoint2DParameters ConstrainPoint2DParameters::clone() const noexcept { return *this; }

jsbind::TypedArray<Point2D> ConstrainPoint2DParameters::exact() const {
    return emlite::Val::get("exact").as<jsbind::TypedArray<Point2D>>();
}

void ConstrainPoint2DParameters::exact(const jsbind::TypedArray<Point2D>& value) {
    emlite::Val::set("exact", value);
}

jsbind::TypedArray<Point2D> ConstrainPoint2DParameters::ideal() const {
    return emlite::Val::get("ideal").as<jsbind::TypedArray<Point2D>>();
}

void ConstrainPoint2DParameters::ideal(const jsbind::TypedArray<Point2D>& value) {
    emlite::Val::set("ideal", value);
}


} // namespace webbind