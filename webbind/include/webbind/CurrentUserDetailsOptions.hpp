#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CurrentUserDetailsOptions
/// [`CurrentUserDetailsOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CurrentUserDetailsOptions)
class CurrentUserDetailsOptions : public emlite::Val {
  explicit CurrentUserDetailsOptions(Handle h) noexcept;
public:
    static CurrentUserDetailsOptions take_ownership(Handle h) noexcept;
    explicit CurrentUserDetailsOptions(const emlite::Val &val) noexcept;
    CurrentUserDetailsOptions() noexcept;
    [[nodiscard]] CurrentUserDetailsOptions clone() const noexcept;
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::Any userId() const;
    void userId(const jsbind::Any& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String displayName() const;
    void displayName(const jsbind::String& value);
};

} // namespace webbind