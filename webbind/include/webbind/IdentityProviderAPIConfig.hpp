#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class IdentityProviderBranding;

/// Dictionary type IdentityProviderAPIConfig
class IdentityProviderAPIConfig : public emlite::Val {
  explicit IdentityProviderAPIConfig(Handle h) noexcept;
public:
    static IdentityProviderAPIConfig take_ownership(Handle h) noexcept;
    explicit IdentityProviderAPIConfig(const emlite::Val &val) noexcept;
    IdentityProviderAPIConfig() noexcept;
    [[nodiscard]] IdentityProviderAPIConfig clone() const noexcept;
    /// Getter of the `accounts_endpoint` attribute.
    [[nodiscard]] jsbind::String accounts_endpoint() const;
    /// Setter of the `accounts_endpoint` attribute.
    void accounts_endpoint(const jsbind::String& value);
    /// Getter of the `client_metadata_endpoint` attribute.
    [[nodiscard]] jsbind::String client_metadata_endpoint() const;
    /// Setter of the `client_metadata_endpoint` attribute.
    void client_metadata_endpoint(const jsbind::String& value);
    /// Getter of the `id_assertion_endpoint` attribute.
    [[nodiscard]] jsbind::String id_assertion_endpoint() const;
    /// Setter of the `id_assertion_endpoint` attribute.
    void id_assertion_endpoint(const jsbind::String& value);
    /// Getter of the `login_url` attribute.
    [[nodiscard]] jsbind::String login_url() const;
    /// Setter of the `login_url` attribute.
    void login_url(const jsbind::String& value);
    /// Getter of the `disconnect_endpoint` attribute.
    [[nodiscard]] jsbind::String disconnect_endpoint() const;
    /// Setter of the `disconnect_endpoint` attribute.
    void disconnect_endpoint(const jsbind::String& value);
    /// Getter of the `branding` attribute.
    [[nodiscard]] IdentityProviderBranding branding() const;
    /// Setter of the `branding` attribute.
    void branding(const IdentityProviderBranding& value);
    /// Getter of the `supports_use_other_account` attribute.
    [[nodiscard]] bool supports_use_other_account() const;
    /// Setter of the `supports_use_other_account` attribute.
    void supports_use_other_account(bool value);
    /// Getter of the `account_label` attribute.
    [[nodiscard]] jsbind::String account_label() const;
    /// Setter of the `account_label` attribute.
    void account_label(const jsbind::String& value);
};

} // namespace webbind