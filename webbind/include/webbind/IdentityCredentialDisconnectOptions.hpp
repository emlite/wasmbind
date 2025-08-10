#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityProviderConfig.hpp"

namespace webbind {

/// Dictionary type IdentityCredentialDisconnectOptions
class IdentityCredentialDisconnectOptions : public IdentityProviderConfig {
  explicit IdentityCredentialDisconnectOptions(Handle h) noexcept;
public:
    static IdentityCredentialDisconnectOptions take_ownership(Handle h) noexcept;
    explicit IdentityCredentialDisconnectOptions(const emlite::Val &val) noexcept;
    IdentityCredentialDisconnectOptions() noexcept;
    [[nodiscard]] IdentityCredentialDisconnectOptions clone() const noexcept;
    /// Getter of the `accountHint` attribute.
    [[nodiscard]] jsbind::String accountHint() const;
    /// Setter of the `accountHint` attribute.
    void accountHint(const jsbind::String& value);
};

} // namespace webbind