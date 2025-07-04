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
    jsbind::DOMString download() const;
    void download(const jsbind::DOMString& value);
    jsbind::USVString ping() const;
    void ping(const jsbind::USVString& value);
    jsbind::DOMString rel() const;
    void rel(const jsbind::DOMString& value);
    DOMTokenList relList() const;
    jsbind::DOMString hreflang() const;
    void hreflang(const jsbind::DOMString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::DOMString text() const;
    void text(const jsbind::DOMString& value);
    jsbind::DOMString referrerPolicy() const;
    void referrerPolicy(const jsbind::DOMString& value);
    jsbind::USVString origin() const;
    jsbind::USVString protocol() const;
    void protocol(const jsbind::USVString& value);
    jsbind::USVString username() const;
    void username(const jsbind::USVString& value);
    jsbind::USVString password() const;
    void password(const jsbind::USVString& value);
    jsbind::USVString host() const;
    void host(const jsbind::USVString& value);
    jsbind::USVString hostname() const;
    void hostname(const jsbind::USVString& value);
    jsbind::USVString port() const;
    void port(const jsbind::USVString& value);
    jsbind::USVString pathname() const;
    void pathname(const jsbind::USVString& value);
    jsbind::USVString search() const;
    void search(const jsbind::USVString& value);
    jsbind::USVString hash() const;
    void hash(const jsbind::USVString& value);
    SVGAnimatedString href() const;
};

