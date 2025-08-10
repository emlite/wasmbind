#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticatorAssertionResponseJSON.hpp"
#include "AuthenticationExtensionsClientOutputsJSON.hpp"

namespace webbind {

/// Dictionary type AuthenticationResponseJSON
/// [`AuthenticationResponseJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationResponseJSON)
class AuthenticationResponseJSON : public emlite::Val {
  explicit AuthenticationResponseJSON(Handle h) noexcept;
public:
    static AuthenticationResponseJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationResponseJSON(const emlite::Val &val) noexcept;
    AuthenticationResponseJSON() noexcept;
    [[nodiscard]] AuthenticationResponseJSON clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::Any rawId() const;
    void rawId(const jsbind::Any& value);
    [[nodiscard]] AuthenticatorAssertionResponseJSON response() const;
    void response(const AuthenticatorAssertionResponseJSON& value);
    [[nodiscard]] jsbind::String authenticatorAttachment() const;
    void authenticatorAttachment(const jsbind::String& value);
    [[nodiscard]] AuthenticationExtensionsClientOutputsJSON clientExtensionResults() const;
    void clientExtensionResults(const AuthenticationExtensionsClientOutputsJSON& value);
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
};

} // namespace webbind