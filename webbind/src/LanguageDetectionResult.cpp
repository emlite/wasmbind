#include "webbind/LanguageDetectionResult.hpp"

using emlite::Val;
namespace webbind {

LanguageDetectionResult::LanguageDetectionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LanguageDetectionResult LanguageDetectionResult::take_ownership(Handle h) noexcept {
        return LanguageDetectionResult(h);
    }
LanguageDetectionResult::LanguageDetectionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
LanguageDetectionResult::LanguageDetectionResult() noexcept: emlite::Val(emlite::Val::object()) {}
LanguageDetectionResult LanguageDetectionResult::clone() const noexcept { return *this; }

jsbind::String LanguageDetectionResult::detectedLanguage() const {
    return emlite::Val::get("detectedLanguage").as<jsbind::String>();
}

void LanguageDetectionResult::detectedLanguage(const jsbind::String& value) {
    emlite::Val::set("detectedLanguage", value);
}

double LanguageDetectionResult::confidence() const {
    return emlite::Val::get("confidence").as<double>();
}

void LanguageDetectionResult::confidence(double value) {
    emlite::Val::set("confidence", value);
}


} // namespace webbind