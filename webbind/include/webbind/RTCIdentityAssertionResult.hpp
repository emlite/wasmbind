#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCIdentityProviderDetails.hpp"

namespace webbind {

/// Dictionary type RTCIdentityAssertionResult
/// [`RTCIdentityAssertionResult`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityAssertionResult)
class RTCIdentityAssertionResult : public emlite::Val {
  explicit RTCIdentityAssertionResult(Handle h) noexcept;
public:
    static RTCIdentityAssertionResult take_ownership(Handle h) noexcept;
    explicit RTCIdentityAssertionResult(const emlite::Val &val) noexcept;
    RTCIdentityAssertionResult() noexcept;
    [[nodiscard]] RTCIdentityAssertionResult clone() const noexcept;
    [[nodiscard]] RTCIdentityProviderDetails idp() const;
    void idp(const RTCIdentityProviderDetails& value);
    [[nodiscard]] jsbind::String assertion() const;
    void assertion(const jsbind::String& value);
};

} // namespace webbind