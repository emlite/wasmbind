#include <webbind/TextDecoderOptions.hpp>

namespace webbind {

TextDecoderOptions::TextDecoderOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextDecoderOptions TextDecoderOptions::take_ownership(Handle h) noexcept {
    return TextDecoderOptions(h);
}

TextDecoderOptions::TextDecoderOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

TextDecoderOptions::TextDecoderOptions() noexcept: emlite::Val(emlite::Val::object()) {}

TextDecoderOptions TextDecoderOptions::clone() const noexcept { return *this; }

bool TextDecoderOptions::fatal() const {
    return emlite::Val::get("fatal").as<bool>();
}

void TextDecoderOptions::fatal(bool value) {
    emlite::Val::set("fatal", value);
}

bool TextDecoderOptions::ignoreBOM() const {
    return emlite::Val::get("ignoreBOM").as<bool>();
}

void TextDecoderOptions::ignoreBOM(bool value) {
    emlite::Val::set("ignoreBOM", value);
}


} // namespace webbind