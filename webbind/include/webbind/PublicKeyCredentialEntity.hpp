#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialEntity
class PublicKeyCredentialEntity : public emlite::Val {
  explicit PublicKeyCredentialEntity(Handle h) noexcept;
public:
    static PublicKeyCredentialEntity take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialEntity(const emlite::Val &val) noexcept;
    PublicKeyCredentialEntity() noexcept;
    [[nodiscard]] PublicKeyCredentialEntity clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
};

} // namespace webbind