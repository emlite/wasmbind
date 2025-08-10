#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsLargeBlobOutputsJSON.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsClientOutputsJSON
class AuthenticationExtensionsClientOutputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsClientOutputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientOutputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientOutputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientOutputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientOutputsJSON clone() const noexcept;
    /// Getter of the `largeBlob` attribute.
    [[nodiscard]] AuthenticationExtensionsLargeBlobOutputsJSON largeBlob() const;
    /// Setter of the `largeBlob` attribute.
    void largeBlob(const AuthenticationExtensionsLargeBlobOutputsJSON& value);
};

} // namespace webbind