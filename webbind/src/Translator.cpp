#include <webbind/Translator.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/AbortSignal.hpp>


TranslatorCreateOptions::TranslatorCreateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TranslatorCreateOptions TranslatorCreateOptions::take_ownership(Handle h) noexcept {
        return TranslatorCreateOptions(h);
    }
TranslatorCreateOptions::TranslatorCreateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
TranslatorCreateOptions::TranslatorCreateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
TranslatorCreateOptions TranslatorCreateOptions::clone() const noexcept { return *this; }

AbortSignal TranslatorCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void TranslatorCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function TranslatorCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void TranslatorCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}

TranslatorCreateCoreOptions::TranslatorCreateCoreOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TranslatorCreateCoreOptions TranslatorCreateCoreOptions::take_ownership(Handle h) noexcept {
        return TranslatorCreateCoreOptions(h);
    }
TranslatorCreateCoreOptions::TranslatorCreateCoreOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
TranslatorCreateCoreOptions::TranslatorCreateCoreOptions() noexcept: emlite::Val(emlite::Val::object()) {}
TranslatorCreateCoreOptions TranslatorCreateCoreOptions::clone() const noexcept { return *this; }

jsbind::DOMString TranslatorCreateCoreOptions::sourceLanguage() const {
    return emlite::Val::get("sourceLanguage").as<jsbind::DOMString>();
}

void TranslatorCreateCoreOptions::sourceLanguage(const jsbind::DOMString& value) {
    emlite::Val::set("sourceLanguage", value);
}

jsbind::DOMString TranslatorCreateCoreOptions::targetLanguage() const {
    return emlite::Val::get("targetLanguage").as<jsbind::DOMString>();
}

void TranslatorCreateCoreOptions::targetLanguage(const jsbind::DOMString& value) {
    emlite::Val::set("targetLanguage", value);
}

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

Translator Translator::take_ownership(Handle h) noexcept {
        return Translator(h);
    }
Translator Translator::clone() const noexcept { return *this; }
Translator::Translator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Translator::Translator(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise Translator::create(const TranslatorCreateOptions& options) {
    return emlite::Val::global("translator").call("create", options).as<jsbind::Promise>();
}

jsbind::Promise Translator::availability(const TranslatorCreateCoreOptions& options) {
    return emlite::Val::global("translator").call("availability", options).as<jsbind::Promise>();
}

jsbind::Promise Translator::translate(const jsbind::DOMString& input) {
    return emlite::Val::call("translate", input).as<jsbind::Promise>();
}

jsbind::Promise Translator::translate(const jsbind::DOMString& input, const TranslatorTranslateOptions& options) {
    return emlite::Val::call("translate", input, options).as<jsbind::Promise>();
}

ReadableStream Translator::translateStreaming(const jsbind::DOMString& input) {
    return emlite::Val::call("translateStreaming", input).as<ReadableStream>();
}

ReadableStream Translator::translateStreaming(const jsbind::DOMString& input, const TranslatorTranslateOptions& options) {
    return emlite::Val::call("translateStreaming", input, options).as<ReadableStream>();
}

jsbind::DOMString Translator::sourceLanguage() const {
    return emlite::Val::get("sourceLanguage").as<jsbind::DOMString>();
}

jsbind::DOMString Translator::targetLanguage() const {
    return emlite::Val::get("targetLanguage").as<jsbind::DOMString>();
}

jsbind::Promise Translator::measureInputUsage(const jsbind::DOMString& input) {
    return emlite::Val::call("measureInputUsage", input).as<jsbind::Promise>();
}

jsbind::Promise Translator::measureInputUsage(const jsbind::DOMString& input, const TranslatorTranslateOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise>();
}

double Translator::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined Translator::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

