#include <webbind/DigitalCredentialCreationOptions.hpp>
#include <webbind/DigitalCredentialCreateRequest.hpp>

namespace webbind {

DigitalCredentialCreationOptions::DigitalCredentialCreationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DigitalCredentialCreationOptions DigitalCredentialCreationOptions::take_ownership(Handle h) noexcept {
    return DigitalCredentialCreationOptions(h);
}

DigitalCredentialCreationOptions::DigitalCredentialCreationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

DigitalCredentialCreationOptions::DigitalCredentialCreationOptions() noexcept: emlite::Val(emlite::Val::object()) {}

DigitalCredentialCreationOptions DigitalCredentialCreationOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<DigitalCredentialCreateRequest> DigitalCredentialCreationOptions::requests() const {
    return emlite::Val::get("requests").as<jsbind::TypedArray<DigitalCredentialCreateRequest>>();
}

void DigitalCredentialCreationOptions::requests(const jsbind::TypedArray<DigitalCredentialCreateRequest>& value) {
    emlite::Val::set("requests", value);
}


} // namespace webbind