#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RTCIdentityProviderDetails;

/// Dictionary type RTCIdentityAssertionResult
class RTCIdentityAssertionResult : public emlite::Val {
  explicit RTCIdentityAssertionResult(Handle h) noexcept;
public:
    static RTCIdentityAssertionResult take_ownership(Handle h) noexcept;
    explicit RTCIdentityAssertionResult(const emlite::Val &val) noexcept;
    RTCIdentityAssertionResult() noexcept;
    [[nodiscard]] RTCIdentityAssertionResult clone() const noexcept;
    /// Getter of the `idp` attribute.
    [[nodiscard]] RTCIdentityProviderDetails idp() const;
    /// Setter of the `idp` attribute.
    void idp(const RTCIdentityProviderDetails& value);
    /// Getter of the `assertion` attribute.
    [[nodiscard]] jsbind::String assertion() const;
    /// Setter of the `assertion` attribute.
    void assertion(const jsbind::String& value);
};

} // namespace webbind