#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialEntity.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialUserEntity
class PublicKeyCredentialUserEntity : public PublicKeyCredentialEntity {
  explicit PublicKeyCredentialUserEntity(Handle h) noexcept;
public:
    static PublicKeyCredentialUserEntity take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialUserEntity(const emlite::Val &val) noexcept;
    PublicKeyCredentialUserEntity() noexcept;
    [[nodiscard]] PublicKeyCredentialUserEntity clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::Any id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::Any& value);
    /// Getter of the `displayName` attribute.
    [[nodiscard]] jsbind::String displayName() const;
    /// Setter of the `displayName` attribute.
    void displayName(const jsbind::String& value);
};

} // namespace webbind