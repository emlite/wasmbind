#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIdentityProviderOptions
class RTCIdentityProviderOptions : public emlite::Val {
  explicit RTCIdentityProviderOptions(Handle h) noexcept;
public:
    static RTCIdentityProviderOptions take_ownership(Handle h) noexcept;
    explicit RTCIdentityProviderOptions(const emlite::Val &val) noexcept;
    RTCIdentityProviderOptions() noexcept;
    [[nodiscard]] RTCIdentityProviderOptions clone() const noexcept;
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
    /// Getter of the `usernameHint` attribute.
    [[nodiscard]] jsbind::String usernameHint() const;
    /// Setter of the `usernameHint` attribute.
    void usernameHint(const jsbind::String& value);
    /// Getter of the `peerIdentity` attribute.
    [[nodiscard]] jsbind::String peerIdentity() const;
    /// Setter of the `peerIdentity` attribute.
    void peerIdentity(const jsbind::String& value);
};

} // namespace webbind