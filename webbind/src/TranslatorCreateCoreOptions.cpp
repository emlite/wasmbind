#include "webbind/TranslatorCreateCoreOptions.hpp"

using emlite::Val;
namespace webbind {

TranslatorCreateCoreOptions::TranslatorCreateCoreOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TranslatorCreateCoreOptions TranslatorCreateCoreOptions::take_ownership(Handle h) noexcept {
        return TranslatorCreateCoreOptions(h);
    }
TranslatorCreateCoreOptions::TranslatorCreateCoreOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
TranslatorCreateCoreOptions::TranslatorCreateCoreOptions() noexcept: emlite::Val(emlite::Val::object()) {}
TranslatorCreateCoreOptions TranslatorCreateCoreOptions::clone() const noexcept { return *this; }

jsbind::String TranslatorCreateCoreOptions::sourceLanguage() const {
    return emlite::Val::get("sourceLanguage").as<jsbind::String>();
}

void TranslatorCreateCoreOptions::sourceLanguage(const jsbind::String& value) {
    emlite::Val::set("sourceLanguage", value);
}

jsbind::String TranslatorCreateCoreOptions::targetLanguage() const {
    return emlite::Val::get("targetLanguage").as<jsbind::String>();
}

void TranslatorCreateCoreOptions::targetLanguage(const jsbind::String& value) {
    emlite::Val::set("targetLanguage", value);
}


} // namespace webbind