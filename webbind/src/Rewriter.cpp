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

jsbind::DOMString RewriterCreateOptions::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::DOMString>();
}

void RewriterCreateOptions::sharedContext(const jsbind::DOMString& value) {
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

jsbind::Sequence<jsbind::DOMString> RewriterCreateCoreOptions::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::Sequence<jsbind::DOMString>>();
}

void RewriterCreateCoreOptions::expectedInputLanguages(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("expectedInputLanguages", value);
}

jsbind::Sequence<jsbind::DOMString> RewriterCreateCoreOptions::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::Sequence<jsbind::DOMString>>();
}

void RewriterCreateCoreOptions::expectedContextLanguages(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("expectedContextLanguages", value);
}

jsbind::DOMString RewriterCreateCoreOptions::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::DOMString>();
}

void RewriterCreateCoreOptions::outputLanguage(const jsbind::DOMString& value) {
    emlite::Val::set("outputLanguage", value);
}

RewriterRewriteOptions::RewriterRewriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RewriterRewriteOptions RewriterRewriteOptions::take_ownership(Handle h) noexcept {
        return RewriterRewriteOptions(h);
    }
RewriterRewriteOptions::RewriterRewriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RewriterRewriteOptions::RewriterRewriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RewriterRewriteOptions RewriterRewriteOptions::clone() const noexcept { return *this; }

jsbind::DOMString RewriterRewriteOptions::context() const {
    return emlite::Val::get("context").as<jsbind::DOMString>();
}

void RewriterRewriteOptions::context(const jsbind::DOMString& value) {
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


jsbind::Promise Rewriter::create(const RewriterCreateOptions& options) {
    return emlite::Val::global("rewriter").call("create", options).as<jsbind::Promise>();
}

jsbind::Promise Rewriter::availability(const RewriterCreateCoreOptions& options) {
    return emlite::Val::global("rewriter").call("availability", options).as<jsbind::Promise>();
}

jsbind::Promise Rewriter::rewrite(const jsbind::DOMString& input, const RewriterRewriteOptions& options) {
    return emlite::Val::call("rewrite", input, options).as<jsbind::Promise>();
}

ReadableStream Rewriter::rewriteStreaming(const jsbind::DOMString& input, const RewriterRewriteOptions& options) {
    return emlite::Val::call("rewriteStreaming", input, options).as<ReadableStream>();
}

jsbind::DOMString Rewriter::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::DOMString>();
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

jsbind::FrozenArray<jsbind::DOMString> Rewriter::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::FrozenArray<jsbind::DOMString> Rewriter::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::DOMString Rewriter::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::DOMString>();
}

jsbind::Promise Rewriter::measureInputUsage(const jsbind::DOMString& input, const RewriterRewriteOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise>();
}

double Rewriter::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined Rewriter::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

