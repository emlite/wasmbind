#include <webbind/Font.hpp>

namespace webbind {

Font Font::take_ownership(Handle h) noexcept {
        return Font(h);
    }
Font Font::clone() const noexcept { return *this; }
emlite::Val Font::instance() noexcept { return emlite::Val::global("Font"); }
Font::Font(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Font::Font(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String Font::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

unsigned long Font::glyphsRendered() const {
    return emlite::Val::get("glyphsRendered").as<unsigned long>();
}


} // namespace webbind