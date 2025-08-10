#include "webbind/SVGPreserveAspectRatio.hpp"

namespace webbind {

SVGPreserveAspectRatio SVGPreserveAspectRatio::take_ownership(Handle h) noexcept {
        return SVGPreserveAspectRatio(h);
    }
SVGPreserveAspectRatio SVGPreserveAspectRatio::clone() const noexcept { return *this; }
emlite::Val SVGPreserveAspectRatio::instance() noexcept { return emlite::Val::global("SVGPreserveAspectRatio"); }
SVGPreserveAspectRatio::SVGPreserveAspectRatio(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGPreserveAspectRatio::SVGPreserveAspectRatio(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned short SVGPreserveAspectRatio::align() const {
    return emlite::Val::get("align").as<unsigned short>();
}

void SVGPreserveAspectRatio::align(unsigned short value) {
    emlite::Val::set("align", value);
}

unsigned short SVGPreserveAspectRatio::meetOrSlice() const {
    return emlite::Val::get("meetOrSlice").as<unsigned short>();
}

void SVGPreserveAspectRatio::meetOrSlice(unsigned short value) {
    emlite::Val::set("meetOrSlice", value);
}


} // namespace webbind