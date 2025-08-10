#include "webbind/LanguageDetectorDetectOptions.hpp"
#include "webbind/AbortSignal.hpp"

using emlite::Val;
namespace webbind {

LanguageDetectorDetectOptions::LanguageDetectorDetectOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LanguageDetectorDetectOptions LanguageDetectorDetectOptions::take_ownership(Handle h) noexcept {
        return LanguageDetectorDetectOptions(h);
    }
LanguageDetectorDetectOptions::LanguageDetectorDetectOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
LanguageDetectorDetectOptions::LanguageDetectorDetectOptions() noexcept: emlite::Val(emlite::Val::object()) {}
LanguageDetectorDetectOptions LanguageDetectorDetectOptions::clone() const noexcept { return *this; }

AbortSignal LanguageDetectorDetectOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void LanguageDetectorDetectOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind