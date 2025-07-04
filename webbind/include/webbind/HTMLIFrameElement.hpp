#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;
class Document;
class PermissionsPolicy;


class HTMLIFrameElement : public HTMLElement {
    explicit HTMLIFrameElement(Handle h) noexcept;

public:
    explicit HTMLIFrameElement(const emlite::Val &val) noexcept;
    static HTMLIFrameElement take_ownership(Handle h) noexcept;

    HTMLIFrameElement clone() const noexcept;
    HTMLIFrameElement();
    jsbind::USVString src() const;
    void src(const jsbind::USVString& value);
    jsbind::Any srcdoc() const;
    void srcdoc(const jsbind::Any& value);
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    DOMTokenList sandbox() const;
    jsbind::DOMString allow() const;
    void allow(const jsbind::DOMString& value);
    bool allowFullscreen() const;
    void allowFullscreen(bool value);
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
    jsbind::DOMString height() const;
    void height(const jsbind::DOMString& value);
    jsbind::DOMString referrerPolicy() const;
    void referrerPolicy(const jsbind::DOMString& value);
    jsbind::DOMString loading() const;
    void loading(const jsbind::DOMString& value);
    Document contentDocument() const;
    jsbind::Any contentWindow() const;
    Document getSVGDocument();
    bool credentialless() const;
    void credentialless(bool value);
    jsbind::DOMString csp() const;
    void csp(const jsbind::DOMString& value);
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString scrolling() const;
    void scrolling(const jsbind::DOMString& value);
    jsbind::DOMString frameBorder() const;
    void frameBorder(const jsbind::DOMString& value);
    jsbind::USVString longDesc() const;
    void longDesc(const jsbind::USVString& value);
    jsbind::DOMString marginHeight() const;
    void marginHeight(const jsbind::DOMString& value);
    jsbind::DOMString marginWidth() const;
    void marginWidth(const jsbind::DOMString& value);
    PermissionsPolicy permissionsPolicy() const;
    jsbind::DOMString privateToken() const;
    void privateToken(const jsbind::DOMString& value);
    bool adAuctionHeaders() const;
    void adAuctionHeaders(bool value);
    bool sharedStorageWritable() const;
    void sharedStorageWritable(bool value);
};

