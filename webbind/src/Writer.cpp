#include <webbind/Writer.hpp>
#include <webbind/Writer.hpp>
#include <webbind/WriterCreateOptions.hpp>
#include <webbind/WriterCreateCoreOptions.hpp>
#include <webbind/WriterWriteOptions.hpp>
#include <webbind/ReadableStream.hpp>

namespace webbind {

Writer Writer::take_ownership(Handle h) noexcept {
        return Writer(h);
    }
Writer Writer::clone() const noexcept { return *this; }
emlite::Val Writer::instance() noexcept { return emlite::Val::global("Writer"); }
Writer::Writer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Writer::Writer(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<Writer> Writer::create() {
    return emlite::Val::global("writer").call("create").as<jsbind::Promise<Writer>>();
}

jsbind::Promise<Writer> Writer::create(const WriterCreateOptions& options) {
    return emlite::Val::global("writer").call("create", options).as<jsbind::Promise<Writer>>();
}

jsbind::Promise<Availability> Writer::availability() {
    return emlite::Val::global("writer").call("availability").as<jsbind::Promise<Availability>>();
}

jsbind::Promise<Availability> Writer::availability(const WriterCreateCoreOptions& options) {
    return emlite::Val::global("writer").call("availability", options).as<jsbind::Promise<Availability>>();
}

jsbind::Promise<jsbind::String> Writer::write(const jsbind::String& input) {
    return emlite::Val::call("write", input).as<jsbind::Promise<jsbind::String>>();
}

jsbind::Promise<jsbind::String> Writer::write(const jsbind::String& input, const WriterWriteOptions& options) {
    return emlite::Val::call("write", input, options).as<jsbind::Promise<jsbind::String>>();
}

ReadableStream Writer::writeStreaming(const jsbind::String& input) {
    return emlite::Val::call("writeStreaming", input).as<ReadableStream>();
}

ReadableStream Writer::writeStreaming(const jsbind::String& input, const WriterWriteOptions& options) {
    return emlite::Val::call("writeStreaming", input, options).as<ReadableStream>();
}

jsbind::String Writer::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::String>();
}

WriterTone Writer::tone() const {
    return emlite::Val::get("tone").as<WriterTone>();
}

WriterFormat Writer::format() const {
    return emlite::Val::get("format").as<WriterFormat>();
}

WriterLength Writer::length() const {
    return emlite::Val::get("length").as<WriterLength>();
}

jsbind::TypedArray<jsbind::String> Writer::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::TypedArray<jsbind::String> Writer::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::String Writer::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::String>();
}

jsbind::Promise<double> Writer::measureInputUsage(const jsbind::String& input) {
    return emlite::Val::call("measureInputUsage", input).as<jsbind::Promise<double>>();
}

jsbind::Promise<double> Writer::measureInputUsage(const jsbind::String& input, const WriterWriteOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise<double>>();
}

double Writer::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined Writer::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}


} // namespace webbind