#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIdentityProvider
class RTCIdentityProvider : public emlite::Val {
  explicit RTCIdentityProvider(Handle h) noexcept;
public:
    static RTCIdentityProvider take_ownership(Handle h) noexcept;
    explicit RTCIdentityProvider(const emlite::Val &val) noexcept;
    RTCIdentityProvider() noexcept;
    [[nodiscard]] RTCIdentityProvider clone() const noexcept;
    /// Getter of the `generateAssertion` attribute.
    [[nodiscard]] jsbind::Function generateAssertion() const;
    /// Setter of the `generateAssertion` attribute.
    void generateAssertion(const jsbind::Function& value);
    /// Getter of the `validateAssertion` attribute.
    [[nodiscard]] jsbind::Function validateAssertion() const;
    /// Setter of the `validateAssertion` attribute.
    void validateAssertion(const jsbind::Function& value);
};

} // namespace webbind