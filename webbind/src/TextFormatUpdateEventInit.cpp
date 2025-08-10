#include "webbind/TextFormatUpdateEventInit.hpp"
#include "webbind/TextFormat.hpp"

using emlite::Val;
namespace webbind {

TextFormatUpdateEventInit::TextFormatUpdateEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
TextFormatUpdateEventInit TextFormatUpdateEventInit::take_ownership(Handle h) noexcept {
        return TextFormatUpdateEventInit(h);
    }
TextFormatUpdateEventInit::TextFormatUpdateEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
TextFormatUpdateEventInit::TextFormatUpdateEventInit() noexcept: EventInit(emlite::Val::object()) {}
TextFormatUpdateEventInit TextFormatUpdateEventInit::clone() const noexcept { return *this; }

jsbind::TypedArray<TextFormat> TextFormatUpdateEventInit::textFormats() const {
    return emlite::Val::get("textFormats").as<jsbind::TypedArray<TextFormat>>();
}

void TextFormatUpdateEventInit::textFormats(const jsbind::TypedArray<TextFormat>& value) {
    emlite::Val::set("textFormats", value);
}


} // namespace webbind