#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class DOMTokenList;
class CSSStyleSheet;

/// Interface HTMLLinkElement
/// [`HTMLLinkElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement)
class HTMLLinkElement : public HTMLElement {
    explicit HTMLLinkElement(Handle h) noexcept;
public:
    explicit HTMLLinkElement(const emlite::Val &val) noexcept;
    static HTMLLinkElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLLinkElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLLinkElement(..)` constructor, creating a new HTMLLinkElement instance
    HTMLLinkElement();
    /// [`HTMLLinkElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/href)
    /// [`HTMLLinkElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/href)
    [[nodiscard]] jsbind::String href() const;
    /// Setter of the `href` attribute.
    /// [`HTMLLinkElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/href)
    void href(const jsbind::String& value);
    /// [`HTMLLinkElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/crossOrigin)
    /// [`HTMLLinkElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/crossOrigin)
    [[nodiscard]] jsbind::String crossOrigin() const;
    /// Setter of the `crossOrigin` attribute.
    /// [`HTMLLinkElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/crossOrigin)
    void crossOrigin(const jsbind::String& value);
    /// [`HTMLLinkElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/rel)
    /// [`HTMLLinkElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/rel)
    [[nodiscard]] jsbind::String rel() const;
    /// Setter of the `rel` attribute.
    /// [`HTMLLinkElement.rel`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/rel)
    void rel(const jsbind::String& value);
    /// [`HTMLLinkElement.as`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/as)
    /// [`HTMLLinkElement.as`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/as)
    [[nodiscard]] jsbind::String as() const;
    /// Setter of the `as` attribute.
    /// [`HTMLLinkElement.as`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/as)
    void as(const jsbind::String& value);
    /// [`HTMLLinkElement.relList`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/relList)
    /// [`HTMLLinkElement.relList`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/relList)
    [[nodiscard]] DOMTokenList relList() const;
    /// [`HTMLLinkElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/media)
    /// [`HTMLLinkElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/media)
    [[nodiscard]] jsbind::String media() const;
    /// Setter of the `media` attribute.
    /// [`HTMLLinkElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/media)
    void media(const jsbind::String& value);
    /// [`HTMLLinkElement.integrity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/integrity)
    /// [`HTMLLinkElement.integrity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/integrity)
    [[nodiscard]] jsbind::String integrity() const;
    /// Setter of the `integrity` attribute.
    /// [`HTMLLinkElement.integrity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/integrity)
    void integrity(const jsbind::String& value);
    /// [`HTMLLinkElement.hreflang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/hreflang)
    /// [`HTMLLinkElement.hreflang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/hreflang)
    [[nodiscard]] jsbind::String hreflang() const;
    /// Setter of the `hreflang` attribute.
    /// [`HTMLLinkElement.hreflang`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/hreflang)
    void hreflang(const jsbind::String& value);
    /// [`HTMLLinkElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/type)
    /// [`HTMLLinkElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLLinkElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/type)
    void type(const jsbind::String& value);
    /// [`HTMLLinkElement.sizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/sizes)
    /// [`HTMLLinkElement.sizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/sizes)
    [[nodiscard]] DOMTokenList sizes() const;
    /// [`HTMLLinkElement.imageSrcset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/imageSrcset)
    /// [`HTMLLinkElement.imageSrcset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/imageSrcset)
    [[nodiscard]] jsbind::String imageSrcset() const;
    /// Setter of the `imageSrcset` attribute.
    /// [`HTMLLinkElement.imageSrcset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/imageSrcset)
    void imageSrcset(const jsbind::String& value);
    /// [`HTMLLinkElement.imageSizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/imageSizes)
    /// [`HTMLLinkElement.imageSizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/imageSizes)
    [[nodiscard]] jsbind::String imageSizes() const;
    /// Setter of the `imageSizes` attribute.
    /// [`HTMLLinkElement.imageSizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/imageSizes)
    void imageSizes(const jsbind::String& value);
    /// [`HTMLLinkElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/referrerPolicy)
    /// [`HTMLLinkElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/referrerPolicy)
    [[nodiscard]] jsbind::String referrerPolicy() const;
    /// Setter of the `referrerPolicy` attribute.
    /// [`HTMLLinkElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/referrerPolicy)
    void referrerPolicy(const jsbind::String& value);
    /// [`HTMLLinkElement.blocking`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/blocking)
    /// [`HTMLLinkElement.blocking`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/blocking)
    [[nodiscard]] DOMTokenList blocking() const;
    /// [`HTMLLinkElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/disabled)
    /// [`HTMLLinkElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLLinkElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/disabled)
    void disabled(bool value);
    /// [`HTMLLinkElement.fetchPriority`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/fetchPriority)
    /// [`HTMLLinkElement.fetchPriority`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/fetchPriority)
    [[nodiscard]] jsbind::String fetchPriority() const;
    /// Setter of the `fetchPriority` attribute.
    /// [`HTMLLinkElement.fetchPriority`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/fetchPriority)
    void fetchPriority(const jsbind::String& value);
    /// [`HTMLLinkElement.charset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/charset)
    /// [`HTMLLinkElement.charset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/charset)
    [[nodiscard]] jsbind::String charset() const;
    /// Setter of the `charset` attribute.
    /// [`HTMLLinkElement.charset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/charset)
    void charset(const jsbind::String& value);
    /// [`HTMLLinkElement.rev`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/rev)
    /// [`HTMLLinkElement.rev`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/rev)
    [[nodiscard]] jsbind::String rev() const;
    /// Setter of the `rev` attribute.
    /// [`HTMLLinkElement.rev`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/rev)
    void rev(const jsbind::String& value);
    /// [`HTMLLinkElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/target)
    /// [`HTMLLinkElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/target)
    [[nodiscard]] jsbind::String target() const;
    /// Setter of the `target` attribute.
    /// [`HTMLLinkElement.target`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/target)
    void target(const jsbind::String& value);
    /// [`HTMLLinkElement.sheet`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/sheet)
    /// [`HTMLLinkElement.sheet`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLinkElement/sheet)
    [[nodiscard]] CSSStyleSheet sheet() const;
};

} // namespace webbind