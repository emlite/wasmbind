#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIdentityProviderOptions
/// [`RTCIdentityProviderOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderOptions)
class RTCIdentityProviderOptions : public emlite::Val {
  explicit RTCIdentityProviderOptions(Handle h) noexcept;
public:
    static RTCIdentityProviderOptions take_ownership(Handle h) noexcept;
    explicit RTCIdentityProviderOptions(const emlite::Val &val) noexcept;
    RTCIdentityProviderOptions() noexcept;
    [[nodiscard]] RTCIdentityProviderOptions clone() const noexcept;
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    [[nodiscard]] jsbind::String usernameHint() const;
    void usernameHint(const jsbind::String& value);
    [[nodiscard]] jsbind::String peerIdentity() const;
    void peerIdentity(const jsbind::String& value);
};

} // namespace webbind