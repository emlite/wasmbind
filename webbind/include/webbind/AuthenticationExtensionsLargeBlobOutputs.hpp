#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsLargeBlobOutputs
/// [`AuthenticationExtensionsLargeBlobOutputs`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsLargeBlobOutputs)
class AuthenticationExtensionsLargeBlobOutputs : public emlite::Val {
  explicit AuthenticationExtensionsLargeBlobOutputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsLargeBlobOutputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsLargeBlobOutputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsLargeBlobOutputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobOutputs clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] jsbind::ArrayBuffer blob() const;
    void blob(const jsbind::ArrayBuffer& value);
    [[nodiscard]] bool written() const;
    void written(bool value);
};

} // namespace webbind