#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsLargeBlobInputsJSON.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsClientInputsJSON
/// [`AuthenticationExtensionsClientInputsJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsClientInputsJSON)
class AuthenticationExtensionsClientInputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsClientInputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientInputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientInputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientInputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientInputsJSON clone() const noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobInputsJSON largeBlob() const;
    void largeBlob(const AuthenticationExtensionsLargeBlobInputsJSON& value);
};

} // namespace webbind