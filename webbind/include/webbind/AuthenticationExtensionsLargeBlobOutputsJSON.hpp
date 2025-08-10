#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsLargeBlobOutputsJSON
class AuthenticationExtensionsLargeBlobOutputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsLargeBlobOutputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsLargeBlobOutputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsLargeBlobOutputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsLargeBlobOutputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobOutputsJSON clone() const noexcept;
    /// Getter of the `supported` attribute.
    [[nodiscard]] bool supported() const;
    /// Setter of the `supported` attribute.
    void supported(bool value);
    /// Getter of the `blob` attribute.
    [[nodiscard]] jsbind::Any blob() const;
    /// Setter of the `blob` attribute.
    void blob(const jsbind::Any& value);
    /// Getter of the `written` attribute.
    [[nodiscard]] bool written() const;
    /// Setter of the `written` attribute.
    void written(bool value);
};

} // namespace webbind