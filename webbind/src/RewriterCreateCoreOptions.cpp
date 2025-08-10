#include <webbind/RewriterCreateCoreOptions.hpp>

using emlite::Val;
namespace webbind {

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


} // namespace webbind