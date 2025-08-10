#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderClientMetadata
class IdentityProviderClientMetadata : public emlite::Val {
  explicit IdentityProviderClientMetadata(Handle h) noexcept;
public:
    static IdentityProviderClientMetadata take_ownership(Handle h) noexcept;
    explicit IdentityProviderClientMetadata(const emlite::Val &val) noexcept;
    IdentityProviderClientMetadata() noexcept;
    [[nodiscard]] IdentityProviderClientMetadata clone() const noexcept;
    /// Getter of the `privacy_policy_url` attribute.
    [[nodiscard]] jsbind::String privacy_policy_url() const;
    /// Setter of the `privacy_policy_url` attribute.
    void privacy_policy_url(const jsbind::String& value);
    /// Getter of the `terms_of_service_url` attribute.
    [[nodiscard]] jsbind::String terms_of_service_url() const;
    /// Setter of the `terms_of_service_url` attribute.
    void terms_of_service_url(const jsbind::String& value);
};

} // namespace webbind