#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class Document;


class HTMLFrameElement : public HTMLElement {
    explicit HTMLFrameElement(Handle h) noexcept;

public:
    explicit HTMLFrameElement(const emlite::Val &val) noexcept;
    static HTMLFrameElement take_ownership(Handle h) noexcept;

    HTMLFrameElement clone() const noexcept;
    HTMLFrameElement();
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String scrolling() const;
    void scrolling(const jsbind::String& value);
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::String frameBorder() const;
    void frameBorder(const jsbind::String& value);
    jsbind::String longDesc() const;
    void longDesc(const jsbind::String& value);
    bool noResize() const;
    void noResize(bool value);
    Document contentDocument() const;
    jsbind::Any contentWindow() const;
    jsbind::String marginHeight() const;
    void marginHeight(const jsbind::String& value);
    jsbind::String marginWidth() const;
    void marginWidth(const jsbind::String& value);
};

