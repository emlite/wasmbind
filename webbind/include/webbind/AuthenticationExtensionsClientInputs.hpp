#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsLargeBlobInputs.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsClientInputs
/// [`AuthenticationExtensionsClientInputs`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsClientInputs)
class AuthenticationExtensionsClientInputs : public emlite::Val {
  explicit AuthenticationExtensionsClientInputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientInputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientInputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientInputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientInputs clone() const noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobInputs largeBlob() const;
    void largeBlob(const AuthenticationExtensionsLargeBlobInputs& value);
};

} // namespace webbind