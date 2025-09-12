#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CookieListItem
class CookieListItem : public emlite::Val {
  explicit CookieListItem(Handle h) noexcept;
public:
    static CookieListItem take_ownership(Handle h) noexcept;
    explicit CookieListItem(const emlite::Val &val) noexcept;
    CookieListItem() noexcept;
    [[nodiscard]] CookieListItem clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::String& value);
};

} // namespace webbind