#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CredentialData.hpp"

namespace webbind {

/// Dictionary type FederatedCredentialInit
class FederatedCredentialInit : public CredentialData {
  explicit FederatedCredentialInit(Handle h) noexcept;
public:
    static FederatedCredentialInit take_ownership(Handle h) noexcept;
    explicit FederatedCredentialInit(const emlite::Val &val) noexcept;
    FederatedCredentialInit() noexcept;
    [[nodiscard]] FederatedCredentialInit clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `iconURL` attribute.
    [[nodiscard]] jsbind::String iconURL() const;
    /// Setter of the `iconURL` attribute.
    void iconURL(const jsbind::String& value);
    /// Getter of the `origin` attribute.
    [[nodiscard]] jsbind::String origin() const;
    /// Setter of the `origin` attribute.
    void origin(const jsbind::String& value);
    /// Getter of the `provider` attribute.
    [[nodiscard]] jsbind::String provider() const;
    /// Setter of the `provider` attribute.
    void provider(const jsbind::String& value);
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
};

} // namespace webbind