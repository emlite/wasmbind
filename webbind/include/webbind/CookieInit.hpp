#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CookieInit
class CookieInit : public emlite::Val {
  explicit CookieInit(Handle h) noexcept;
public:
    static CookieInit take_ownership(Handle h) noexcept;
    explicit CookieInit(const emlite::Val &val) noexcept;
    CookieInit() noexcept;
    [[nodiscard]] CookieInit clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::String& value);
    /// Getter of the `expires` attribute.
    [[nodiscard]] jsbind::Any expires() const;
    /// Setter of the `expires` attribute.
    void expires(const jsbind::Any& value);
    /// Getter of the `domain` attribute.
    [[nodiscard]] jsbind::String domain() const;
    /// Setter of the `domain` attribute.
    void domain(const jsbind::String& value);
    /// Getter of the `path` attribute.
    [[nodiscard]] jsbind::String path() const;
    /// Setter of the `path` attribute.
    void path(const jsbind::String& value);
    /// Getter of the `sameSite` attribute.
    [[nodiscard]] CookieSameSite sameSite() const;
    /// Setter of the `sameSite` attribute.
    void sameSite(const CookieSameSite& value);
    /// Getter of the `partitioned` attribute.
    [[nodiscard]] bool partitioned() const;
    /// Setter of the `partitioned` attribute.
    void partitioned(bool value);
};

} // namespace webbind