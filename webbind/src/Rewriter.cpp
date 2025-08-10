#include "webbind/Rewriter.hpp"
#include "webbind/Rewriter.hpp"
#include "webbind/RewriterCreateOptions.hpp"
#include "webbind/RewriterCreateCoreOptions.hpp"
#include "webbind/RewriterRewriteOptions.hpp"
#include "webbind/ReadableStream.hpp"

namespace webbind {

Rewriter Rewriter::take_ownership(Handle h) noexcept {
        return Rewriter(h);
    }
Rewriter Rewriter::clone() const noexcept { return *this; }
emlite::Val Rewriter::instance() noexcept { return emlite::Val::global("Rewriter"); }
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


} // namespace webbind