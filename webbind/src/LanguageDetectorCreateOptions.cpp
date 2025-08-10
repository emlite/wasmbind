#include <webbind/LanguageDetectorCreateOptions.hpp>
#include <webbind/AbortSignal.hpp>

using emlite::Val;
namespace webbind {

LanguageDetectorCreateOptions::LanguageDetectorCreateOptions(Handle h) noexcept : LanguageDetectorCreateCoreOptions(emlite::Val::take_ownership(h)) {}
LanguageDetectorCreateOptions LanguageDetectorCreateOptions::take_ownership(Handle h) noexcept {
        return LanguageDetectorCreateOptions(h);
    }
LanguageDetectorCreateOptions::LanguageDetectorCreateOptions(const emlite::Val &val) noexcept: LanguageDetectorCreateCoreOptions(val) {}
LanguageDetectorCreateOptions::LanguageDetectorCreateOptions() noexcept: LanguageDetectorCreateCoreOptions(emlite::Val::object()) {}
LanguageDetectorCreateOptions LanguageDetectorCreateOptions::clone() const noexcept { return *this; }

AbortSignal LanguageDetectorCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void LanguageDetectorCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function LanguageDetectorCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void LanguageDetectorCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}


} // namespace webbind