#include <webbind/Font.hpp>


Font Font::take_ownership(Handle h) noexcept {
        return Font(h);
    }
Font Font::clone() const noexcept { return *this; }
Font::Font(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Font::Font(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString Font::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

unsigned long Font::glyphsRendered() const {
    return emlite::Val::get("glyphsRendered").as<unsigned long>();
}

