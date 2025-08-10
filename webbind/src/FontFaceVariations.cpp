#include <webbind/FontFaceVariations.hpp>

namespace webbind {

FontFaceVariations FontFaceVariations::take_ownership(Handle h) noexcept {
        return FontFaceVariations(h);
    }
FontFaceVariations FontFaceVariations::clone() const noexcept { return *this; }
emlite::Val FontFaceVariations::instance() noexcept { return emlite::Val::global("FontFaceVariations"); }
FontFaceVariations::FontFaceVariations(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontFaceVariations::FontFaceVariations(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind