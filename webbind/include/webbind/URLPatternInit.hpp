#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type URLPatternInit
class URLPatternInit : public emlite::Val {
  explicit URLPatternInit(Handle h) noexcept;
public:
    static URLPatternInit take_ownership(Handle h) noexcept;
    explicit URLPatternInit(const emlite::Val &val) noexcept;
    URLPatternInit() noexcept;
    [[nodiscard]] URLPatternInit clone() const noexcept;
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
    /// Getter of the `username` attribute.
    [[nodiscard]] jsbind::String username() const;
    /// Setter of the `username` attribute.
    void username(const jsbind::String& value);
    /// Getter of the `password` attribute.
    [[nodiscard]] jsbind::String password() const;
    /// Setter of the `password` attribute.
    void password(const jsbind::String& value);
    /// Getter of the `hostname` attribute.
    [[nodiscard]] jsbind::String hostname() const;
    /// Setter of the `hostname` attribute.
    void hostname(const jsbind::String& value);
    /// Getter of the `port` attribute.
    [[nodiscard]] jsbind::String port() const;
    /// Setter of the `port` attribute.
    void port(const jsbind::String& value);
    /// Getter of the `pathname` attribute.
    [[nodiscard]] jsbind::String pathname() const;
    /// Setter of the `pathname` attribute.
    void pathname(const jsbind::String& value);
    /// Getter of the `search` attribute.
    [[nodiscard]] jsbind::String search() const;
    /// Setter of the `search` attribute.
    void search(const jsbind::String& value);
    /// Getter of the `hash` attribute.
    [[nodiscard]] jsbind::String hash() const;
    /// Setter of the `hash` attribute.
    void hash(const jsbind::String& value);
    /// Getter of the `baseURL` attribute.
    [[nodiscard]] jsbind::String baseURL() const;
    /// Setter of the `baseURL` attribute.
    void baseURL(const jsbind::String& value);
};

} // namespace webbind