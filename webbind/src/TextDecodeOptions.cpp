#include "webbind/TextDecodeOptions.hpp"

using emlite::Val;
namespace webbind {

TextDecodeOptions::TextDecodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextDecodeOptions TextDecodeOptions::take_ownership(Handle h) noexcept {
        return TextDecodeOptions(h);
    }
TextDecodeOptions::TextDecodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
TextDecodeOptions::TextDecodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
TextDecodeOptions TextDecodeOptions::clone() const noexcept { return *this; }

bool TextDecodeOptions::stream() const {
    return emlite::Val::get("stream").as<bool>();
}

void TextDecodeOptions::stream(bool value) {
    emlite::Val::set("stream", value);
}


} // namespace webbind