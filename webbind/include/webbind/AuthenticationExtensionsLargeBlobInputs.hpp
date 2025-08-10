#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsLargeBlobInputs
class AuthenticationExtensionsLargeBlobInputs : public emlite::Val {
  explicit AuthenticationExtensionsLargeBlobInputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsLargeBlobInputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsLargeBlobInputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsLargeBlobInputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobInputs clone() const noexcept;
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