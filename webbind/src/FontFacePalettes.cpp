#include "webbind/FontFacePalettes.hpp"
#include "webbind/FontFacePalette.hpp"

namespace webbind {

FontFacePalettes FontFacePalettes::take_ownership(Handle h) noexcept {
        return FontFacePalettes(h);
    }
FontFacePalettes FontFacePalettes::clone() const noexcept { return *this; }
emlite::Val FontFacePalettes::instance() noexcept { return emlite::Val::global("FontFacePalettes"); }
FontFacePalettes::FontFacePalettes(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontFacePalettes::FontFacePalettes(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long FontFacePalettes::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}


} // namespace webbind