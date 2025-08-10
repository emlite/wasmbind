#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderClientMetadata
/// [`IdentityProviderClientMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProviderClientMetadata)
class IdentityProviderClientMetadata : public emlite::Val {
  explicit IdentityProviderClientMetadata(Handle h) noexcept;
public:
    static IdentityProviderClientMetadata take_ownership(Handle h) noexcept;
    explicit IdentityProviderClientMetadata(const emlite::Val &val) noexcept;
    IdentityProviderClientMetadata() noexcept;
    [[nodiscard]] IdentityProviderClientMetadata clone() const noexcept;
    [[nodiscard]] jsbind::String privacy_policy_url() const;
    void privacy_policy_url(const jsbind::String& value);
    [[nodiscard]] jsbind::String terms_of_service_url() const;
    void terms_of_service_url(const jsbind::String& value);
};

} // namespace webbind