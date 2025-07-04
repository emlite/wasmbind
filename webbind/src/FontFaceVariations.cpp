#include <webbind/FontFaceVariations.hpp>


FontFaceVariations FontFaceVariations::take_ownership(Handle h) noexcept {
        return FontFaceVariations(h);
    }
FontFaceVariations FontFaceVariations::clone() const noexcept { return *this; }
FontFaceVariations::FontFaceVariations(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontFaceVariations::FontFaceVariations(const emlite::Val &val) noexcept: emlite::Val(val) {}


