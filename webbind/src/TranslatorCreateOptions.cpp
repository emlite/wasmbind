#include "webbind/TranslatorCreateOptions.hpp"
#include "webbind/AbortSignal.hpp"

using emlite::Val;
namespace webbind {

TranslatorCreateOptions::TranslatorCreateOptions(Handle h) noexcept : TranslatorCreateCoreOptions(emlite::Val::take_ownership(h)) {}
TranslatorCreateOptions TranslatorCreateOptions::take_ownership(Handle h) noexcept {
        return TranslatorCreateOptions(h);
    }
TranslatorCreateOptions::TranslatorCreateOptions(const emlite::Val &val) noexcept: TranslatorCreateCoreOptions(val) {}
TranslatorCreateOptions::TranslatorCreateOptions() noexcept: TranslatorCreateCoreOptions(emlite::Val::object()) {}
TranslatorCreateOptions TranslatorCreateOptions::clone() const noexcept { return *this; }

AbortSignal TranslatorCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void TranslatorCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function TranslatorCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void TranslatorCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}


} // namespace webbind