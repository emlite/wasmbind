#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class DOMTokenList;


class SVGAElement : public SVGGraphicsElement {
    explicit SVGAElement(Handle h) noexcept;

public:
    explicit SVGAElement(const emlite::Val &val) noexcept;
    static SVGAElement take_ownership(Handle h) noexcept;

    SVGAElement clone() const noexcept;
    SVGAnimatedString target() const;
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
    SVGAnimatedString href() const;
};

