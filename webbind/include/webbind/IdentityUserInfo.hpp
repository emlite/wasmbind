#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityUserInfo
/// [`IdentityUserInfo`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityUserInfo)
class IdentityUserInfo : public emlite::Val {
  explicit IdentityUserInfo(Handle h) noexcept;
public:
    static IdentityUserInfo take_ownership(Handle h) noexcept;
    explicit IdentityUserInfo(const emlite::Val &val) noexcept;
    IdentityUserInfo() noexcept;
    [[nodiscard]] IdentityUserInfo clone() const noexcept;
    [[nodiscard]] jsbind::String email() const;
    void email(const jsbind::String& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String givenName() const;
    void givenName(const jsbind::String& value);
    [[nodiscard]] jsbind::String picture() const;
    void picture(const jsbind::String& value);
};

} // namespace webbind