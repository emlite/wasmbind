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
    jsbind::DOMString alt() const;
    void alt(const jsbind::DOMString& value);
    jsbind::DOMString coords() const;
    void coords(const jsbind::DOMString& value);
    jsbind::DOMString shape() const;
    void shape(const jsbind::DOMString& value);
    jsbind::DOMString target() const;
    void target(const jsbind::DOMString& value);
    jsbind::DOMString download() const;
    void download(const jsbind::DOMString& value);
    jsbind::USVString ping() const;
    void ping(const jsbind::USVString& value);
    jsbind::DOMString rel() const;
    void rel(const jsbind::DOMString& value);
    DOMTokenList relList() const;
    jsbind::DOMString referrerPolicy() const;
    void referrerPolicy(const jsbind::DOMString& value);
    bool noHref() const;
    void noHref(bool value);
    jsbind::USVString attributionSrc() const;
    void attributionSrc(const jsbind::USVString& value);
    jsbind::USVString href() const;
    void href(const jsbind::USVString& value);
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
};

