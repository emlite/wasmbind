#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;


class HTMLAnchorElement : public HTMLElement {
    explicit HTMLAnchorElement(Handle h) noexcept;

public:
    explicit HTMLAnchorElement(const emlite::Val &val) noexcept;
    static HTMLAnchorElement take_ownership(Handle h) noexcept;

    HTMLAnchorElement clone() const noexcept;
    HTMLAnchorElement();
    jsbind::String target() const;
    void target(const jsbind::String& value);
    jsbind::String download() const;
    void download(const jsbind::String& value);
    jsbind::String ping() const;
    void ping(const jsbind::String& value);
    jsbind::String rel() const;
    void rel(const jsbind::String& value);
    DOMTokenList relList() const;
    jsbind::String hreflang() const;
    void hreflang(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String text() const;
    void text(const jsbind::String& value);
    jsbind::String referrerPolicy() const;
    void referrerPolicy(const jsbind::String& value);
    jsbind::String coords() const;
    void coords(const jsbind::String& value);
    jsbind::String charset() const;
    void charset(const jsbind::String& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String rev() const;
    void rev(const jsbind::String& value);
    jsbind::String shape() const;
    void shape(const jsbind::String& value);
    unsigned long attributionSourceId() const;
    void attributionSourceId(unsigned long value);
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

