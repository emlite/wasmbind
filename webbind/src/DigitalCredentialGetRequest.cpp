#include "webbind/DigitalCredentialGetRequest.hpp"

using emlite::Val;
namespace webbind {

DigitalCredentialGetRequest::DigitalCredentialGetRequest(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DigitalCredentialGetRequest DigitalCredentialGetRequest::take_ownership(Handle h) noexcept {
        return DigitalCredentialGetRequest(h);
    }
DigitalCredentialGetRequest::DigitalCredentialGetRequest(const emlite::Val &val) noexcept: emlite::Val(val) {}
DigitalCredentialGetRequest::DigitalCredentialGetRequest() noexcept: emlite::Val(emlite::Val::object()) {}
DigitalCredentialGetRequest DigitalCredentialGetRequest::clone() const noexcept { return *this; }

jsbind::String DigitalCredentialGetRequest::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void DigitalCredentialGetRequest::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

jsbind::Object DigitalCredentialGetRequest::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void DigitalCredentialGetRequest::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind