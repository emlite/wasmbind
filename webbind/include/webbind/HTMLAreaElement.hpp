#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;


/// The HTMLAreaElement class.
/// [`HTMLAreaElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement)
class HTMLAreaElement : public HTMLElement {
    explicit HTMLAreaElement(Handle h) noexcept;

public:
    explicit HTMLAreaElement(const emlite::Val &val) noexcept;
    static HTMLAreaElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLAreaElement clone() const noexcept;
    /// The `new HTMLAreaElement(..)` constructor, creating a new HTMLAreaElement instance
    HTMLAreaElement();
    /// Getter of the `alt` attribute.
    /// [`HTMLAreaElement.alt`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/alt)
    [[nodiscard]] jsbind::String alt() const;
    /// Setter of the `alt` attribute.
    /// [`HTMLAreaElement.alt`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/alt)
    void alt(const jsbind::String& value);
    /// Getter of the `coords` attribute.
    /// [`HTMLAreaElement.coords`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/coords)
    [[nodiscard]] jsbind::String coords() const;
    /// Setter of the `coords` attribute.
    /// [`HTMLAreaElement.coords`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/coords)
    void coords(const jsbind::String& value);
    /// Getter of the `shape` attribute.
    /// [`HTMLAreaElement.shape`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/shape)
    [[nodiscard]] jsbind::String shape() const;
    /// Setter of the `shape` attribute.
    /// [`HTMLAreaElement.shape`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/shape)
    void shape(const jsbind::String& value);
    /// Getter of the `target` attribute.
    /// [`HTMLAreaElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/target)
    [[nodiscard]] jsbind::String target() const;
    /// Setter of the `target` attribute.
    /// [`HTMLAreaElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/target)
    void target(const jsbind::String& value);
    /// Getter of the `download` attribute.
    /// [`HTMLAreaElement.download`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/download)
    [[nodiscard]] jsbind::String download() const;
    /// Setter of the `download` attribute.
    /// [`HTMLAreaElement.download`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/download)
    void download(const jsbind::String& value);
    /// Getter of the `ping` attribute.
    /// [`HTMLAreaElement.ping`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/ping)
    [[nodiscard]] jsbind::String ping() const;
    /// Setter of the `ping` attribute.
    /// [`HTMLAreaElement.ping`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/ping)
    void ping(const jsbind::String& value);
    /// Getter of the `rel` attribute.
    /// [`HTMLAreaElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/rel)
    [[nodiscard]] jsbind::String rel() const;
    /// Setter of the `rel` attribute.
    /// [`HTMLAreaElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/rel)
    void rel(const jsbind::String& value);
    /// Getter of the `relList` attribute.
    /// [`HTMLAreaElement.relList`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/relList)
    [[nodiscard]] DOMTokenList relList() const;
    /// Getter of the `referrerPolicy` attribute.
    /// [`HTMLAreaElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/referrerPolicy)
    [[nodiscard]] jsbind::String referrerPolicy() const;
    /// Setter of the `referrerPolicy` attribute.
    /// [`HTMLAreaElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/referrerPolicy)
    void referrerPolicy(const jsbind::String& value);
    /// Getter of the `noHref` attribute.
    /// [`HTMLAreaElement.noHref`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/noHref)
    [[nodiscard]] bool noHref() const;
    /// Setter of the `noHref` attribute.
    /// [`HTMLAreaElement.noHref`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/noHref)
    void noHref(bool value);
    /// Getter of the `attributionSrc` attribute.
    /// [`HTMLAreaElement.attributionSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/attributionSrc)
    [[nodiscard]] jsbind::String attributionSrc() const;
    /// Setter of the `attributionSrc` attribute.
    /// [`HTMLAreaElement.attributionSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/attributionSrc)
    void attributionSrc(const jsbind::String& value);
    /// Getter of the `href` attribute.
    /// [`HTMLAreaElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/href)
    [[nodiscard]] jsbind::String href() const;
    /// Setter of the `href` attribute.
    /// [`HTMLAreaElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/href)
    void href(const jsbind::String& value);
    /// Getter of the `origin` attribute.
    /// [`HTMLAreaElement.origin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// Getter of the `protocol` attribute.
    /// [`HTMLAreaElement.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    /// [`HTMLAreaElement.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/protocol)
    void protocol(const jsbind::String& value);
    /// Getter of the `username` attribute.
    /// [`HTMLAreaElement.username`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/username)
    [[nodiscard]] jsbind::String username() const;
    /// Setter of the `username` attribute.
    /// [`HTMLAreaElement.username`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/username)
    void username(const jsbind::String& value);
    /// Getter of the `password` attribute.
    /// [`HTMLAreaElement.password`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/password)
    [[nodiscard]] jsbind::String password() const;
    /// Setter of the `password` attribute.
    /// [`HTMLAreaElement.password`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/password)
    void password(const jsbind::String& value);
    /// Getter of the `host` attribute.
    /// [`HTMLAreaElement.host`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/host)
    [[nodiscard]] jsbind::String host() const;
    /// Setter of the `host` attribute.
    /// [`HTMLAreaElement.host`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/host)
    void host(const jsbind::String& value);
    /// Getter of the `hostname` attribute.
    /// [`HTMLAreaElement.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// Setter of the `hostname` attribute.
    /// [`HTMLAreaElement.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/hostname)
    void hostname(const jsbind::String& value);
    /// Getter of the `port` attribute.
    /// [`HTMLAreaElement.port`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/port)
    [[nodiscard]] jsbind::String port() const;
    /// Setter of the `port` attribute.
    /// [`HTMLAreaElement.port`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/port)
    void port(const jsbind::String& value);
    /// Getter of the `pathname` attribute.
    /// [`HTMLAreaElement.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// Setter of the `pathname` attribute.
    /// [`HTMLAreaElement.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/pathname)
    void pathname(const jsbind::String& value);
    /// Getter of the `search` attribute.
    /// [`HTMLAreaElement.search`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/search)
    [[nodiscard]] jsbind::String search() const;
    /// Setter of the `search` attribute.
    /// [`HTMLAreaElement.search`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/search)
    void search(const jsbind::String& value);
    /// Getter of the `hash` attribute.
    /// [`HTMLAreaElement.hash`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/hash)
    [[nodiscard]] jsbind::String hash() const;
    /// Setter of the `hash` attribute.
    /// [`HTMLAreaElement.hash`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAreaElement/hash)
    void hash(const jsbind::String& value);
};

