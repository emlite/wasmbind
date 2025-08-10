#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityCredentialErrorInit
class IdentityCredentialErrorInit : public emlite::Val {
  explicit IdentityCredentialErrorInit(Handle h) noexcept;
public:
    static IdentityCredentialErrorInit take_ownership(Handle h) noexcept;
    explicit IdentityCredentialErrorInit(const emlite::Val &val) noexcept;
    IdentityCredentialErrorInit() noexcept;
    [[nodiscard]] IdentityCredentialErrorInit clone() const noexcept;
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::String error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::String& value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
};

} // namespace webbind