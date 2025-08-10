#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGraphicsElement.hpp"

namespace webbind {

class SVGAnimatedString;
class DOMTokenList;

/// Interface SVGAElement
/// [`SVGAElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement)
class SVGAElement : public SVGGraphicsElement {
    explicit SVGAElement(Handle h) noexcept;
public:
    explicit SVGAElement(const emlite::Val &val) noexcept;
    static SVGAElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGAElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `target` attribute.
    /// [`SVGAElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/target)
    [[nodiscard]] SVGAnimatedString target() const;
    /// Getter of the `download` attribute.
    /// [`SVGAElement.download`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/download)
    [[nodiscard]] jsbind::String download() const;
    /// Setter of the `download` attribute.
    /// [`SVGAElement.download`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/download)
    void download(const jsbind::String& value);
    /// Getter of the `ping` attribute.
    /// [`SVGAElement.ping`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/ping)
    [[nodiscard]] jsbind::String ping() const;
    /// Setter of the `ping` attribute.
    /// [`SVGAElement.ping`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/ping)
    void ping(const jsbind::String& value);
    /// Getter of the `rel` attribute.
    /// [`SVGAElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/rel)
    [[nodiscard]] jsbind::String rel() const;
    /// Setter of the `rel` attribute.
    /// [`SVGAElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/rel)
    void rel(const jsbind::String& value);
    /// Getter of the `relList` attribute.
    /// [`SVGAElement.relList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/relList)
    [[nodiscard]] DOMTokenList relList() const;
    /// Getter of the `hreflang` attribute.
    /// [`SVGAElement.hreflang`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/hreflang)
    [[nodiscard]] jsbind::String hreflang() const;
    /// Setter of the `hreflang` attribute.
    /// [`SVGAElement.hreflang`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/hreflang)
    void hreflang(const jsbind::String& value);
    /// Getter of the `type` attribute.
    /// [`SVGAElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`SVGAElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `text` attribute.
    /// [`SVGAElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`SVGAElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/text)
    void text(const jsbind::String& value);
    /// Getter of the `referrerPolicy` attribute.
    /// [`SVGAElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/referrerPolicy)
    [[nodiscard]] jsbind::String referrerPolicy() const;
    /// Setter of the `referrerPolicy` attribute.
    /// [`SVGAElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/referrerPolicy)
    void referrerPolicy(const jsbind::String& value);
    /// Getter of the `origin` attribute.
    /// [`SVGAElement.origin`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// Getter of the `protocol` attribute.
    /// [`SVGAElement.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/protocol)
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    /// [`SVGAElement.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/protocol)
    void protocol(const jsbind::String& value);
    /// Getter of the `username` attribute.
    /// [`SVGAElement.username`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/username)
    [[nodiscard]] jsbind::String username() const;
    /// Setter of the `username` attribute.
    /// [`SVGAElement.username`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/username)
    void username(const jsbind::String& value);
    /// Getter of the `password` attribute.
    /// [`SVGAElement.password`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/password)
    [[nodiscard]] jsbind::String password() const;
    /// Setter of the `password` attribute.
    /// [`SVGAElement.password`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/password)
    void password(const jsbind::String& value);
    /// Getter of the `host` attribute.
    /// [`SVGAElement.host`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/host)
    [[nodiscard]] jsbind::String host() const;
    /// Setter of the `host` attribute.
    /// [`SVGAElement.host`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/host)
    void host(const jsbind::String& value);
    /// Getter of the `hostname` attribute.
    /// [`SVGAElement.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/hostname)
    [[nodiscard]] jsbind::String hostname() const;
    /// Setter of the `hostname` attribute.
    /// [`SVGAElement.hostname`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/hostname)
    void hostname(const jsbind::String& value);
    /// Getter of the `port` attribute.
    /// [`SVGAElement.port`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/port)
    [[nodiscard]] jsbind::String port() const;
    /// Setter of the `port` attribute.
    /// [`SVGAElement.port`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/port)
    void port(const jsbind::String& value);
    /// Getter of the `pathname` attribute.
    /// [`SVGAElement.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/pathname)
    [[nodiscard]] jsbind::String pathname() const;
    /// Setter of the `pathname` attribute.
    /// [`SVGAElement.pathname`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/pathname)
    void pathname(const jsbind::String& value);
    /// Getter of the `search` attribute.
    /// [`SVGAElement.search`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/search)
    [[nodiscard]] jsbind::String search() const;
    /// Setter of the `search` attribute.
    /// [`SVGAElement.search`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/search)
    void search(const jsbind::String& value);
    /// Getter of the `hash` attribute.
    /// [`SVGAElement.hash`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/hash)
    [[nodiscard]] jsbind::String hash() const;
    /// Setter of the `hash` attribute.
    /// [`SVGAElement.hash`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/hash)
    void hash(const jsbind::String& value);
    /// Getter of the `href` attribute.
    /// [`SVGAElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGAElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

} // namespace webbind