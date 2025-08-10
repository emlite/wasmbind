#include <webbind/PermissionSetParameters.hpp>

using emlite::Val;
namespace webbind {

PermissionSetParameters::PermissionSetParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PermissionSetParameters PermissionSetParameters::take_ownership(Handle h) noexcept {
        return PermissionSetParameters(h);
    }
PermissionSetParameters::PermissionSetParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
PermissionSetParameters::PermissionSetParameters() noexcept: emlite::Val(emlite::Val::object()) {}
PermissionSetParameters PermissionSetParameters::clone() const noexcept { return *this; }

jsbind::Object PermissionSetParameters::descriptor() const {
    return emlite::Val::get("descriptor").as<jsbind::Object>();
}

void PermissionSetParameters::descriptor(const jsbind::Object& value) {
    emlite::Val::set("descriptor", value);
}

PermissionState PermissionSetParameters::state() const {
    return emlite::Val::get("state").as<PermissionState>();
}

void PermissionSetParameters::state(const PermissionState& value) {
    emlite::Val::set("state", value);
}


} // namespace webbind