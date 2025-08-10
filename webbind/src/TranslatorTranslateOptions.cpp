#include <webbind/TranslatorTranslateOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

TranslatorTranslateOptions::TranslatorTranslateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TranslatorTranslateOptions TranslatorTranslateOptions::take_ownership(Handle h) noexcept {
    return TranslatorTranslateOptions(h);
}

TranslatorTranslateOptions::TranslatorTranslateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

TranslatorTranslateOptions::TranslatorTranslateOptions() noexcept: emlite::Val(emlite::Val::object()) {}

TranslatorTranslateOptions TranslatorTranslateOptions::clone() const noexcept { return *this; }

AbortSignal TranslatorTranslateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void TranslatorTranslateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind