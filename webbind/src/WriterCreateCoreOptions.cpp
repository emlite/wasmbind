#include "webbind/WriterCreateCoreOptions.hpp"

using emlite::Val;
namespace webbind {

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

jsbind::TypedArray<jsbind::String> WriterCreateCoreOptions::expectedInputLanguages() const {
    return emlite::Val::get("expectedInputLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

void WriterCreateCoreOptions::expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("expectedInputLanguages", value);
}

jsbind::TypedArray<jsbind::String> WriterCreateCoreOptions::expectedContextLanguages() const {
    return emlite::Val::get("expectedContextLanguages").as<jsbind::TypedArray<jsbind::String>>();
}

void WriterCreateCoreOptions::expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("expectedContextLanguages", value);
}

jsbind::String WriterCreateCoreOptions::outputLanguage() const {
    return emlite::Val::get("outputLanguage").as<jsbind::String>();
}

void WriterCreateCoreOptions::outputLanguage(const jsbind::String& value) {
    emlite::Val::set("outputLanguage", value);
}


} // namespace webbind