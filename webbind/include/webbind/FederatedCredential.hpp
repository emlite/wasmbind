#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"


/// The FederatedCredential class.
/// [`FederatedCredential`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential)
class FederatedCredential : public Credential {
    explicit FederatedCredential(Handle h) noexcept;

public:
    explicit FederatedCredential(const emlite::Val &val) noexcept;
    static FederatedCredential take_ownership(Handle h) noexcept;

    [[nodiscard]] FederatedCredential clone() const noexcept;
    /// The `new FederatedCredential(..)` constructor, creating a new FederatedCredential instance
    FederatedCredential(const jsbind::Any& data);
    /// Getter of the `provider` attribute.
    /// [`FederatedCredential.provider`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/provider)
    [[nodiscard]] jsbind::String provider() const;
    /// Getter of the `protocol` attribute.
    /// [`FederatedCredential.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Getter of the `name` attribute.
    /// [`FederatedCredential.name`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `iconURL` attribute.
    /// [`FederatedCredential.iconURL`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential/iconURL)
    [[nodiscard]] jsbind::String iconURL() const;
};

