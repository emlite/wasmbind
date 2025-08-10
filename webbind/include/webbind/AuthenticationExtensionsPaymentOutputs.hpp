#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BrowserBoundSignature.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPaymentOutputs
/// [`AuthenticationExtensionsPaymentOutputs`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsPaymentOutputs)
class AuthenticationExtensionsPaymentOutputs : public emlite::Val {
  explicit AuthenticationExtensionsPaymentOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsPaymentOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPaymentOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPaymentOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsPaymentOutputs clone() const noexcept;
    [[nodiscard]] BrowserBoundSignature browserBoundSignature() const;
    void browserBoundSignature(const BrowserBoundSignature& value);
};

} // namespace webbind