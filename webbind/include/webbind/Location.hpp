#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMStringList;

/// Interface Location
/// [`Location`](https://developer.mozilla.org/en-US/docs/Web/API/Location)
class Location : public emlite::Val {
    explicit Location(Handle h) noexcept;
public:
    explicit Location(const emlite::Val &val) noexcept;
    static Location take_ownership(Handle h) noexcept;
    [[nodiscard]] Location clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Location.href`](https://developer.mozilla.org/en-US/docs/Web/API/Location/href)
    /// [`Location.href`](https://developer.mozilla.org/en-US/docs/Web/API/Location/href)
    [[nodiscard]] jsbind::String href() const;
    /// Setter of the `href` attribute.
    /// [`Location.href`](https://developer.mozilla.org/en-US/docs/Web/API/Location/href)
    void href(const jsbind::String& value);
    /// [`Location.origin`](https://developer.mozilla.org/en-US/docs/Web/API/Location/origin)
    /// [`Location.origin`](https://developer.mozilla.org/en-US/docs/Web/API/Location/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// [`Location.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/Location/protocol)
    /// [`Location.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/Location/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    /// [`Location.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/Location/protocol)
    void protocol(const jsbind::String& value);
    /// [`Location.host`](https://developer.mozilla.org/en-US/docs/Web/API/Location/host)
    /// [`Location.host`](https://developer.mozilla.org/en-US/docs/Web/API/Location/host)
    [[nodiscard]] jsbind::String host() const;
    /// Setter of the `host` attribute.
    /// [`Location.host`](https://developer.mozilla.org/en-US/docs/Web/API/Location/host)
    void host(const jsbind::String& value);
    /// [`Location.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/Location/hostname)
    /// [`Location.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/Location/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// Setter of the `hostname` attribute.
    /// [`Location.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/Location/hostname)
    void hostname(const jsbind::String& value);
    /// [`Location.port`](https://developer.mozilla.org/en-US/docs/Web/API/Location/port)
    /// [`Location.port`](https://developer.mozilla.org/en-US/docs/Web/API/Location/port)
    [[nodiscard]] jsbind::String port() const;
    /// Setter of the `port` attribute.
    /// [`Location.port`](https://developer.mozilla.org/en-US/docs/Web/API/Location/port)
    void port(const jsbind::String& value);
    /// [`Location.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/Location/pathname)
    /// [`Location.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/Location/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// Setter of the `pathname` attribute.
    /// [`Location.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/Location/pathname)
    void pathname(const jsbind::String& value);
    /// [`Location.search`](https://developer.mozilla.org/en-US/docs/Web/API/Location/search)
    /// [`Location.search`](https://developer.mozilla.org/en-US/docs/Web/API/Location/search)
    [[nodiscard]] jsbind::String search() const;
    /// Setter of the `search` attribute.
    /// [`Location.search`](https://developer.mozilla.org/en-US/docs/Web/API/Location/search)
    void search(const jsbind::String& value);
    /// [`Location.hash`](https://developer.mozilla.org/en-US/docs/Web/API/Location/hash)
    /// [`Location.hash`](https://developer.mozilla.org/en-US/docs/Web/API/Location/hash)
    [[nodiscard]] jsbind::String hash() const;
    /// Setter of the `hash` attribute.
    /// [`Location.hash`](https://developer.mozilla.org/en-US/docs/Web/API/Location/hash)
    void hash(const jsbind::String& value);
    /// The assign method.
    /// [`Location.assign`](https://developer.mozilla.org/en-US/docs/Web/API/Location/assign)
    jsbind::Undefined assign(const jsbind::String& url);
    /// The replace method.
    /// [`Location.replace`](https://developer.mozilla.org/en-US/docs/Web/API/Location/replace)
    jsbind::Undefined replace(const jsbind::String& url);
    /// The reload method.
    /// [`Location.reload`](https://developer.mozilla.org/en-US/docs/Web/API/Location/reload)
    jsbind::Undefined reload();
    /// [`Location.ancestorOrigins`](https://developer.mozilla.org/en-US/docs/Web/API/Location/ancestorOrigins)
    /// [`Location.ancestorOrigins`](https://developer.mozilla.org/en-US/docs/Web/API/Location/ancestorOrigins)
    [[nodiscard]] DOMStringList ancestorOrigins() const;
};

} // namespace webbind