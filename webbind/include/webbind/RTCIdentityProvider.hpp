#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIdentityProvider
/// [`RTCIdentityProvider`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProvider)
class RTCIdentityProvider : public emlite::Val {
  explicit RTCIdentityProvider(Handle h) noexcept;
public:
    static RTCIdentityProvider take_ownership(Handle h) noexcept;
    explicit RTCIdentityProvider(const emlite::Val &val) noexcept;
    RTCIdentityProvider() noexcept;
    [[nodiscard]] RTCIdentityProvider clone() const noexcept;
    [[nodiscard]] jsbind::Function generateAssertion() const;
    void generateAssertion(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function validateAssertion() const;
    void validateAssertion(const jsbind::Function& value);
};

} // namespace webbind