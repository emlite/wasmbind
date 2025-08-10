#include <webbind/LanguageDetectorCreateCoreOptions.hpp>

namespace webbind {

LanguageDetectorCreateCoreOptions::LanguageDetectorCreateCoreOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions::take_ownership(Handle h) noexcept {
    return LanguageDetectorCreateCoreOptions(h);
}

LanguageDetectorCreateCoreOptions::LanguageDetectorCreateCoreOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

LanguageDetectorCreateCoreOptions::LanguageDetectorCreateCoreOptions() noexcept: emlite::Val(emlite::Val::object()) {}

LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> LanguageDetectorCreateCoreOptions::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

void LanguageDetectorCreateCoreOptions::expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("expectedInputLanguages", value);
}


} // namespace webbind