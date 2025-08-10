#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityCredentialErrorInit
/// [`IdentityCredentialErrorInit`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialErrorInit)
class IdentityCredentialErrorInit : public emlite::Val {
  explicit IdentityCredentialErrorInit(Handle h) noexcept;
public:
    static IdentityCredentialErrorInit take_ownership(Handle h) noexcept;
    explicit IdentityCredentialErrorInit(const emlite::Val &val) noexcept;
    IdentityCredentialErrorInit() noexcept;
    [[nodiscard]] IdentityCredentialErrorInit clone() const noexcept;
    [[nodiscard]] jsbind::String error() const;
    void error(const jsbind::String& value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
};

} // namespace webbind