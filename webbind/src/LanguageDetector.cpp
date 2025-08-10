#include "webbind/LanguageDetector.hpp"
#include "webbind/LanguageDetector.hpp"
#include "webbind/LanguageDetectorCreateOptions.hpp"
#include "webbind/LanguageDetectorCreateCoreOptions.hpp"
#include "webbind/LanguageDetectionResult.hpp"
#include "webbind/LanguageDetectorDetectOptions.hpp"

namespace webbind {

LanguageDetector LanguageDetector::take_ownership(Handle h) noexcept {
        return LanguageDetector(h);
    }
LanguageDetector LanguageDetector::clone() const noexcept { return *this; }
emlite::Val LanguageDetector::instance() noexcept { return emlite::Val::global("LanguageDetector"); }
LanguageDetector::LanguageDetector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LanguageDetector::LanguageDetector(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<LanguageDetector> LanguageDetector::create() {
    return emlite::Val::global("languagedetector").call("create").as<jsbind::Promise<LanguageDetector>>();
}

jsbind::Promise<LanguageDetector> LanguageDetector::create(const LanguageDetectorCreateOptions& options) {
    return emlite::Val::global("languagedetector").call("create", options).as<jsbind::Promise<LanguageDetector>>();
}

jsbind::Promise<Availability> LanguageDetector::availability() {
    return emlite::Val::global("languagedetector").call("availability").as<jsbind::Promise<Availability>>();
}

jsbind::Promise<Availability> LanguageDetector::availability(const LanguageDetectorCreateCoreOptions& options) {
    return emlite::Val::global("languagedetector").call("availability", options).as<jsbind::Promise<Availability>>();
}

jsbind::Promise<jsbind::TypedArray<LanguageDetectionResult>> LanguageDetector::detect(const jsbind::String& input) {
    return emlite::Val::call("detect", input).as<jsbind::Promise<jsbind::TypedArray<LanguageDetectionResult>>>();
}

jsbind::Promise<jsbind::TypedArray<LanguageDetectionResult>> LanguageDetector::detect(const jsbind::String& input, const LanguageDetectorDetectOptions& options) {
    return emlite::Val::call("detect", input, options).as<jsbind::Promise<jsbind::TypedArray<LanguageDetectionResult>>>();
}

jsbind::TypedArray<jsbind::String> LanguageDetector::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::Promise<double> LanguageDetector::measureInputUsage(const jsbind::String& input) {
    return emlite::Val::call("measureInputUsage", input).as<jsbind::Promise<double>>();
}

jsbind::Promise<double> LanguageDetector::measureInputUsage(const jsbind::String& input, const LanguageDetectorDetectOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise<double>>();
}

double LanguageDetector::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined LanguageDetector::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}


} // namespace webbind