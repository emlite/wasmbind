#include <webbind/Summarizer.hpp>
#include <webbind/Summarizer.hpp>
#include <webbind/SummarizerCreateOptions.hpp>
#include <webbind/SummarizerCreateCoreOptions.hpp>
#include <webbind/SummarizerSummarizeOptions.hpp>
#include <webbind/ReadableStream.hpp>

namespace webbind {

Summarizer Summarizer::take_ownership(Handle h) noexcept {
    return Summarizer(h);
}

Summarizer Summarizer::clone() const noexcept { return *this; }

emlite::Val Summarizer::instance() noexcept { return emlite::Val::global("Summarizer"); }

Summarizer::Summarizer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

Summarizer::Summarizer(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<Summarizer> Summarizer::create() {
    return emlite::Val::global("summarizer").call("create").as<jsbind::Promise<Summarizer>>();
}

jsbind::Promise<Summarizer> Summarizer::create(const SummarizerCreateOptions& options) {
    return emlite::Val::global("summarizer").call("create", options).as<jsbind::Promise<Summarizer>>();
}

jsbind::Promise<Availability> Summarizer::availability() {
    return emlite::Val::global("summarizer").call("availability").as<jsbind::Promise<Availability>>();
}

jsbind::Promise<Availability> Summarizer::availability(const SummarizerCreateCoreOptions& options) {
    return emlite::Val::global("summarizer").call("availability", options).as<jsbind::Promise<Availability>>();
}

jsbind::Promise<jsbind::String> Summarizer::summarize(const jsbind::String& input) {
    return emlite::Val::call("summarize", input).as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> Summarizer::summarize(const jsbind::String& input, const SummarizerSummarizeOptions& options) {
    return emlite::Val::call("summarize", input, options).as<jsbind::Promise<jsbind::String>>();
}

ReadableStream Summarizer::summarizeStreaming(const jsbind::String& input) {
    return emlite::Val::call("summarizeStreaming", input).as<ReadableStream>();
}

ReadableStream Summarizer::summarizeStreaming(const jsbind::String& input, const SummarizerSummarizeOptions& options) {
    return emlite::Val::call("summarizeStreaming", input, options).as<ReadableStream>();
}

jsbind::String Summarizer::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::String>();
}

SummarizerType Summarizer::type() const {
    return emlite::Val::get("type").as<SummarizerType>();
}

SummarizerFormat Summarizer::format() const {
    return emlite::Val::get("format").as<SummarizerFormat>();
}

SummarizerLength Summarizer::length() const {
    return emlite::Val::get("length").as<SummarizerLength>();
}

jsbind::TypedArray<jsbind::String> Summarizer::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::TypedArray<jsbind::String> Summarizer::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::String Summarizer::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::String>();
}

jsbind::Promise<double> Summarizer::measureInputUsage(const jsbind::String& input) {
    return emlite::Val::call("measureInputUsage", input).as<jsbind::Promise<double>>();
}

jsbind::Promise<double> Summarizer::measureInputUsage(const jsbind::String& input, const SummarizerSummarizeOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise<double>>();
}

double Summarizer::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined Summarizer::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}


} // namespace webbind