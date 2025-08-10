#include "webbind/DigitalCredentialRequestOptions.hpp"
#include "webbind/DigitalCredentialGetRequest.hpp"

using emlite::Val;
namespace webbind {

DigitalCredentialRequestOptions::DigitalCredentialRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DigitalCredentialRequestOptions DigitalCredentialRequestOptions::take_ownership(Handle h) noexcept {
        return DigitalCredentialRequestOptions(h);
    }
DigitalCredentialRequestOptions::DigitalCredentialRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
DigitalCredentialRequestOptions::DigitalCredentialRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
DigitalCredentialRequestOptions DigitalCredentialRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<DigitalCredentialGetRequest> DigitalCredentialRequestOptions::requests() const {
    return emlite::Val::get("requests").as<jsbind::TypedArray<DigitalCredentialGetRequest>>();
}

void DigitalCredentialRequestOptions::requests(const jsbind::TypedArray<DigitalCredentialGetRequest>& value) {
    emlite::Val::set("requests", value);
}


} // namespace webbind