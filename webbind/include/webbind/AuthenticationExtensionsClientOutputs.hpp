#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AuthenticationExtensionsLargeBlobOutputs;

/// Dictionary type AuthenticationExtensionsClientOutputs
class AuthenticationExtensionsClientOutputs : public emlite::Val {
  explicit AuthenticationExtensionsClientOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientOutputs clone() const noexcept;
    /// Getter of the `largeBlob` attribute.
    [[nodiscard]] AuthenticationExtensionsLargeBlobOutputs largeBlob() const;
    /// Setter of the `largeBlob` attribute.
    void largeBlob(const AuthenticationExtensionsLargeBlobOutputs& value);
};

} // namespace webbind