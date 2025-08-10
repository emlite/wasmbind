#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialEntity
/// [`PublicKeyCredentialEntity`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialEntity)
class PublicKeyCredentialEntity : public emlite::Val {
  explicit PublicKeyCredentialEntity(Handle h) noexcept;
public:
    static PublicKeyCredentialEntity take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialEntity(const emlite::Val &val) noexcept;
    PublicKeyCredentialEntity() noexcept;
    [[nodiscard]] PublicKeyCredentialEntity clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

} // namespace webbind