#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;


class HTMLScriptElement : public HTMLElement {
    explicit HTMLScriptElement(Handle h) noexcept;

public:
    explicit HTMLScriptElement(const emlite::Val &val) noexcept;
    static HTMLScriptElement take_ownership(Handle h) noexcept;

    HTMLScriptElement clone() const noexcept;
    HTMLScriptElement();
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    bool noModule() const;
    void noModule(bool value);
    bool async() const;
    void async(bool value);
    bool defer() const;
    void defer(bool value);
    DOMTokenList blocking() const;
    jsbind::DOMString crossOrigin() const;
    void crossOrigin(const jsbind::DOMString& value);
    jsbind::DOMString referrerPolicy() const;
    void referrerPolicy(const jsbind::DOMString& value);
    jsbind::DOMString integrity() const;
    void integrity(const jsbind::DOMString& value);
    jsbind::DOMString fetchPriority() const;
    void fetchPriority(const jsbind::DOMString& value);
    jsbind::DOMString text() const;
    void text(const jsbind::DOMString& value);
    static bool supports(const jsbind::DOMString& type);
    jsbind::DOMString charset() const;
    void charset(const jsbind::DOMString& value);
    jsbind::DOMString event() const;
    void event(const jsbind::DOMString& value);
    jsbind::DOMString htmlFor() const;
    void htmlFor(const jsbind::DOMString& value);
    jsbind::USVString attributionSrc() const;
    void attributionSrc(const jsbind::USVString& value);
};

