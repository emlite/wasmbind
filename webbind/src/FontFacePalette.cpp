#include <webbind/FontFacePalette.hpp>


FontFacePalette FontFacePalette::take_ownership(Handle h) noexcept {
        return FontFacePalette(h);
    }
FontFacePalette FontFacePalette::clone() const noexcept { return *this; }
FontFacePalette::FontFacePalette(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FontFacePalette::FontFacePalette(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long FontFacePalette::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

bool FontFacePalette::usableWithLightBackground() const {
    return emlite::Val::get("usableWithLightBackground").as<bool>();
}

bool FontFacePalette::usableWithDarkBackground() const {
    return emlite::Val::get("usableWithDarkBackground").as<bool>();
}

