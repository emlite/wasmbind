#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityUserInfo
class IdentityUserInfo : public emlite::Val {
  explicit IdentityUserInfo(Handle h) noexcept;
public:
    static IdentityUserInfo take_ownership(Handle h) noexcept;
    explicit IdentityUserInfo(const emlite::Val &val) noexcept;
    IdentityUserInfo() noexcept;
    [[nodiscard]] IdentityUserInfo clone() const noexcept;
    /// Getter of the `email` attribute.
    [[nodiscard]] jsbind::String email() const;
    /// Setter of the `email` attribute.
    void email(const jsbind::String& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `givenName` attribute.
    [[nodiscard]] jsbind::String givenName() const;
    /// Setter of the `givenName` attribute.
    void givenName(const jsbind::String& value);
    /// Getter of the `picture` attribute.
    [[nodiscard]] jsbind::String picture() const;
    /// Setter of the `picture` attribute.
    void picture(const jsbind::String& value);
};

} // namespace webbind