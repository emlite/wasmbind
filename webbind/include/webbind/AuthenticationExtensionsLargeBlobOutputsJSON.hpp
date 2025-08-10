#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsLargeBlobOutputsJSON
/// [`AuthenticationExtensionsLargeBlobOutputsJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsLargeBlobOutputsJSON)
class AuthenticationExtensionsLargeBlobOutputsJSON : public emlite::Val {
  explicit AuthenticationExtensionsLargeBlobOutputsJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsLargeBlobOutputsJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsLargeBlobOutputsJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsLargeBlobOutputsJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobOutputsJSON clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] jsbind::Any blob() const;
    void blob(const jsbind::Any& value);
    [[nodiscard]] bool written() const;
    void written(bool value);
};

} // namespace webbind