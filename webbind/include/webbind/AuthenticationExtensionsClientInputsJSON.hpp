#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsLargeBlobInputsJSON.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsClientInputsJSON
class AuthenticationExtensionsClientInputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsClientInputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientInputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientInputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientInputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientInputsJSON clone() const noexcept;
    /// Getter of the `largeBlob` attribute.
    [[nodiscard]] AuthenticationExtensionsLargeBlobInputsJSON largeBlob() const;
    /// Setter of the `largeBlob` attribute.
    void largeBlob(const AuthenticationExtensionsLargeBlobInputsJSON& value);
};

} // namespace webbind