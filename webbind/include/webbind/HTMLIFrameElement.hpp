#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class DOMTokenList;
class Document;
class PermissionsPolicy;

/// Interface HTMLIFrameElement
/// [`HTMLIFrameElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement)
class HTMLIFrameElement : public HTMLElement {
    explicit HTMLIFrameElement(Handle h) noexcept;
public:
    explicit HTMLIFrameElement(const emlite::Val &val) noexcept;
    static HTMLIFrameElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLIFrameElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLIFrameElement(..)` constructor, creating a new HTMLIFrameElement instance
    HTMLIFrameElement();
    /// [`HTMLIFrameElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/src)
    /// [`HTMLIFrameElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLIFrameElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/src)
    void src(const jsbind::String& value);
    /// [`HTMLIFrameElement.srcdoc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/srcdoc)
    /// [`HTMLIFrameElement.srcdoc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/srcdoc)
    [[nodiscard]] jsbind::Any srcdoc() const;
    /// Setter of the `srcdoc` attribute.
    /// [`HTMLIFrameElement.srcdoc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/srcdoc)
    void srcdoc(const jsbind::Any& value);
    /// [`HTMLIFrameElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/name)
    /// [`HTMLIFrameElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLIFrameElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/name)
    void name(const jsbind::String& value);
    /// [`HTMLIFrameElement.sandbox`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/sandbox)
    /// [`HTMLIFrameElement.sandbox`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/sandbox)
    [[nodiscard]] DOMTokenList sandbox() const;
    /// [`HTMLIFrameElement.allow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/allow)
    /// [`HTMLIFrameElement.allow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/allow)
    [[nodiscard]] jsbind::String allow() const;
    /// Setter of the `allow` attribute.
    /// [`HTMLIFrameElement.allow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/allow)
    void allow(const jsbind::String& value);
    /// [`HTMLIFrameElement.allowFullscreen`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/allowFullscreen)
    /// [`HTMLIFrameElement.allowFullscreen`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/allowFullscreen)
    [[nodiscard]] bool allowFullscreen() const;
    /// Setter of the `allowFullscreen` attribute.
    /// [`HTMLIFrameElement.allowFullscreen`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/allowFullscreen)
    void allowFullscreen(bool value);
    /// [`HTMLIFrameElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/width)
    /// [`HTMLIFrameElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLIFrameElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/width)
    void width(const jsbind::String& value);
    /// [`HTMLIFrameElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/height)
    /// [`HTMLIFrameElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/height)
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLIFrameElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/height)
    void height(const jsbind::String& value);
    /// [`HTMLIFrameElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/referrerPolicy)
    /// [`HTMLIFrameElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/referrerPolicy)
    [[nodiscard]] jsbind::String referrerPolicy() const;
    /// Setter of the `referrerPolicy` attribute.
    /// [`HTMLIFrameElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/referrerPolicy)
    void referrerPolicy(const jsbind::String& value);
    /// [`HTMLIFrameElement.loading`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/loading)
    /// [`HTMLIFrameElement.loading`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/loading)
    [[nodiscard]] jsbind::String loading() const;
    /// Setter of the `loading` attribute.
    /// [`HTMLIFrameElement.loading`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/loading)
    void loading(const jsbind::String& value);
    /// [`HTMLIFrameElement.contentDocument`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/contentDocument)
    /// [`HTMLIFrameElement.contentDocument`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/contentDocument)
    [[nodiscard]] Document contentDocument() const;
    /// [`HTMLIFrameElement.contentWindow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/contentWindow)
    /// [`HTMLIFrameElement.contentWindow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/contentWindow)
    [[nodiscard]] jsbind::Any contentWindow() const;
    /// The getSVGDocument method.
    /// [`HTMLIFrameElement.getSVGDocument`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/getSVGDocument)
    Document getSVGDocument();
    /// [`HTMLIFrameElement.credentialless`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/credentialless)
    /// [`HTMLIFrameElement.credentialless`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/credentialless)
    [[nodiscard]] bool credentialless() const;
    /// Setter of the `credentialless` attribute.
    /// [`HTMLIFrameElement.credentialless`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/credentialless)
    void credentialless(bool value);
    /// [`HTMLIFrameElement.csp`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/csp)
    /// [`HTMLIFrameElement.csp`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/csp)
    [[nodiscard]] jsbind::String csp() const;
    /// Setter of the `csp` attribute.
    /// [`HTMLIFrameElement.csp`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/csp)
    void csp(const jsbind::String& value);
    /// [`HTMLIFrameElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/align)
    /// [`HTMLIFrameElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLIFrameElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/align)
    void align(const jsbind::String& value);
    /// [`HTMLIFrameElement.scrolling`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/scrolling)
    /// [`HTMLIFrameElement.scrolling`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/scrolling)
    [[nodiscard]] jsbind::String scrolling() const;
    /// Setter of the `scrolling` attribute.
    /// [`HTMLIFrameElement.scrolling`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/scrolling)
    void scrolling(const jsbind::String& value);
    /// [`HTMLIFrameElement.frameBorder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/frameBorder)
    /// [`HTMLIFrameElement.frameBorder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/frameBorder)
    [[nodiscard]] jsbind::String frameBorder() const;
    /// Setter of the `frameBorder` attribute.
    /// [`HTMLIFrameElement.frameBorder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/frameBorder)
    void frameBorder(const jsbind::String& value);
    /// [`HTMLIFrameElement.longDesc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/longDesc)
    /// [`HTMLIFrameElement.longDesc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/longDesc)
    [[nodiscard]] jsbind::String longDesc() const;
    /// Setter of the `longDesc` attribute.
    /// [`HTMLIFrameElement.longDesc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/longDesc)
    void longDesc(const jsbind::String& value);
    /// [`HTMLIFrameElement.marginHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/marginHeight)
    /// [`HTMLIFrameElement.marginHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/marginHeight)
    [[nodiscard]] jsbind::String marginHeight() const;
    /// Setter of the `marginHeight` attribute.
    /// [`HTMLIFrameElement.marginHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/marginHeight)
    void marginHeight(const jsbind::String& value);
    /// [`HTMLIFrameElement.marginWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/marginWidth)
    /// [`HTMLIFrameElement.marginWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/marginWidth)
    [[nodiscard]] jsbind::String marginWidth() const;
    /// Setter of the `marginWidth` attribute.
    /// [`HTMLIFrameElement.marginWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/marginWidth)
    void marginWidth(const jsbind::String& value);
    /// [`HTMLIFrameElement.permissionsPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/permissionsPolicy)
    /// [`HTMLIFrameElement.permissionsPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/permissionsPolicy)
    [[nodiscard]] PermissionsPolicy permissionsPolicy() const;
    /// [`HTMLIFrameElement.privateToken`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/privateToken)
    /// [`HTMLIFrameElement.privateToken`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/privateToken)
    [[nodiscard]] jsbind::String privateToken() const;
    /// Setter of the `privateToken` attribute.
    /// [`HTMLIFrameElement.privateToken`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/privateToken)
    void privateToken(const jsbind::String& value);
    /// [`HTMLIFrameElement.adAuctionHeaders`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/adAuctionHeaders)
    /// [`HTMLIFrameElement.adAuctionHeaders`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/adAuctionHeaders)
    [[nodiscard]] bool adAuctionHeaders() const;
    /// Setter of the `adAuctionHeaders` attribute.
    /// [`HTMLIFrameElement.adAuctionHeaders`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/adAuctionHeaders)
    void adAuctionHeaders(bool value);
    /// [`HTMLIFrameElement.sharedStorageWritable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/sharedStorageWritable)
    /// [`HTMLIFrameElement.sharedStorageWritable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/sharedStorageWritable)
    [[nodiscard]] bool sharedStorageWritable() const;
    /// Setter of the `sharedStorageWritable` attribute.
    /// [`HTMLIFrameElement.sharedStorageWritable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLIFrameElement/sharedStorageWritable)
    void sharedStorageWritable(bool value);
};

} // namespace webbind