#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "ImageEncodeOptions.hpp"
#include "enums.hpp"

namespace webbind {

class ImageBitmap;
class Blob;

/// Interface OffscreenCanvas
/// [`OffscreenCanvas`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas)
class OffscreenCanvas : public EventTarget {
    explicit OffscreenCanvas(Handle h) noexcept;
public:
    explicit OffscreenCanvas(const emlite::Val &val) noexcept;
    static OffscreenCanvas take_ownership(Handle h) noexcept;
    [[nodiscard]] OffscreenCanvas clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new OffscreenCanvas(..)` constructor, creating a new OffscreenCanvas instance
    OffscreenCanvas(long long width, long long height);
    /// Getter of the `width` attribute.
    /// [`OffscreenCanvas.width`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/width)
    [[nodiscard]] long long width() const;
    /// Setter of the `width` attribute.
    /// [`OffscreenCanvas.width`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/width)
    void width(long long value);
    /// Getter of the `height` attribute.
    /// [`OffscreenCanvas.height`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/height)
    [[nodiscard]] long long height() const;
    /// Setter of the `height` attribute.
    /// [`OffscreenCanvas.height`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/height)
    void height(long long value);
    /// The getContext method.
    /// [`OffscreenCanvas.getContext`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/getContext)
    jsbind::Any getContext(const OffscreenRenderingContextId& contextId);
    /// The getContext method.
    /// [`OffscreenCanvas.getContext`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/getContext)
    jsbind::Any getContext(const OffscreenRenderingContextId& contextId, const jsbind::Any& options);
    /// The transferToImageBitmap method.
    /// [`OffscreenCanvas.transferToImageBitmap`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/transferToImageBitmap)
    ImageBitmap transferToImageBitmap();
    /// The convertToBlob method.
    /// [`OffscreenCanvas.convertToBlob`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/convertToBlob)
    jsbind::Promise<Blob> convertToBlob();
    /// The convertToBlob method.
    /// [`OffscreenCanvas.convertToBlob`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/convertToBlob)
    jsbind::Promise<Blob> convertToBlob(const ImageEncodeOptions& options);
    /// Getter of the `oncontextlost` attribute.
    /// [`OffscreenCanvas.oncontextlost`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/oncontextlost)
    [[nodiscard]] jsbind::Any oncontextlost() const;
    /// Setter of the `oncontextlost` attribute.
    /// [`OffscreenCanvas.oncontextlost`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/oncontextlost)
    void oncontextlost(const jsbind::Any& value);
    /// Getter of the `oncontextrestored` attribute.
    /// [`OffscreenCanvas.oncontextrestored`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/oncontextrestored)
    [[nodiscard]] jsbind::Any oncontextrestored() const;
    /// Setter of the `oncontextrestored` attribute.
    /// [`OffscreenCanvas.oncontextrestored`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvas/oncontextrestored)
    void oncontextrestored(const jsbind::Any& value);
};

} // namespace webbind