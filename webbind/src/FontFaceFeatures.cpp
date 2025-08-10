#include <webbind/FontFaceFeatures.hpp>

namespace webbind {

FontFaceFeatures FontFaceFeatures::take_ownership(Handle h) noexcept {
    return FontFaceFeatures(h);
}

FontFaceFeatures FontFaceFeatures::clone() const noexcept { return *this; }

emlite::Val FontFaceFeatures::instance() noexcept { return emlite::Val::global("FontFaceFeatures"); }

FontFaceFeatures::FontFaceFeatures(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

FontFaceFeatures::FontFaceFeatures(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind