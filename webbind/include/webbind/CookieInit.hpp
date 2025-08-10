#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CookieInit
/// [`CookieInit`](https://developer.mozilla.org/en-US/docs/Web/API/CookieInit)
class CookieInit : public emlite::Val {
  explicit CookieInit(Handle h) noexcept;
public:
    static CookieInit take_ownership(Handle h) noexcept;
    explicit CookieInit(const emlite::Val &val) noexcept;
    CookieInit() noexcept;
    [[nodiscard]] CookieInit clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String value() const;
    void value(const jsbind::String& value);
    [[nodiscard]] jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
    [[nodiscard]] jsbind::String domain() const;
    void domain(const jsbind::String& value);
    [[nodiscard]] jsbind::String path() const;
    void path(const jsbind::String& value);
    [[nodiscard]] CookieSameSite sameSite() const;
    void sameSite(const CookieSameSite& value);
    [[nodiscard]] bool partitioned() const;
    void partitioned(bool value);
};

} // namespace webbind