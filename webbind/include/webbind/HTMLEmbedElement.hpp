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
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::String type() const;
    void type(const jsbind::String& value);
    jsbind::String width() const;
    void width(const jsbind::String& value);
    jsbind::String height() const;
    void height(const jsbind::String& value);
    Document getSVGDocument();
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
};

