#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CurrentUserDetailsOptions
class CurrentUserDetailsOptions : public emlite::Val {
  explicit CurrentUserDetailsOptions(Handle h) noexcept;
public:
    static CurrentUserDetailsOptions take_ownership(Handle h) noexcept;
    explicit CurrentUserDetailsOptions(const emlite::Val &val) noexcept;
    CurrentUserDetailsOptions() noexcept;
    [[nodiscard]] CurrentUserDetailsOptions clone() const noexcept;
    /// Getter of the `rpId` attribute.
    [[nodiscard]] jsbind::String rpId() const;
    /// Setter of the `rpId` attribute.
    void rpId(const jsbind::String& value);
    /// Getter of the `userId` attribute.
    [[nodiscard]] jsbind::Any userId() const;
    /// Setter of the `userId` attribute.
    void userId(const jsbind::Any& value);
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