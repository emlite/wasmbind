#include <webbind/Writer.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/AbortSignal.hpp>


WriterCreateOptions::WriterCreateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WriterCreateOptions WriterCreateOptions::take_ownership(Handle h) noexcept {
        return WriterCreateOptions(h);
    }
WriterCreateOptions::WriterCreateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WriterCreateOptions::WriterCreateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WriterCreateOptions WriterCreateOptions::clone() const noexcept { return *this; }

AbortSignal WriterCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void WriterCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function WriterCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void WriterCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}

jsbind::DOMString WriterCreateOptions::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::DOMString>();
}

void WriterCreateOptions::sharedContext(const jsbind::DOMString& value) {
    emlite::Val::set("sharedContext", value);
}

WriterCreateCoreOptions::WriterCreateCoreOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WriterCreateCoreOptions WriterCreateCoreOptions::take_ownership(Handle h) noexcept {
        return WriterCreateCoreOptions(h);
    }
WriterCreateCoreOptions::WriterCreateCoreOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WriterCreateCoreOptions::WriterCreateCoreOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WriterCreateCoreOptions WriterCreateCoreOptions::clone() const noexcept { return *this; }

WriterTone WriterCreateCoreOptions::tone() const {
    return emlite::Val::get("tone").as<WriterTone>();
}

void WriterCreateCoreOptions::tone(const WriterTone& value) {
    emlite::Val::set("tone", value);
}

WriterFormat WriterCreateCoreOptions::format() const {
    return emlite::Val::get("format").as<WriterFormat>();
}

void WriterCreateCoreOptions::format(const WriterFormat& value) {
    emlite::Val::set("format", value);
}

WriterLength WriterCreateCoreOptions::length() const {
    return emlite::Val::get("length").as<WriterLength>();
}

void WriterCreateCoreOptions::length(const WriterLength& value) {
    emlite::Val::set("length", value);
}

jsbind::Sequence<jsbind::DOMString> WriterCreateCoreOptions::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::Sequence<jsbind::DOMString>>();
}

void WriterCreateCoreOptions::expectedInputLanguages(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("expectedInputLanguages", value);
}

jsbind::Sequence<jsbind::DOMString> WriterCreateCoreOptions::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::Sequence<jsbind::DOMString>>();
}

void WriterCreateCoreOptions::expectedContextLanguages(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("expectedContextLanguages", value);
}

jsbind::DOMString WriterCreateCoreOptions::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::DOMString>();
}

void WriterCreateCoreOptions::outputLanguage(const jsbind::DOMString& value) {
    emlite::Val::set("outputLanguage", value);
}

WriterWriteOptions::WriterWriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WriterWriteOptions WriterWriteOptions::take_ownership(Handle h) noexcept {
        return WriterWriteOptions(h);
    }
WriterWriteOptions::WriterWriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WriterWriteOptions::WriterWriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WriterWriteOptions WriterWriteOptions::clone() const noexcept { return *this; }

jsbind::DOMString WriterWriteOptions::context() const {
    return emlite::Val::get("context").as<jsbind::DOMString>();
}

void WriterWriteOptions::context(const jsbind::DOMString& value) {
    emlite::Val::set("context", value);
}

AbortSignal WriterWriteOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void WriterWriteOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

Writer Writer::take_ownership(Handle h) noexcept {
        return Writer(h);
    }
Writer Writer::clone() const noexcept { return *this; }
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

jsbind::Promise<jsbind::DOMString> Writer::write(const jsbind::DOMString& input) {
    return emlite::Val::call("write", input).as<jsbind::Promise<jsbind::DOMString>>();
}

jsbind::Promise<jsbind::DOMString> Writer::write(const jsbind::DOMString& input, const WriterWriteOptions& options) {
    return emlite::Val::call("write", input, options).as<jsbind::Promise<jsbind::DOMString>>();
}

ReadableStream Writer::writeStreaming(const jsbind::DOMString& input) {
    return emlite::Val::call("writeStreaming", input).as<ReadableStream>();
}

ReadableStream Writer::writeStreaming(const jsbind::DOMString& input, const WriterWriteOptions& options) {
    return emlite::Val::call("writeStreaming", input, options).as<ReadableStream>();
}

jsbind::DOMString Writer::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::DOMString>();
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

jsbind::FrozenArray<jsbind::DOMString> Writer::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::FrozenArray<jsbind::DOMString> Writer::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::DOMString Writer::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::DOMString>();
}

jsbind::Promise<double> Writer::measureInputUsage(const jsbind::DOMString& input) {
    return emlite::Val::call("measureInputUsage", input).as<jsbind::Promise<double>>();
}

jsbind::Promise<double> Writer::measureInputUsage(const jsbind::DOMString& input, const WriterWriteOptions& options) {
    return emlite::Val::call("measureInputUsage", input, options).as<jsbind::Promise<double>>();
}

double Writer::inputQuota() const {
    return emlite::Val::get("inputQuota").as<double>();
}

jsbind::Undefined Writer::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

