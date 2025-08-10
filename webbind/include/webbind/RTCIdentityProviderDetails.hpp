#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIdentityProviderDetails
/// [`RTCIdentityProviderDetails`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderDetails)
class RTCIdentityProviderDetails : public emlite::Val {
  explicit RTCIdentityProviderDetails(Handle h) noexcept;
public:
    static RTCIdentityProviderDetails take_ownership(Handle h) noexcept;
    explicit RTCIdentityProviderDetails(const emlite::Val &val) noexcept;
    RTCIdentityProviderDetails() noexcept;
    [[nodiscard]] RTCIdentityProviderDetails clone() const noexcept;
    [[nodiscard]] jsbind::String domain() const;
    void domain(const jsbind::String& value);
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
};

} // namespace webbind