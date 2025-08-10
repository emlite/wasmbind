#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AuthenticationExtensionsLargeBlobOutputsJSON.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsClientOutputsJSON
/// [`AuthenticationExtensionsClientOutputsJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsClientOutputsJSON)
class AuthenticationExtensionsClientOutputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsClientOutputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsClientOutputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsClientOutputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsClientOutputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsClientOutputsJSON clone() const noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobOutputsJSON largeBlob() const;
    void largeBlob(const AuthenticationExtensionsLargeBlobOutputsJSON& value);
};

} // namespace webbind