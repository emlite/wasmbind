#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PublicKeyCredentialEntity.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialRpEntity
class PublicKeyCredentialRpEntity : public PublicKeyCredentialEntity {
  explicit PublicKeyCredentialRpEntity(Handle h) noexcept;
public:
    static PublicKeyCredentialRpEntity take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialRpEntity(const emlite::Val &val) noexcept;
    PublicKeyCredentialRpEntity() noexcept;
    [[nodiscard]] PublicKeyCredentialRpEntity clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
};

} // namespace webbind