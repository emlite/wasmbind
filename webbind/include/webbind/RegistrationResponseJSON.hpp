#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AuthenticatorAttestationResponseJSON;
class AuthenticationExtensionsClientOutputsJSON;

/// Dictionary type RegistrationResponseJSON
class RegistrationResponseJSON : public emlite::Val {
  explicit RegistrationResponseJSON(Handle h) noexcept;
public:
    static RegistrationResponseJSON take_ownership(Handle h) noexcept;
    explicit RegistrationResponseJSON(const emlite::Val &val) noexcept;
    RegistrationResponseJSON() noexcept;
    [[nodiscard]] RegistrationResponseJSON clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `rawId` attribute.
    [[nodiscard]] jsbind::Any rawId() const;
    /// Setter of the `rawId` attribute.
    void rawId(const jsbind::Any& value);
    /// Getter of the `response` attribute.
    [[nodiscard]] AuthenticatorAttestationResponseJSON response() const;
    /// Setter of the `response` attribute.
    void response(const AuthenticatorAttestationResponseJSON& value);
    /// Getter of the `authenticatorAttachment` attribute.
    [[nodiscard]] jsbind::String authenticatorAttachment() const;
    /// Setter of the `authenticatorAttachment` attribute.
    void authenticatorAttachment(const jsbind::String& value);
    /// Getter of the `clientExtensionResults` attribute.
    [[nodiscard]] AuthenticationExtensionsClientOutputsJSON clientExtensionResults() const;
    /// Setter of the `clientExtensionResults` attribute.
    void clientExtensionResults(const AuthenticationExtensionsClientOutputsJSON& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
};

} // namespace webbind