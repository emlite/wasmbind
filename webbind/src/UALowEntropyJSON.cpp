#include <webbind/UALowEntropyJSON.hpp>
#include <webbind/NavigatorUABrandVersion.hpp>

using emlite::Val;
namespace webbind {

UALowEntropyJSON::UALowEntropyJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
UALowEntropyJSON UALowEntropyJSON::take_ownership(Handle h) noexcept {
        return UALowEntropyJSON(h);
    }
UALowEntropyJSON::UALowEntropyJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
UALowEntropyJSON::UALowEntropyJSON() noexcept: emlite::Val(emlite::Val::object()) {}
UALowEntropyJSON UALowEntropyJSON::clone() const noexcept { return *this; }

jsbind::TypedArray<NavigatorUABrandVersion> UALowEntropyJSON::brands() const {
    return emlite::Val::get("brands").as<jsbind::TypedArray<NavigatorUABrandVersion>>();
}

void UALowEntropyJSON::brands(const jsbind::TypedArray<NavigatorUABrandVersion>& value) {
    emlite::Val::set("brands", value);
}

bool UALowEntropyJSON::mobile() const {
    return emlite::Val::get("mobile").as<bool>();
}

void UALowEntropyJSON::mobile(bool value) {
    emlite::Val::set("mobile", value);
}

jsbind::String UALowEntropyJSON::platform() const {
    return emlite::Val::get("platform").as<jsbind::String>();
}

void UALowEntropyJSON::platform(const jsbind::String& value) {
    emlite::Val::set("platform", value);
}


} // namespace webbind