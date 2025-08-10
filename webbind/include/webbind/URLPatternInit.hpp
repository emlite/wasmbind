#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type URLPatternInit
/// [`URLPatternInit`](https://developer.mozilla.org/en-US/docs/Web/API/URLPatternInit)
class URLPatternInit : public emlite::Val {
  explicit URLPatternInit(Handle h) noexcept;
public:
    static URLPatternInit take_ownership(Handle h) noexcept;
    explicit URLPatternInit(const emlite::Val &val) noexcept;
    URLPatternInit() noexcept;
    [[nodiscard]] URLPatternInit clone() const noexcept;
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    [[nodiscard]] jsbind::String username() const;
    void username(const jsbind::String& value);
    [[nodiscard]] jsbind::String password() const;
    void password(const jsbind::String& value);
    [[nodiscard]] jsbind::String hostname() const;
    void hostname(const jsbind::String& value);
    [[nodiscard]] jsbind::String port() const;
    void port(const jsbind::String& value);
    [[nodiscard]] jsbind::String pathname() const;
    void pathname(const jsbind::String& value);
    [[nodiscard]] jsbind::String search() const;
    void search(const jsbind::String& value);
    [[nodiscard]] jsbind::String hash() const;
    void hash(const jsbind::String& value);
    [[nodiscard]] jsbind::String baseURL() const;
    void baseURL(const jsbind::String& value);
};

} // namespace webbind