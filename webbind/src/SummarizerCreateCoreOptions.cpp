#include <webbind/SummarizerCreateCoreOptions.hpp>

namespace webbind {

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


} // namespace webbind