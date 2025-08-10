#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsLargeBlobInputsJSON
class AuthenticationExtensionsLargeBlobInputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsLargeBlobInputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsLargeBlobInputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsLargeBlobInputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsLargeBlobInputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobInputsJSON clone() const noexcept;
    /// Getter of the `support` attribute.
    [[nodiscard]] jsbind::String support() const;
    /// Setter of the `support` attribute.
    void support(const jsbind::String& value);
    /// Getter of the `read` attribute.
    [[nodiscard]] bool read() const;
    /// Setter of the `read` attribute.
    void read(bool value);
    /// Getter of the `write` attribute.
    [[nodiscard]] jsbind::Any write() const;
    /// Setter of the `write` attribute.
    void write(const jsbind::Any& value);
};

} // namespace webbind