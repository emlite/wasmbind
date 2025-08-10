#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticatorAttestationResponseJSON.hpp"
#include "AuthenticationExtensionsClientOutputsJSON.hpp"

namespace webbind {

/// Dictionary type RegistrationResponseJSON
/// [`RegistrationResponseJSON`](https://developer.mozilla.org/en-US/docs/Web/API/RegistrationResponseJSON)
class RegistrationResponseJSON : public emlite::Val {
  explicit RegistrationResponseJSON(Handle h) noexcept;
public:
    static RegistrationResponseJSON take_ownership(Handle h) noexcept;
    explicit RegistrationResponseJSON(const emlite::Val &val) noexcept;
    RegistrationResponseJSON() noexcept;
    [[nodiscard]] RegistrationResponseJSON clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::Any rawId() const;
    void rawId(const jsbind::Any& value);
    [[nodiscard]] AuthenticatorAttestationResponseJSON response() const;
    void response(const AuthenticatorAttestationResponseJSON& value);
    [[nodiscard]] jsbind::String authenticatorAttachment() const;
    void authenticatorAttachment(const jsbind::String& value);
    [[nodiscard]] AuthenticationExtensionsClientOutputsJSON clientExtensionResults() const;
    void clientExtensionResults(const AuthenticationExtensionsClientOutputsJSON& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
};

} // namespace webbind