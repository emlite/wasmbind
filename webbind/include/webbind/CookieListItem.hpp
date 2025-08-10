#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CookieListItem
/// [`CookieListItem`](https://developer.mozilla.org/en-US/docs/Web/API/CookieListItem)
class CookieListItem : public emlite::Val {
  explicit CookieListItem(Handle h) noexcept;
public:
    static CookieListItem take_ownership(Handle h) noexcept;
    explicit CookieListItem(const emlite::Val &val) noexcept;
    CookieListItem() noexcept;
    [[nodiscard]] CookieListItem clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String value() const;
    void value(const jsbind::String& value);
    [[nodiscard]] jsbind::String domain() const;
    void domain(const jsbind::String& value);
    [[nodiscard]] jsbind::String path() const;
    void path(const jsbind::String& value);
    [[nodiscard]] jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
    [[nodiscard]] bool secure() const;
    void secure(bool value);
    [[nodiscard]] CookieSameSite sameSite() const;
    void sameSite(const CookieSameSite& value);
    [[nodiscard]] bool partitioned() const;
    void partitioned(bool value);
};

} // namespace webbind