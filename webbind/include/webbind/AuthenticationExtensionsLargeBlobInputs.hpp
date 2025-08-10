#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsLargeBlobInputs
/// [`AuthenticationExtensionsLargeBlobInputs`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsLargeBlobInputs)
class AuthenticationExtensionsLargeBlobInputs : public emlite::Val {
  explicit AuthenticationExtensionsLargeBlobInputs(Handle h) noexcept;
public:
    static AuthenticationExtensionsLargeBlobInputs take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsLargeBlobInputs(const emlite::Val &val) noexcept;
    AuthenticationExtensionsLargeBlobInputs() noexcept;
    [[nodiscard]] AuthenticationExtensionsLargeBlobInputs clone() const noexcept;
    [[nodiscard]] jsbind::String support() const;
    void support(const jsbind::String& value);
    [[nodiscard]] bool read() const;
    void read(bool value);
    [[nodiscard]] jsbind::Any write() const;
    void write(const jsbind::Any& value);
};

} // namespace webbind