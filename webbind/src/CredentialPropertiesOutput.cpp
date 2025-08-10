#include "webbind/CredentialPropertiesOutput.hpp"

using emlite::Val;
namespace webbind {

CredentialPropertiesOutput::CredentialPropertiesOutput(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CredentialPropertiesOutput CredentialPropertiesOutput::take_ownership(Handle h) noexcept {
        return CredentialPropertiesOutput(h);
    }
CredentialPropertiesOutput::CredentialPropertiesOutput(const emlite::Val &val) noexcept: emlite::Val(val) {}
CredentialPropertiesOutput::CredentialPropertiesOutput() noexcept: emlite::Val(emlite::Val::object()) {}
CredentialPropertiesOutput CredentialPropertiesOutput::clone() const noexcept { return *this; }

bool CredentialPropertiesOutput::rk() const {
    return emlite::Val::get("rk").as<bool>();
}

void CredentialPropertiesOutput::rk(bool value) {
    emlite::Val::set("rk", value);
}


} // namespace webbind