#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class Document;


class HTMLEmbedElement : public HTMLElement {
    explicit HTMLEmbedElement(Handle h) noexcept;

public:
    explicit HTMLEmbedElement(const emlite::Val &val) noexcept;
    static HTMLEmbedElement take_ownership(Handle h) noexcept;

    HTMLEmbedElement clone() const noexcept;
    HTMLEmbedElement();
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
    jsbind::DOMString height() const;
    void height(const jsbind::DOMString& value);
    Document getSVGDocument();
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
};

