#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLImageElement class.
/// [`HTMLImageElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement)
class HTMLImageElement : public HTMLElement {
    explicit HTMLImageElement(Handle h) noexcept;

public:
    explicit HTMLImageElement(const emlite::Val &val) noexcept;
    static HTMLImageElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLImageElement clone() const noexcept;
    /// The `new HTMLImageElement(..)` constructor, creating a new HTMLImageElement instance
    HTMLImageElement();
    /// Getter of the `alt` attribute.
    /// [`HTMLImageElement.alt`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/alt)
    [[nodiscard]] jsbind::String alt() const;
    /// Setter of the `alt` attribute.
    /// [`HTMLImageElement.alt`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/alt)
    void alt(const jsbind::String& value);
    /// Getter of the `src` attribute.
    /// [`HTMLImageElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLImageElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/src)
    void src(const jsbind::String& value);
    /// Getter of the `srcset` attribute.
    /// [`HTMLImageElement.srcset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/srcset)
    [[nodiscard]] jsbind::String srcset() const;
    /// Setter of the `srcset` attribute.
    /// [`HTMLImageElement.srcset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/srcset)
    void srcset(const jsbind::String& value);
    /// Getter of the `sizes` attribute.
    /// [`HTMLImageElement.sizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/sizes)
    [[nodiscard]] jsbind::String sizes() const;
    /// Setter of the `sizes` attribute.
    /// [`HTMLImageElement.sizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/sizes)
    void sizes(const jsbind::String& value);
    /// Getter of the `crossOrigin` attribute.
    /// [`HTMLImageElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/crossOrigin)
    [[nodiscard]] jsbind::String crossOrigin() const;
    /// Setter of the `crossOrigin` attribute.
    /// [`HTMLImageElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/crossOrigin)
    void crossOrigin(const jsbind::String& value);
    /// Getter of the `useMap` attribute.
    /// [`HTMLImageElement.useMap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/useMap)
    [[nodiscard]] jsbind::String useMap() const;
    /// Setter of the `useMap` attribute.
    /// [`HTMLImageElement.useMap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/useMap)
    void useMap(const jsbind::String& value);
    /// Getter of the `isMap` attribute.
    /// [`HTMLImageElement.isMap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/isMap)
    [[nodiscard]] bool isMap() const;
    /// Setter of the `isMap` attribute.
    /// [`HTMLImageElement.isMap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/isMap)
    void isMap(bool value);
    /// Getter of the `width` attribute.
    /// [`HTMLImageElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/width)
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLImageElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/width)
    void width(unsigned long value);
    /// Getter of the `height` attribute.
    /// [`HTMLImageElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/height)
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLImageElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/height)
    void height(unsigned long value);
    /// Getter of the `naturalWidth` attribute.
    /// [`HTMLImageElement.naturalWidth`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/naturalWidth)
    [[nodiscard]] unsigned long naturalWidth() const;
    /// Getter of the `naturalHeight` attribute.
    /// [`HTMLImageElement.naturalHeight`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/naturalHeight)
    [[nodiscard]] unsigned long naturalHeight() const;
    /// Getter of the `complete` attribute.
    /// [`HTMLImageElement.complete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/complete)
    [[nodiscard]] bool complete() const;
    /// Getter of the `currentSrc` attribute.
    /// [`HTMLImageElement.currentSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/currentSrc)
    [[nodiscard]] jsbind::String currentSrc() const;
    /// Getter of the `referrerPolicy` attribute.
    /// [`HTMLImageElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/referrerPolicy)
    [[nodiscard]] jsbind::String referrerPolicy() const;
    /// Setter of the `referrerPolicy` attribute.
    /// [`HTMLImageElement.referrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/referrerPolicy)
    void referrerPolicy(const jsbind::String& value);
    /// Getter of the `decoding` attribute.
    /// [`HTMLImageElement.decoding`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/decoding)
    [[nodiscard]] jsbind::String decoding() const;
    /// Setter of the `decoding` attribute.
    /// [`HTMLImageElement.decoding`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/decoding)
    void decoding(const jsbind::String& value);
    /// Getter of the `loading` attribute.
    /// [`HTMLImageElement.loading`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/loading)
    [[nodiscard]] jsbind::String loading() const;
    /// Setter of the `loading` attribute.
    /// [`HTMLImageElement.loading`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/loading)
    void loading(const jsbind::String& value);
    /// Getter of the `fetchPriority` attribute.
    /// [`HTMLImageElement.fetchPriority`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/fetchPriority)
    [[nodiscard]] jsbind::String fetchPriority() const;
    /// Setter of the `fetchPriority` attribute.
    /// [`HTMLImageElement.fetchPriority`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/fetchPriority)
    void fetchPriority(const jsbind::String& value);
    /// The decode method.
    /// [`HTMLImageElement.decode`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/decode)
    jsbind::Promise<jsbind::Undefined> decode();
    /// Getter of the `x` attribute.
    /// [`HTMLImageElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/x)
    [[nodiscard]] long x() const;
    /// Getter of the `y` attribute.
    /// [`HTMLImageElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/y)
    [[nodiscard]] long y() const;
    /// Getter of the `name` attribute.
    /// [`HTMLImageElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLImageElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `lowsrc` attribute.
    /// [`HTMLImageElement.lowsrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/lowsrc)
    [[nodiscard]] jsbind::String lowsrc() const;
    /// Setter of the `lowsrc` attribute.
    /// [`HTMLImageElement.lowsrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/lowsrc)
    void lowsrc(const jsbind::String& value);
    /// Getter of the `align` attribute.
    /// [`HTMLImageElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLImageElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `hspace` attribute.
    /// [`HTMLImageElement.hspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/hspace)
    [[nodiscard]] unsigned long hspace() const;
    /// Setter of the `hspace` attribute.
    /// [`HTMLImageElement.hspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/hspace)
    void hspace(unsigned long value);
    /// Getter of the `vspace` attribute.
    /// [`HTMLImageElement.vspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/vspace)
    [[nodiscard]] unsigned long vspace() const;
    /// Setter of the `vspace` attribute.
    /// [`HTMLImageElement.vspace`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/vspace)
    void vspace(unsigned long value);
    /// Getter of the `longDesc` attribute.
    /// [`HTMLImageElement.longDesc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/longDesc)
    [[nodiscard]] jsbind::String longDesc() const;
    /// Setter of the `longDesc` attribute.
    /// [`HTMLImageElement.longDesc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/longDesc)
    void longDesc(const jsbind::String& value);
    /// Getter of the `border` attribute.
    /// [`HTMLImageElement.border`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/border)
    [[nodiscard]] jsbind::String border() const;
    /// Setter of the `border` attribute.
    /// [`HTMLImageElement.border`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/border)
    void border(const jsbind::String& value);
    /// Getter of the `attributionSrc` attribute.
    /// [`HTMLImageElement.attributionSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/attributionSrc)
    [[nodiscard]] jsbind::String attributionSrc() const;
    /// Setter of the `attributionSrc` attribute.
    /// [`HTMLImageElement.attributionSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/attributionSrc)
    void attributionSrc(const jsbind::String& value);
    /// Getter of the `sharedStorageWritable` attribute.
    /// [`HTMLImageElement.sharedStorageWritable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/sharedStorageWritable)
    [[nodiscard]] bool sharedStorageWritable() const;
    /// Setter of the `sharedStorageWritable` attribute.
    /// [`HTMLImageElement.sharedStorageWritable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement/sharedStorageWritable)
    void sharedStorageWritable(bool value);
};

