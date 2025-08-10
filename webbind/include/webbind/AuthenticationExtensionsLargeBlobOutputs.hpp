#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsLargeBlobOutputs
class AuthenticationExtensionsLargeBlobOutputs : public emlite::Val {
  explicit AuthenticationExtensionsLargeBlobOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsLargeBlobOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsLargeBlobOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsLargeBlobOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobOutputs clone() const noexcept;
    /// Getter of the `supported` attribute.
    [[nodiscard]] bool supported() const;
    /// Setter of the `supported` attribute.
    void supported(bool value);
    /// Getter of the `blob` attribute.
    [[nodiscard]] jsbind::ArrayBuffer blob() const;
    /// Setter of the `blob` attribute.
    void blob(const jsbind::ArrayBuffer& value);
    /// Getter of the `written` attribute.
    [[nodiscard]] bool written() const;
    /// Setter of the `written` attribute.
    void written(bool value);
};

} // namespace webbind