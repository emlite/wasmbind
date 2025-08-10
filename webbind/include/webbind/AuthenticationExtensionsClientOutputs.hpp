#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsLargeBlobOutputs.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsClientOutputs
/// [`AuthenticationExtensionsClientOutputs`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsClientOutputs)
class AuthenticationExtensionsClientOutputs : public emlite::Val {
  explicit AuthenticationExtensionsClientOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientOutputs clone() const noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobOutputs largeBlob() const;
    void largeBlob(const AuthenticationExtensionsLargeBlobOutputs& value);
};

} // namespace webbind