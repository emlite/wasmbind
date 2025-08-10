#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIdentityProviderDetails
class RTCIdentityProviderDetails : public emlite::Val {
  explicit RTCIdentityProviderDetails(Handle h) noexcept;
public:
    static RTCIdentityProviderDetails take_ownership(Handle h) noexcept;
    explicit RTCIdentityProviderDetails(const emlite::Val &val) noexcept;
    RTCIdentityProviderDetails() noexcept;
    [[nodiscard]] RTCIdentityProviderDetails clone() const noexcept;
    /// Getter of the `domain` attribute.
    [[nodiscard]] jsbind::String domain() const;
    /// Setter of the `domain` attribute.
    void domain(const jsbind::String& value);
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
};

} // namespace webbind