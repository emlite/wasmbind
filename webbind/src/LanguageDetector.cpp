#include <webbind/LanguageDetector.hpp>
#include <webbind/AbortSignal.hpp>


LanguageDetectorCreateOptions::LanguageDetectorCreateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LanguageDetectorCreateOptions LanguageDetectorCreateOptions::take_ownership(Handle h) noexcept {
        return LanguageDetectorCreateOptions(h);
    }
LanguageDetectorCreateOptions::LanguageDetectorCreateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
LanguageDetectorCreateOptions::LanguageDetectorCreateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
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

LanguageDetectorCreateCoreOptions::LanguageDetectorCreateCoreOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions::take_ownership(Handle h) noexcept {
        return LanguageDetectorCreateCoreOptions(h);
    }
LanguageDetectorCreateCoreOptions::LanguageDetectorCreateCoreOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
LanguageDetectorCreateCoreOptions::LanguageDetectorCreateCoreOptions() noexcept: emlite::Val(emlite::Val::object()) {}
LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::DOMString> LanguageDetectorCreateCoreOptions::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::Sequence<jsbind::DOMString>>();
}

void LanguageDetectorCreateCoreOptions::expectedInputLanguages(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("expectedInputLanguages", value);
}

LanguageDetectionResult::LanguageDetectionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LanguageDetectionResult LanguageDetectionResult::take_ownership(Handle h) noexcept {
        return LanguageDetectionResult(h);
    }
LanguageDetectionResult::LanguageDetectionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
LanguageDetectionResult::LanguageDetectionResult() noexcept: emlite::Val(emlite::Val::object()) {}
LanguageDetectionResult LanguageDetectionResult::clone() const noexcept { return *this; }

jsbind::DOMString LanguageDetectionResult::detectedLanguage() const {
    return emlite::Val::get("detectedLanguage").as<jsbind::DOMString>();
}

void LanguageDetectionResult::detectedLanguage(const jsbind::DOMString& value) {
    emlite::Val::set("detectedLanguage", value);
}

double LanguageDetectionResult::confidence() const {
    return emlite::Val::get("confidence").as<double>();
}

void LanguageDetectionResult::confidence(double value) {
    emlite::Val::set("confidence", value);
}

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

LanguageDetector LanguageDetector::take_ownership(Handle h) noexcept {
        return LanguageDetector(h);
    }
LanguageDetector LanguageDetector::clone() const noexcept { return *this; }
LanguageDetector::LanguageDetector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LanguageDetector::LanguageDetector(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise LanguageDetector::create() {
    return emlite::Val::global("languagedetector").call("create").as<jsbind::Promise>();
}

jsbind::Promise LanguageDetector::create(const LanguageDetectorCreateOptions& options) {
    return emlite::Val::global("languagedetector").call("create", options).as<jsbind::Promise>();
}

jsbind::Promise LanguageDetector::availability() {
    return emlite::Val::global("languagedetector").call("availability").as<jsbind::Promise>();
}

jsbind::Promise LanguageDetector::availability(const LanguageDetectorCreateCoreOptions& options) {
    return emlite::Val::global("languagedetector").call("availability", options).as<jsbind::Promise>();
}

jsbind::Promise LanguageDetector::detect(const jsbind::DOMString& input) {
    return emlite::Val::call("detect", input).as<jsbind::Promise>();
}

jsbind::Promise LanguageDetector::detect(const jsbind::DOMString& input, const LanguageDetectorDetectOptions& options) {
    return emlite::Val::call("detect", input, options).as<jsbind::Promise>();
}

jsbind::FrozenArray<jsbind::DOMString> LanguageDetector::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::Promise LanguageDetector::measureInputUsage(const jsbind::DOMString& input) {
    return emlite::Val::call("measureInputUsage", input).as<jsbind::Promise>();
}

jsbind::Promise LanguageDetector::measureInputUsage(const jsbind::DOMString& input, const LanguageDetectorDetectOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise>();
}

double LanguageDetector::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined LanguageDetector::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

