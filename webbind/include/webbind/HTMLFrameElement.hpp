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
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::DOMString scrolling() const;
    void scrolling(const jsbind::DOMString& value);
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::DOMString frameBorder() const;
    void frameBorder(const jsbind::DOMString& value);
    jsbind::USVString longDesc() const;
    void longDesc(const jsbind::USVString& value);
    bool noResize() const;
    void noResize(bool value);
    Document contentDocument() const;
    jsbind::Any contentWindow() const;
    jsbind::DOMString marginHeight() const;
    void marginHeight(const jsbind::DOMString& value);
    jsbind::DOMString marginWidth() const;
    void marginWidth(const jsbind::DOMString& value);
};

