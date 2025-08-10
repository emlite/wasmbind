#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialUserEntityJSON
class PublicKeyCredentialUserEntityJSON : public emlite::Val {
  explicit PublicKeyCredentialUserEntityJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialUserEntityJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialUserEntityJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialUserEntityJSON() noexcept;
    [[nodiscard]] PublicKeyCredentialUserEntityJSON clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::Any id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::Any& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `displayName` attribute.
    [[nodiscard]] jsbind::String displayName() const;
    /// Setter of the `displayName` attribute.
    void displayName(const jsbind::String& value);
};

} // namespace webbind