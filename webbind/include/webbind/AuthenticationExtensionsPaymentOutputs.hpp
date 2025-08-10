#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BrowserBoundSignature.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPaymentOutputs
class AuthenticationExtensionsPaymentOutputs : public emlite::Val {
  explicit AuthenticationExtensionsPaymentOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsPaymentOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPaymentOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPaymentOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsPaymentOutputs clone() const noexcept;
    /// Getter of the `browserBoundSignature` attribute.
    [[nodiscard]] BrowserBoundSignature browserBoundSignature() const;
    /// Setter of the `browserBoundSignature` attribute.
    void browserBoundSignature(const BrowserBoundSignature& value);
};

} // namespace webbind