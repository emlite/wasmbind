#include <webbind/Landmark.hpp>
#include <webbind/Point2D.hpp>

using emlite::Val;
namespace webbind {

Landmark::Landmark(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Landmark Landmark::take_ownership(Handle h) noexcept {
        return Landmark(h);
    }
Landmark::Landmark(const emlite::Val &val) noexcept: emlite::Val(val) {}
Landmark::Landmark() noexcept: emlite::Val(emlite::Val::object()) {}
Landmark Landmark::clone() const noexcept { return *this; }

jsbind::TypedArray<Point2D> Landmark::locations() const {
    return emlite::Val::get("locations").as<jsbind::TypedArray<Point2D>>();
}

void Landmark::locations(const jsbind::TypedArray<Point2D>& value) {
    emlite::Val::set("locations", value);
}

LandmarkType Landmark::type() const {
    return emlite::Val::get("type").as<LandmarkType>();
}

void Landmark::type(const LandmarkType& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind