#include <webbind/SVGBoundingBoxOptions.hpp>

using emlite::Val;
namespace webbind {

SVGBoundingBoxOptions::SVGBoundingBoxOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGBoundingBoxOptions SVGBoundingBoxOptions::take_ownership(Handle h) noexcept {
        return SVGBoundingBoxOptions(h);
    }
SVGBoundingBoxOptions::SVGBoundingBoxOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SVGBoundingBoxOptions::SVGBoundingBoxOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SVGBoundingBoxOptions SVGBoundingBoxOptions::clone() const noexcept { return *this; }

bool SVGBoundingBoxOptions::fill() const {
    return emlite::Val::get("fill").as<bool>();
}

void SVGBoundingBoxOptions::fill(bool value) {
    emlite::Val::set("fill", value);
}

bool SVGBoundingBoxOptions::stroke() const {
    return emlite::Val::get("stroke").as<bool>();
}

void SVGBoundingBoxOptions::stroke(bool value) {
    emlite::Val::set("stroke", value);
}

bool SVGBoundingBoxOptions::markers() const {
    return emlite::Val::get("markers").as<bool>();
}

void SVGBoundingBoxOptions::markers(bool value) {
    emlite::Val::set("markers", value);
}

bool SVGBoundingBoxOptions::clipped() const {
    return emlite::Val::get("clipped").as<bool>();
}

void SVGBoundingBoxOptions::clipped(bool value) {
    emlite::Val::set("clipped", value);
}


} // namespace webbind