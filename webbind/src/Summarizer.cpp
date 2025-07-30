#include <webbind/Summarizer.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/AbortSignal.hpp>


SummarizerCreateOptions::SummarizerCreateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SummarizerCreateOptions SummarizerCreateOptions::take_ownership(Handle h) noexcept {
        return SummarizerCreateOptions(h);
    }
SummarizerCreateOptions::SummarizerCreateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SummarizerCreateOptions::SummarizerCreateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SummarizerCreateOptions SummarizerCreateOptions::clone() const noexcept { return *this; }

AbortSignal SummarizerCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void SummarizerCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function SummarizerCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void SummarizerCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}

jsbind::String SummarizerCreateOptions::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::String>();
}

void SummarizerCreateOptions::sharedContext(const jsbind::String& value) {
    emlite::Val::set("sharedContext", value);
}

SummarizerCreateCoreOptions::SummarizerCreateCoreOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SummarizerCreateCoreOptions SummarizerCreateCoreOptions::take_ownership(Handle h) noexcept {
        return SummarizerCreateCoreOptions(h);
    }
SummarizerCreateCoreOptions::SummarizerCreateCoreOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SummarizerCreateCoreOptions::SummarizerCreateCoreOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SummarizerCreateCoreOptions SummarizerCreateCoreOptions::clone() const noexcept { return *this; }

SummarizerType SummarizerCreateCoreOptions::type() const {
    return emlite::Val::get("type").as<SummarizerType>();
}

void SummarizerCreateCoreOptions::type(const SummarizerType& value) {
    emlite::Val::set("type", value);
}

SummarizerFormat SummarizerCreateCoreOptions::format() const {
    return emlite::Val::get("format").as<SummarizerFormat>();
}

void SummarizerCreateCoreOptions::format(const SummarizerFormat& value) {
    emlite::Val::set("format", value);
}

SummarizerLength SummarizerCreateCoreOptions::length() const {
    return emlite::Val::get("length").as<SummarizerLength>();
}

void SummarizerCreateCoreOptions::length(const SummarizerLength& value) {
    emlite::Val::set("length", value);
}

jsbind::TypedArray<jsbind::String> SummarizerCreateCoreOptions::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

void SummarizerCreateCoreOptions::expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("expectedInputLanguages", value);
}

jsbind::TypedArray<jsbind::String> SummarizerCreateCoreOptions::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

void SummarizerCreateCoreOptions::expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("expectedContextLanguages", value);
}

jsbind::String SummarizerCreateCoreOptions::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::String>();
}

void SummarizerCreateCoreOptions::outputLanguage(const jsbind::String& value) {
    emlite::Val::set("outputLanguage", value);
}

SummarizerSummarizeOptions::SummarizerSummarizeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SummarizerSummarizeOptions SummarizerSummarizeOptions::take_ownership(Handle h) noexcept {
        return SummarizerSummarizeOptions(h);
    }
SummarizerSummarizeOptions::SummarizerSummarizeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SummarizerSummarizeOptions::SummarizerSummarizeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SummarizerSummarizeOptions SummarizerSummarizeOptions::clone() const noexcept { return *this; }

AbortSignal SummarizerSummarizeOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void SummarizerSummarizeOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::String SummarizerSummarizeOptions::context() const {
    return emlite::Val::get("context").as<jsbind::String>();
}

void SummarizerSummarizeOptions::context(const jsbind::String& value) {
    emlite::Val::set("context", value);
}

Summarizer Summarizer::take_ownership(Handle h) noexcept {
        return Summarizer(h);
    }
Summarizer Summarizer::clone() const noexcept { return *this; }
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

