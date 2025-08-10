#include <webbind/DigitalCredentialCreateRequest.hpp>

using emlite::Val;
namespace webbind {

DigitalCredentialCreateRequest::DigitalCredentialCreateRequest(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DigitalCredentialCreateRequest DigitalCredentialCreateRequest::take_ownership(Handle h) noexcept {
        return DigitalCredentialCreateRequest(h);
    }
DigitalCredentialCreateRequest::DigitalCredentialCreateRequest(const emlite::Val &val) noexcept: emlite::Val(val) {}
DigitalCredentialCreateRequest::DigitalCredentialCreateRequest() noexcept: emlite::Val(emlite::Val::object()) {}
DigitalCredentialCreateRequest DigitalCredentialCreateRequest::clone() const noexcept { return *this; }

jsbind::String DigitalCredentialCreateRequest::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void DigitalCredentialCreateRequest::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

jsbind::Object DigitalCredentialCreateRequest::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void DigitalCredentialCreateRequest::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind