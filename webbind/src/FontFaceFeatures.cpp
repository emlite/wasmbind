#include <webbind/FontFaceFeatures.hpp>


FontFaceFeatures FontFaceFeatures::take_ownership(Handle h) noexcept {
        return FontFaceFeatures(h);
    }
FontFaceFeatures FontFaceFeatures::clone() const noexcept { return *this; }
FontFaceFeatures::FontFaceFeatures(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontFaceFeatures::FontFaceFeatures(const emlite::Val &val) noexcept: emlite::Val(val) {}


