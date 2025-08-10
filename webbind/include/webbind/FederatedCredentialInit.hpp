#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CredentialData.hpp"

namespace webbind {

/// Dictionary type FederatedCredentialInit
/// [`FederatedCredentialInit`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredentialInit)
class FederatedCredentialInit : public CredentialData {
  explicit FederatedCredentialInit(Handle h) noexcept;
public:
    static FederatedCredentialInit take_ownership(Handle h) noexcept;
    explicit FederatedCredentialInit(const emlite::Val &val) noexcept;
    FederatedCredentialInit() noexcept;
    [[nodiscard]] FederatedCredentialInit clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String iconURL() const;
    void iconURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String origin() const;
    void origin(const jsbind::String& value);
    [[nodiscard]] jsbind::String provider() const;
    void provider(const jsbind::String& value);
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
};

} // namespace webbind