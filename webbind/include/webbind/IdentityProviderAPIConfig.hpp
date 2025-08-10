#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityProviderBranding.hpp"

namespace webbind {

/// Dictionary type IdentityProviderAPIConfig
/// [`IdentityProviderAPIConfig`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProviderAPIConfig)
class IdentityProviderAPIConfig : public emlite::Val {
  explicit IdentityProviderAPIConfig(Handle h) noexcept;
public:
    static IdentityProviderAPIConfig take_ownership(Handle h) noexcept;
    explicit IdentityProviderAPIConfig(const emlite::Val &val) noexcept;
    IdentityProviderAPIConfig() noexcept;
    [[nodiscard]] IdentityProviderAPIConfig clone() const noexcept;
    [[nodiscard]] jsbind::String accounts_endpoint() const;
    void accounts_endpoint(const jsbind::String& value);
    [[nodiscard]] jsbind::String client_metadata_endpoint() const;
    void client_metadata_endpoint(const jsbind::String& value);
    [[nodiscard]] jsbind::String id_assertion_endpoint() const;
    void id_assertion_endpoint(const jsbind::String& value);
    [[nodiscard]] jsbind::String login_url() const;
    void login_url(const jsbind::String& value);
    [[nodiscard]] jsbind::String disconnect_endpoint() const;
    void disconnect_endpoint(const jsbind::String& value);
    [[nodiscard]] IdentityProviderBranding branding() const;
    void branding(const IdentityProviderBranding& value);
    [[nodiscard]] bool supports_use_other_account() const;
    void supports_use_other_account(bool value);
    [[nodiscard]] jsbind::String account_label() const;
    void account_label(const jsbind::String& value);
};

} // namespace webbind