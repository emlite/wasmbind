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

jsbind::DOMString SummarizerCreateOptions::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::DOMString>();
}

void SummarizerCreateOptions::sharedContext(const jsbind::DOMString& value) {
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

jsbind::Sequence<jsbind::DOMString> SummarizerCreateCoreOptions::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::Sequence<jsbind::DOMString>>();
}

void SummarizerCreateCoreOptions::expectedInputLanguages(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("expectedInputLanguages", value);
}

jsbind::Sequence<jsbind::DOMString> SummarizerCreateCoreOptions::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::Sequence<jsbind::DOMString>>();
}

void SummarizerCreateCoreOptions::expectedContextLanguages(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("expectedContextLanguages", value);
}

jsbind::DOMString SummarizerCreateCoreOptions::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::DOMString>();
}

void SummarizerCreateCoreOptions::outputLanguage(const jsbind::DOMString& value) {
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

jsbind::DOMString SummarizerSummarizeOptions::context() const {
    return emlite::Val::get("context").as<jsbind::DOMString>();
}

void SummarizerSummarizeOptions::context(const jsbind::DOMString& value) {
    emlite::Val::set("context", value);
}

Summarizer Summarizer::take_ownership(Handle h) noexcept {
        return Summarizer(h);
    }
Summarizer Summarizer::clone() const noexcept { return *this; }
Summarizer::Summarizer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Summarizer::Summarizer(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise Summarizer::create(const SummarizerCreateOptions& options) {
    return emlite::Val::global("summarizer").call("create", options).as<jsbind::Promise>();
}

jsbind::Promise Summarizer::availability(const SummarizerCreateCoreOptions& options) {
    return emlite::Val::global("summarizer").call("availability", options).as<jsbind::Promise>();
}

jsbind::Promise Summarizer::summarize(const jsbind::DOMString& input, const SummarizerSummarizeOptions& options) {
    return emlite::Val::call("summarize", input, options).as<jsbind::Promise>();
}

ReadableStream Summarizer::summarizeStreaming(const jsbind::DOMString& input, const SummarizerSummarizeOptions& options) {
    return emlite::Val::call("summarizeStreaming", input, options).as<ReadableStream>();
}

jsbind::DOMString Summarizer::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::DOMString>();
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

jsbind::FrozenArray<jsbind::DOMString> Summarizer::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::FrozenArray<jsbind::DOMString> Summarizer::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::DOMString Summarizer::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::DOMString>();
}

jsbind::Promise Summarizer::measureInputUsage(const jsbind::DOMString& input, const SummarizerSummarizeOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise>();
}

double Summarizer::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined Summarizer::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

