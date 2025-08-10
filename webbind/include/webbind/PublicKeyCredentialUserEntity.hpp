#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialEntity.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialUserEntity
/// [`PublicKeyCredentialUserEntity`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialUserEntity)
class PublicKeyCredentialUserEntity : public PublicKeyCredentialEntity {
  explicit PublicKeyCredentialUserEntity(Handle h) noexcept;
public:
    static PublicKeyCredentialUserEntity take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialUserEntity(const emlite::Val &val) noexcept;
    PublicKeyCredentialUserEntity() noexcept;
    [[nodiscard]] PublicKeyCredentialUserEntity clone() const noexcept;
    [[nodiscard]] jsbind::Any id() const;
    void id(const jsbind::Any& value);
    [[nodiscard]] jsbind::String displayName() const;
    void displayName(const jsbind::String& value);
};

} // namespace webbind