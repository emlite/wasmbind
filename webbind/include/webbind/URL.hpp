#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class URL;
class URLSearchParams;

/// Interface URL
/// [`URL`](https://developer.mozilla.org/en-US/docs/Web/API/URL)
class URL : public emlite::Val {
    explicit URL(Handle h) noexcept;
public:
    explicit URL(const emlite::Val &val) noexcept;
    static URL take_ownership(Handle h) noexcept;
    [[nodiscard]] URL clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new URL(..)` constructor, creating a new URL instance
    URL(const jsbind::String& url);
    /// The `new URL(..)` constructor, creating a new URL instance
    URL(const jsbind::String& url, const jsbind::String& base);
    /// The parse method.
    /// [`URL.parse`](https://developer.mozilla.org/en-US/docs/Web/API/URL/parse)
    static URL parse(const jsbind::String& url);
    /// The parse method.
    /// [`URL.parse`](https://developer.mozilla.org/en-US/docs/Web/API/URL/parse)
    static URL parse(const jsbind::String& url, const jsbind::String& base);
    /// The canParse method.
    /// [`URL.canParse`](https://developer.mozilla.org/en-US/docs/Web/API/URL/canParse)
    static bool canParse(const jsbind::String& url);
    /// The canParse method.
    /// [`URL.canParse`](https://developer.mozilla.org/en-US/docs/Web/API/URL/canParse)
    static bool canParse(const jsbind::String& url, const jsbind::String& base);
    /// [`URL.href`](https://developer.mozilla.org/en-US/docs/Web/API/URL/href)
    /// [`URL.href`](https://developer.mozilla.org/en-US/docs/Web/API/URL/href)
    [[nodiscard]] jsbind::String href() const;
    /// Setter of the `href` attribute.
    /// [`URL.href`](https://developer.mozilla.org/en-US/docs/Web/API/URL/href)
    void href(const jsbind::String& value);
    /// [`URL.origin`](https://developer.mozilla.org/en-US/docs/Web/API/URL/origin)
    /// [`URL.origin`](https://developer.mozilla.org/en-US/docs/Web/API/URL/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// [`URL.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/URL/protocol)
    /// [`URL.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/URL/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    /// [`URL.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/URL/protocol)
    void protocol(const jsbind::String& value);
    /// [`URL.username`](https://developer.mozilla.org/en-US/docs/Web/API/URL/username)
    /// [`URL.username`](https://developer.mozilla.org/en-US/docs/Web/API/URL/username)
    [[nodiscard]] jsbind::String username() const;
    /// Setter of the `username` attribute.
    /// [`URL.username`](https://developer.mozilla.org/en-US/docs/Web/API/URL/username)
    void username(const jsbind::String& value);
    /// [`URL.password`](https://developer.mozilla.org/en-US/docs/Web/API/URL/password)
    /// [`URL.password`](https://developer.mozilla.org/en-US/docs/Web/API/URL/password)
    [[nodiscard]] jsbind::String password() const;
    /// Setter of the `password` attribute.
    /// [`URL.password`](https://developer.mozilla.org/en-US/docs/Web/API/URL/password)
    void password(const jsbind::String& value);
    /// [`URL.host`](https://developer.mozilla.org/en-US/docs/Web/API/URL/host)
    /// [`URL.host`](https://developer.mozilla.org/en-US/docs/Web/API/URL/host)
    [[nodiscard]] jsbind::String host() const;
    /// Setter of the `host` attribute.
    /// [`URL.host`](https://developer.mozilla.org/en-US/docs/Web/API/URL/host)
    void host(const jsbind::String& value);
    /// [`URL.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/URL/hostname)
    /// [`URL.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/URL/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// Setter of the `hostname` attribute.
    /// [`URL.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/URL/hostname)
    void hostname(const jsbind::String& value);
    /// [`URL.port`](https://developer.mozilla.org/en-US/docs/Web/API/URL/port)
    /// [`URL.port`](https://developer.mozilla.org/en-US/docs/Web/API/URL/port)
    [[nodiscard]] jsbind::String port() const;
    /// Setter of the `port` attribute.
    /// [`URL.port`](https://developer.mozilla.org/en-US/docs/Web/API/URL/port)
    void port(const jsbind::String& value);
    /// [`URL.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/URL/pathname)
    /// [`URL.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/URL/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// Setter of the `pathname` attribute.
    /// [`URL.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/URL/pathname)
    void pathname(const jsbind::String& value);
    /// [`URL.search`](https://developer.mozilla.org/en-US/docs/Web/API/URL/search)
    /// [`URL.search`](https://developer.mozilla.org/en-US/docs/Web/API/URL/search)
    [[nodiscard]] jsbind::String search() const;
    /// Setter of the `search` attribute.
    /// [`URL.search`](https://developer.mozilla.org/en-US/docs/Web/API/URL/search)
    void search(const jsbind::String& value);
    /// [`URL.searchParams`](https://developer.mozilla.org/en-US/docs/Web/API/URL/searchParams)
    /// [`URL.searchParams`](https://developer.mozilla.org/en-US/docs/Web/API/URL/searchParams)
    [[nodiscard]] URLSearchParams searchParams() const;
    /// [`URL.hash`](https://developer.mozilla.org/en-US/docs/Web/API/URL/hash)
    /// [`URL.hash`](https://developer.mozilla.org/en-US/docs/Web/API/URL/hash)
    [[nodiscard]] jsbind::String hash() const;
    /// Setter of the `hash` attribute.
    /// [`URL.hash`](https://developer.mozilla.org/en-US/docs/Web/API/URL/hash)
    void hash(const jsbind::String& value);
    /// The toJSON method.
    /// [`URL.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/URL/toJSON)
    jsbind::String toJSON();
    /// The createObjectURL method.
    /// [`URL.createObjectURL`](https://developer.mozilla.org/en-US/docs/Web/API/URL/createObjectURL)
    static jsbind::String createObjectURL(const jsbind::Any& obj);
    /// The revokeObjectURL method.
    /// [`URL.revokeObjectURL`](https://developer.mozilla.org/en-US/docs/Web/API/URL/revokeObjectURL)
    static jsbind::Undefined revokeObjectURL(const jsbind::String& url);
};

} // namespace webbind