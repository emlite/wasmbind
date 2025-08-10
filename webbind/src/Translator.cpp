#include <webbind/Translator.hpp>
#include <webbind/Translator.hpp>
#include <webbind/TranslatorCreateOptions.hpp>
#include <webbind/TranslatorCreateCoreOptions.hpp>
#include <webbind/TranslatorTranslateOptions.hpp>
#include <webbind/ReadableStream.hpp>

namespace webbind {

Translator Translator::take_ownership(Handle h) noexcept {
    return Translator(h);
}

Translator Translator::clone() const noexcept { return *this; }

emlite::Val Translator::instance() noexcept { return emlite::Val::global("Translator"); }

Translator::Translator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Translator::Translator(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<Translator> Translator::create(const TranslatorCreateOptions& options) {
    return emlite::Val::global("translator").call("create", options).as<jsbind::Promise<Translator>>();
}

jsbind::Promise<Availability> Translator::availability(const TranslatorCreateCoreOptions& options) {
    return emlite::Val::global("translator").call("availability", options).as<jsbind::Promise<Availability>>();
}

jsbind::Promise<jsbind::String> Translator::translate(const jsbind::String& input) {
    return emlite::Val::call("translate", input).as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> Translator::translate(const jsbind::String& input, const TranslatorTranslateOptions& options) {
    return emlite::Val::call("translate", input, options).as<jsbind::Promise<jsbind::String>>();
}

ReadableStream Translator::translateStreaming(const jsbind::String& input) {
    return emlite::Val::call("translateStreaming", input).as<ReadableStream>();
}

ReadableStream Translator::translateStreaming(const jsbind::String& input, const TranslatorTranslateOptions& options) {
    return emlite::Val::call("translateStreaming", input, options).as<ReadableStream>();
}

jsbind::String Translator::sourceLanguage() const {
    return emlite::Val::get("sourceLanguage").as<jsbind::String>();
}

jsbind::String Translator::targetLanguage() const {
    return emlite::Val::get("targetLanguage").as<jsbind::String>();
}

jsbind::Promise<double> Translator::measureInputUsage(const jsbind::String& input) {
    return emlite::Val::call("measureInputUsage", input).as<jsbind::Promise<double>>();
}

jsbind::Promise<double> Translator::measureInputUsage(const jsbind::String& input, const TranslatorTranslateOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise<double>>();
}

double Translator::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined Translator::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}


} // namespace webbind