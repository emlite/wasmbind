#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;


class HTMLAreaElement : public HTMLElement {
    explicit HTMLAreaElement(Handle h) noexcept;

public:
    explicit HTMLAreaElement(const emlite::Val &val) noexcept;
    static HTMLAreaElement take_ownership(Handle h) noexcept;

    HTMLAreaElement clone() const noexcept;
    HTMLAreaElement();
    jsbind::String alt() const;
    void alt(const jsbind::String& value);
    jsbind::String coords() const;
    void coords(const jsbind::String& value);
    jsbind::String shape() const;
    void shape(const jsbind::String& value);
    jsbind::String target() const;
    void target(const jsbind::String& value);
    jsbind::String download() const;
    void download(const jsbind::String& value);
    jsbind::String ping() const;
    void ping(const jsbind::String& value);
    jsbind::String rel() const;
    void rel(const jsbind::String& value);
    DOMTokenList relList() const;
    jsbind::String referrerPolicy() const;
    void referrerPolicy(const jsbind::String& value);
    bool noHref() const;
    void noHref(bool value);
    jsbind::String attributionSrc() const;
    void attributionSrc(const jsbind::String& value);
    jsbind::String href() const;
    void href(const jsbind::String& value);
    jsbind::String origin() const;
    jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    jsbind::String username() const;
    void username(const jsbind::String& value);
    jsbind::String password() const;
    void password(const jsbind::String& value);
    jsbind::String host() const;
    void host(const jsbind::String& value);
    jsbind::String hostname() const;
    void hostname(const jsbind::String& value);
    jsbind::String port() const;
    void port(const jsbind::String& value);
    jsbind::String pathname() const;
    void pathname(const jsbind::String& value);
    jsbind::String search() const;
    void search(const jsbind::String& value);
    jsbind::String hash() const;
    void hash(const jsbind::String& value);
};

