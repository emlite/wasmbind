#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Credential.hpp"

namespace webbind {

class FederatedCredentialInit;

/// Interface FederatedCredential
/// [`FederatedCredential`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential)
class FederatedCredential : public Credential {
    explicit FederatedCredential(Handle h) noexcept;
public:
    explicit FederatedCredential(const emlite::Val &val) noexcept;
    static FederatedCredential take_ownership(Handle h) noexcept;
    [[nodiscard]] FederatedCredential clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FederatedCredential(..)` constructor, creating a new FederatedCredential instance
    FederatedCredential(const FederatedCredentialInit& data);
    /// [`FederatedCredential.provider`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/provider)
    /// [`FederatedCredential.provider`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/provider)
    [[nodiscard]] jsbind::String provider() const;
    /// [`FederatedCredential.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/protocol)
    /// [`FederatedCredential.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// [`FederatedCredential.name`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/name)
    /// [`FederatedCredential.name`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`FederatedCredential.iconURL`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/iconURL)
    /// [`FederatedCredential.iconURL`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/iconURL)
    [[nodiscard]] jsbind::String iconURL() const;
};

} // namespace webbind