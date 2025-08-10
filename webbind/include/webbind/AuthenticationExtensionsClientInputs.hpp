#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AuthenticationExtensionsLargeBlobInputs;

/// Dictionary type AuthenticationExtensionsClientInputs
class AuthenticationExtensionsClientInputs : public emlite::Val {
  explicit AuthenticationExtensionsClientInputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientInputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientInputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientInputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientInputs clone() const noexcept;
    /// Getter of the `largeBlob` attribute.
    [[nodiscard]] AuthenticationExtensionsLargeBlobInputs largeBlob() const;
    /// Setter of the `largeBlob` attribute.
    void largeBlob(const AuthenticationExtensionsLargeBlobInputs& value);
};

} // namespace webbind