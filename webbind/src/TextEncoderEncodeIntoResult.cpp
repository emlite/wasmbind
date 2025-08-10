#include <webbind/TextEncoderEncodeIntoResult.hpp>

using emlite::Val;
namespace webbind {

TextEncoderEncodeIntoResult::TextEncoderEncodeIntoResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult::take_ownership(Handle h) noexcept {
        return TextEncoderEncodeIntoResult(h);
    }
TextEncoderEncodeIntoResult::TextEncoderEncodeIntoResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
TextEncoderEncodeIntoResult::TextEncoderEncodeIntoResult() noexcept: emlite::Val(emlite::Val::object()) {}
TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult::clone() const noexcept { return *this; }

long long TextEncoderEncodeIntoResult::read() const {
    return emlite::Val::get("read").as<long long>();
}

void TextEncoderEncodeIntoResult::read(long long value) {
    emlite::Val::set("read", value);
}

long long TextEncoderEncodeIntoResult::written() const {
    return emlite::Val::get("written").as<long long>();
}

void TextEncoderEncodeIntoResult::written(long long value) {
    emlite::Val::set("written", value);
}


} // namespace webbind