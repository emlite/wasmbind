#include <webbind/TextFormat.hpp>


TextFormat TextFormat::take_ownership(Handle h) noexcept {
        return TextFormat(h);
    }
TextFormat TextFormat::clone() const noexcept { return *this; }
TextFormat::TextFormat(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextFormat::TextFormat(const emlite::Val &val) noexcept: emlite::Val(val) {}


TextFormat::TextFormat() : emlite::Val(emlite::Val::global("TextFormat").new_()) {}

TextFormat::TextFormat(const jsbind::Any& options) : emlite::Val(emlite::Val::global("TextFormat").new_(options)) {}

unsigned long TextFormat::rangeStart() const {
    return emlite::Val::get("rangeStart").as<unsigned long>();
}

unsigned long TextFormat::rangeEnd() const {
    return emlite::Val::get("rangeEnd").as<unsigned long>();
}

UnderlineStyle TextFormat::underlineStyle() const {
    return emlite::Val::get("underlineStyle").as<UnderlineStyle>();
}

UnderlineThickness TextFormat::underlineThickness() const {
    return emlite::Val::get("underlineThickness").as<UnderlineThickness>();
}

