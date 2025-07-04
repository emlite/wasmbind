#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLSourceElement : public HTMLElement {
    explicit HTMLSourceElement(Handle h) noexcept;

public:
    explicit HTMLSourceElement(const emlite::Val &val) noexcept;
    static HTMLSourceElement take_ownership(Handle h) noexcept;

    HTMLSourceElement clone() const noexcept;
    HTMLSourceElement();
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::USVString srcset() const;
    void srcset(const jsbind::USVString& value);
    jsbind::DOMString sizes() const;
    void sizes(const jsbind::DOMString& value);
    jsbind::DOMString media() const;
    void media(const jsbind::DOMString& value);
    unsigned long width() const;
    void width(unsigned long value);
    unsigned long height() const;
    void height(unsigned long value);
};

