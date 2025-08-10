#include <webbind/TextFormatInit.hpp>

namespace webbind {

TextFormatInit::TextFormatInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextFormatInit TextFormatInit::take_ownership(Handle h) noexcept {
    return TextFormatInit(h);
}

TextFormatInit::TextFormatInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

TextFormatInit::TextFormatInit() noexcept: emlite::Val(emlite::Val::object()) {}

TextFormatInit TextFormatInit::clone() const noexcept { return *this; }

unsigned long TextFormatInit::rangeStart() const {
    return emlite::Val::get("rangeStart").as<unsigned long>();
}

void TextFormatInit::rangeStart(unsigned long value) {
    emlite::Val::set("rangeStart", value);
}

unsigned long TextFormatInit::rangeEnd() const {
    return emlite::Val::get("rangeEnd").as<unsigned long>();
}

void TextFormatInit::rangeEnd(unsigned long value) {
    emlite::Val::set("rangeEnd", value);
}

UnderlineStyle TextFormatInit::underlineStyle() const {
    return emlite::Val::get("underlineStyle").as<UnderlineStyle>();
}

void TextFormatInit::underlineStyle(const UnderlineStyle& value) {
    emlite::Val::set("underlineStyle", value);
}

UnderlineThickness TextFormatInit::underlineThickness() const {
    return emlite::Val::get("underlineThickness").as<UnderlineThickness>();
}

void TextFormatInit::underlineThickness(const UnderlineThickness& value) {
    emlite::Val::set("underlineThickness", value);
}


} // namespace webbind