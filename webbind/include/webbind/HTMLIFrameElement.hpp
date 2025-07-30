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
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::Any srcdoc() const;
    void srcdoc(const jsbind::Any& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
    DOMTokenList sandbox() const;
    jsbind::String allow() const;
    void allow(const jsbind::String& value);
    bool allowFullscreen() const;
    void allowFullscreen(bool value);
    jsbind::String width() const;
    void width(const jsbind::String& value);
    jsbind::String height() const;
    void height(const jsbind::String& value);
    jsbind::String referrerPolicy() const;
    void referrerPolicy(const jsbind::String& value);
    jsbind::String loading() const;
    void loading(const jsbind::String& value);
    Document contentDocument() const;
    jsbind::Any contentWindow() const;
    Document getSVGDocument();
    bool credentialless() const;
    void credentialless(bool value);
    jsbind::String csp() const;
    void csp(const jsbind::String& value);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String scrolling() const;
    void scrolling(const jsbind::String& value);
    jsbind::String frameBorder() const;
    void frameBorder(const jsbind::String& value);
    jsbind::String longDesc() const;
    void longDesc(const jsbind::String& value);
    jsbind::String marginHeight() const;
    void marginHeight(const jsbind::String& value);
    jsbind::String marginWidth() const;
    void marginWidth(const jsbind::String& value);
    PermissionsPolicy permissionsPolicy() const;
    jsbind::String privateToken() const;
    void privateToken(const jsbind::String& value);
    bool adAuctionHeaders() const;
    void adAuctionHeaders(bool value);
    bool sharedStorageWritable() const;
    void sharedStorageWritable(bool value);
};

