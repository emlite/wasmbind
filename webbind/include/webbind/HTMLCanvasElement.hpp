#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class OffscreenCanvas;
class MediaStream;


/// The HTMLCanvasElement class.
/// [`HTMLCanvasElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement)
class HTMLCanvasElement : public HTMLElement {
    explicit HTMLCanvasElement(Handle h) noexcept;

public:
    explicit HTMLCanvasElement(const emlite::Val &val) noexcept;
    static HTMLCanvasElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLCanvasElement clone() const noexcept;
    /// The `new HTMLCanvasElement(..)` constructor, creating a new HTMLCanvasElement instance
    HTMLCanvasElement();
    /// Getter of the `width` attribute.
    /// [`HTMLCanvasElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/width)
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLCanvasElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/width)
    void width(unsigned long value);
    /// Getter of the `height` attribute.
    /// [`HTMLCanvasElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/height)
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLCanvasElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/height)
    void height(unsigned long value);
    /// The getContext method.
    /// [`HTMLCanvasElement.getContext`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/getContext)
    jsbind::Any getContext(const jsbind::String& contextId);
    /// The getContext method.
    /// [`HTMLCanvasElement.getContext`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/getContext)
    jsbind::Any getContext(const jsbind::String& contextId, const jsbind::Any& options);
    /// The toDataURL method.
    /// [`HTMLCanvasElement.toDataURL`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/toDataURL)
    jsbind::String toDataURL();
    /// The toDataURL method.
    /// [`HTMLCanvasElement.toDataURL`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/toDataURL)
    jsbind::String toDataURL(const jsbind::String& type);
    /// The toDataURL method.
    /// [`HTMLCanvasElement.toDataURL`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/toDataURL)
    jsbind::String toDataURL(const jsbind::String& type, const jsbind::Any& quality);
    /// The toBlob method.
    /// [`HTMLCanvasElement.toBlob`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/toBlob)
    jsbind::Undefined toBlob(const jsbind::Function& callback);
    /// The toBlob method.
    /// [`HTMLCanvasElement.toBlob`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/toBlob)
    jsbind::Undefined toBlob(const jsbind::Function& callback, const jsbind::String& type);
    /// The toBlob method.
    /// [`HTMLCanvasElement.toBlob`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/toBlob)
    jsbind::Undefined toBlob(const jsbind::Function& callback, const jsbind::String& type, const jsbind::Any& quality);
    /// The transferControlToOffscreen method.
    /// [`HTMLCanvasElement.transferControlToOffscreen`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/transferControlToOffscreen)
    OffscreenCanvas transferControlToOffscreen();
    /// The captureStream method.
    /// [`HTMLCanvasElement.captureStream`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/captureStream)
    MediaStream captureStream();
    /// The captureStream method.
    /// [`HTMLCanvasElement.captureStream`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/captureStream)
    MediaStream captureStream(double frameRequestRate);
};

