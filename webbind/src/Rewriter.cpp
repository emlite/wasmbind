#include <webbind/Rewriter.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/AbortSignal.hpp>


RewriterCreateOptions::RewriterCreateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RewriterCreateOptions RewriterCreateOptions::take_ownership(Handle h) noexcept {
        return RewriterCreateOptions(h);
    }
RewriterCreateOptions::RewriterCreateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RewriterCreateOptions::RewriterCreateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RewriterCreateOptions RewriterCreateOptions::clone() const noexcept { return *this; }

AbortSignal RewriterCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void RewriterCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function RewriterCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void RewriterCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}

jsbind::String RewriterCreateOptions::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::String>();
}

void RewriterCreateOptions::sharedContext(const jsbind::String& value) {
    emlite::Val::set("sharedContext", value);
}

RewriterCreateCoreOptions::RewriterCreateCoreOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RewriterCreateCoreOptions RewriterCreateCoreOptions::take_ownership(Handle h) noexcept {
        return RewriterCreateCoreOptions(h);
    }
RewriterCreateCoreOptions::RewriterCreateCoreOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RewriterCreateCoreOptions::RewriterCreateCoreOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RewriterCreateCoreOptions RewriterCreateCoreOptions::clone() const noexcept { return *this; }

RewriterTone RewriterCreateCoreOptions::tone() const {
    return emlite::Val::get("tone").as<RewriterTone>();
}

void RewriterCreateCoreOptions::tone(const RewriterTone& value) {
    emlite::Val::set("tone", value);
}

RewriterFormat RewriterCreateCoreOptions::format() const {
    return emlite::Val::get("format").as<RewriterFormat>();
}

void RewriterCreateCoreOptions::format(const RewriterFormat& value) {
    emlite::Val::set("format", value);
}

RewriterLength RewriterCreateCoreOptions::length() const {
    return emlite::Val::get("length").as<RewriterLength>();
}

void RewriterCreateCoreOptions::length(const RewriterLength& value) {
    emlite::Val::set("length", value);
}

jsbind::TypedArray<jsbind::String> RewriterCreateCoreOptions::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

void RewriterCreateCoreOptions::expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("expectedInputLanguages", value);
}

jsbind::TypedArray<jsbind::String> RewriterCreateCoreOptions::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

void RewriterCreateCoreOptions::expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("expectedContextLanguages", value);
}

jsbind::String RewriterCreateCoreOptions::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::String>();
}

void RewriterCreateCoreOptions::outputLanguage(const jsbind::String& value) {
    emlite::Val::set("outputLanguage", value);
}

RewriterRewriteOptions::RewriterRewriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RewriterRewriteOptions RewriterRewriteOptions::take_ownership(Handle h) noexcept {
        return RewriterRewriteOptions(h);
    }
RewriterRewriteOptions::RewriterRewriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RewriterRewriteOptions::RewriterRewriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RewriterRewriteOptions RewriterRewriteOptions::clone() const noexcept { return *this; }

jsbind::String RewriterRewriteOptions::context() const {
    return emlite::Val::get("context").as<jsbind::String>();
}

void RewriterRewriteOptions::context(const jsbind::String& value) {
    emlite::Val::set("context", value);
}

AbortSignal RewriterRewriteOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void RewriterRewriteOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

Rewriter Rewriter::take_ownership(Handle h) noexcept {
        return Rewriter(h);
    }
Rewriter Rewriter::clone() const noexcept { return *this; }
Rewriter::Rewriter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Rewriter::Rewriter(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<Rewriter> Rewriter::create() {
    return emlite::Val::global("rewriter").call("create").as<jsbind::Promise<Rewriter>>();
}

jsbind::Promise<Rewriter> Rewriter::create(const RewriterCreateOptions& options) {
    return emlite::Val::global("rewriter").call("create", options).as<jsbind::Promise<Rewriter>>();
}

jsbind::Promise<Availability> Rewriter::availability() {
    return emlite::Val::global("rewriter").call("availability").as<jsbind::Promise<Availability>>();
}

jsbind::Promise<Availability> Rewriter::availability(const RewriterCreateCoreOptions& options) {
    return emlite::Val::global("rewriter").call("availability", options).as<jsbind::Promise<Availability>>();
}

jsbind::Promise<jsbind::String> Rewriter::rewrite(const jsbind::String& input) {
    return emlite::Val::call("rewrite", input).as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> Rewriter::rewrite(const jsbind::String& input, const RewriterRewriteOptions& options) {
    return emlite::Val::call("rewrite", input, options).as<jsbind::Promise<jsbind::String>>();
}

ReadableStream Rewriter::rewriteStreaming(const jsbind::String& input) {
    return emlite::Val::call("rewriteStreaming", input).as<ReadableStream>();
}

ReadableStream Rewriter::rewriteStreaming(const jsbind::String& input, const RewriterRewriteOptions& options) {
    return emlite::Val::call("rewriteStreaming", input, options).as<ReadableStream>();
}

jsbind::String Rewriter::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::String>();
}

RewriterTone Rewriter::tone() const {
    return emlite::Val::get("tone").as<RewriterTone>();
}

RewriterFormat Rewriter::format() const {
    return emlite::Val::get("format").as<RewriterFormat>();
}

RewriterLength Rewriter::length() const {
    return emlite::Val::get("length").as<RewriterLength>();
}

jsbind::TypedArray<jsbind::String> Rewriter::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::TypedArray<jsbind::String> Rewriter::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::String Rewriter::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::String>();
}

jsbind::Promise<double> Rewriter::measureInputUsage(const jsbind::String& input) {
    return emlite::Val::call("measureInputUsage", input).as<jsbind::Promise<double>>();
}

jsbind::Promise<double> Rewriter::measureInputUsage(const jsbind::String& input, const RewriterRewriteOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise<double>>();
}

double Rewriter::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined Rewriter::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

