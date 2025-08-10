#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsLargeBlobInputsJSON
/// [`AuthenticationExtensionsLargeBlobInputsJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsLargeBlobInputsJSON)
class AuthenticationExtensionsLargeBlobInputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsLargeBlobInputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsLargeBlobInputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsLargeBlobInputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsLargeBlobInputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobInputsJSON clone() const noexcept;
    [[nodiscard]] jsbind::String support() const;
    void support(const jsbind::String& value);
    [[nodiscard]] bool read() const;
    void read(bool value);
    [[nodiscard]] jsbind::Any write() const;
    void write(const jsbind::Any& value);
};

} // namespace webbind