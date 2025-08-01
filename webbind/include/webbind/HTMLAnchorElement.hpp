#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;


/// The HTMLAnchorElement class.
/// [`HTMLAnchorElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement)
class HTMLAnchorElement : public HTMLElement {
    explicit HTMLAnchorElement(Handle h) noexcept;

public:
    explicit HTMLAnchorElement(const emlite::Val &val) noexcept;
    static HTMLAnchorElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLAnchorElement clone() const noexcept;
    /// The `new HTMLAnchorElement(..)` constructor, creating a new HTMLAnchorElement instance
    HTMLAnchorElement();
    /// Getter of the `target` attribute.
    /// [`HTMLAnchorElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/target)
    [[nodiscard]] jsbind::String target() const;
    /// Setter of the `target` attribute.
    /// [`HTMLAnchorElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/target)
    void target(const jsbind::String& value);
    /// Getter of the `download` attribute.
    /// [`HTMLAnchorElement.download`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/download)
    [[nodiscard]] jsbind::String download() const;
    /// Setter of the `download` attribute.
    /// [`HTMLAnchorElement.download`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/download)
    void download(const jsbind::String& value);
    /// Getter of the `ping` attribute.
    /// [`HTMLAnchorElement.ping`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/ping)
    [[nodiscard]] jsbind::String ping() const;
    /// Setter of the `ping` attribute.
    /// [`HTMLAnchorElement.ping`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/ping)
    void ping(const jsbind::String& value);
    /// Getter of the `rel` attribute.
    /// [`HTMLAnchorElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/rel)
    [[nodiscard]] jsbind::String rel() const;
    /// Setter of the `rel` attribute.
    /// [`HTMLAnchorElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/rel)
    void rel(const jsbind::String& value);
    /// Getter of the `relList` attribute.
    /// [`HTMLAnchorElement.relList`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/relList)
    [[nodiscard]] DOMTokenList relList() const;
    /// Getter of the `hreflang` attribute.
    /// [`HTMLAnchorElement.hreflang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/hreflang)
    [[nodiscard]] jsbind::String hreflang() const;
    /// Setter of the `hreflang` attribute.
    /// [`HTMLAnchorElement.hreflang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/hreflang)
    void hreflang(const jsbind::String& value);
    /// Getter of the `type` attribute.
    /// [`HTMLAnchorElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLAnchorElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `text` attribute.
    /// [`HTMLAnchorElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`HTMLAnchorElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/text)
    void text(const jsbind::String& value);
    /// Getter of the `referrerPolicy` attribute.
    /// [`HTMLAnchorElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/referrerPolicy)
    [[nodiscard]] jsbind::String referrerPolicy() const;
    /// Setter of the `referrerPolicy` attribute.
    /// [`HTMLAnchorElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/referrerPolicy)
    void referrerPolicy(const jsbind::String& value);
    /// Getter of the `coords` attribute.
    /// [`HTMLAnchorElement.coords`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/coords)
    [[nodiscard]] jsbind::String coords() const;
    /// Setter of the `coords` attribute.
    /// [`HTMLAnchorElement.coords`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/coords)
    void coords(const jsbind::String& value);
    /// Getter of the `charset` attribute.
    /// [`HTMLAnchorElement.charset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/charset)
    [[nodiscard]] jsbind::String charset() const;
    /// Setter of the `charset` attribute.
    /// [`HTMLAnchorElement.charset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/charset)
    void charset(const jsbind::String& value);
    /// Getter of the `name` attribute.
    /// [`HTMLAnchorElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLAnchorElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `rev` attribute.
    /// [`HTMLAnchorElement.rev`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/rev)
    [[nodiscard]] jsbind::String rev() const;
    /// Setter of the `rev` attribute.
    /// [`HTMLAnchorElement.rev`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/rev)
    void rev(const jsbind::String& value);
    /// Getter of the `shape` attribute.
    /// [`HTMLAnchorElement.shape`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/shape)
    [[nodiscard]] jsbind::String shape() const;
    /// Setter of the `shape` attribute.
    /// [`HTMLAnchorElement.shape`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/shape)
    void shape(const jsbind::String& value);
    /// Getter of the `attributionSourceId` attribute.
    /// [`HTMLAnchorElement.attributionSourceId`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/attributionSourceId)
    [[nodiscard]] unsigned long attributionSourceId() const;
    /// Setter of the `attributionSourceId` attribute.
    /// [`HTMLAnchorElement.attributionSourceId`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/attributionSourceId)
    void attributionSourceId(unsigned long value);
    /// Getter of the `attributionSrc` attribute.
    /// [`HTMLAnchorElement.attributionSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/attributionSrc)
    [[nodiscard]] jsbind::String attributionSrc() const;
    /// Setter of the `attributionSrc` attribute.
    /// [`HTMLAnchorElement.attributionSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/attributionSrc)
    void attributionSrc(const jsbind::String& value);
    /// Getter of the `href` attribute.
    /// [`HTMLAnchorElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/href)
    [[nodiscard]] jsbind::String href() const;
    /// Setter of the `href` attribute.
    /// [`HTMLAnchorElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/href)
    void href(const jsbind::String& value);
    /// Getter of the `origin` attribute.
    /// [`HTMLAnchorElement.origin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// Getter of the `protocol` attribute.
    /// [`HTMLAnchorElement.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    /// [`HTMLAnchorElement.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/protocol)
    void protocol(const jsbind::String& value);
    /// Getter of the `username` attribute.
    /// [`HTMLAnchorElement.username`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/username)
    [[nodiscard]] jsbind::String username() const;
    /// Setter of the `username` attribute.
    /// [`HTMLAnchorElement.username`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/username)
    void username(const jsbind::String& value);
    /// Getter of the `password` attribute.
    /// [`HTMLAnchorElement.password`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/password)
    [[nodiscard]] jsbind::String password() const;
    /// Setter of the `password` attribute.
    /// [`HTMLAnchorElement.password`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/password)
    void password(const jsbind::String& value);
    /// Getter of the `host` attribute.
    /// [`HTMLAnchorElement.host`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/host)
    [[nodiscard]] jsbind::String host() const;
    /// Setter of the `host` attribute.
    /// [`HTMLAnchorElement.host`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/host)
    void host(const jsbind::String& value);
    /// Getter of the `hostname` attribute.
    /// [`HTMLAnchorElement.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// Setter of the `hostname` attribute.
    /// [`HTMLAnchorElement.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/hostname)
    void hostname(const jsbind::String& value);
    /// Getter of the `port` attribute.
    /// [`HTMLAnchorElement.port`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/port)
    [[nodiscard]] jsbind::String port() const;
    /// Setter of the `port` attribute.
    /// [`HTMLAnchorElement.port`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/port)
    void port(const jsbind::String& value);
    /// Getter of the `pathname` attribute.
    /// [`HTMLAnchorElement.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// Setter of the `pathname` attribute.
    /// [`HTMLAnchorElement.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/pathname)
    void pathname(const jsbind::String& value);
    /// Getter of the `search` attribute.
    /// [`HTMLAnchorElement.search`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/search)
    [[nodiscard]] jsbind::String search() const;
    /// Setter of the `search` attribute.
    /// [`HTMLAnchorElement.search`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/search)
    void search(const jsbind::String& value);
    /// Getter of the `hash` attribute.
    /// [`HTMLAnchorElement.hash`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/hash)
    [[nodiscard]] jsbind::String hash() const;
    /// Setter of the `hash` attribute.
    /// [`HTMLAnchorElement.hash`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAnchorElement/hash)
    void hash(const jsbind::String& value);
};

