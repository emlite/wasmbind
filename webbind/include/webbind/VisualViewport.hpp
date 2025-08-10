#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface VisualViewport
/// [`VisualViewport`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport)
class VisualViewport : public EventTarget {
    explicit VisualViewport(Handle h) noexcept;
public:
    explicit VisualViewport(const emlite::Val &val) noexcept;
    static VisualViewport take_ownership(Handle h) noexcept;
    [[nodiscard]] VisualViewport clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `offsetLeft` attribute.
    /// [`VisualViewport.offsetLeft`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/offsetLeft)
    [[nodiscard]] double offsetLeft() const;
    /// Getter of the `offsetTop` attribute.
    /// [`VisualViewport.offsetTop`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/offsetTop)
    [[nodiscard]] double offsetTop() const;
    /// Getter of the `pageLeft` attribute.
    /// [`VisualViewport.pageLeft`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/pageLeft)
    [[nodiscard]] double pageLeft() const;
    /// Getter of the `pageTop` attribute.
    /// [`VisualViewport.pageTop`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/pageTop)
    [[nodiscard]] double pageTop() const;
    /// Getter of the `width` attribute.
    /// [`VisualViewport.width`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/width)
    [[nodiscard]] double width() const;
    /// Getter of the `height` attribute.
    /// [`VisualViewport.height`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/height)
    [[nodiscard]] double height() const;
    /// Getter of the `scale` attribute.
    /// [`VisualViewport.scale`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/scale)
    [[nodiscard]] double scale() const;
    /// Getter of the `onresize` attribute.
    /// [`VisualViewport.onresize`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onresize)
    [[nodiscard]] jsbind::Any onresize() const;
    /// Setter of the `onresize` attribute.
    /// [`VisualViewport.onresize`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onresize)
    void onresize(const jsbind::Any& value);
    /// Getter of the `onscroll` attribute.
    /// [`VisualViewport.onscroll`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscroll)
    [[nodiscard]] jsbind::Any onscroll() const;
    /// Setter of the `onscroll` attribute.
    /// [`VisualViewport.onscroll`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscroll)
    void onscroll(const jsbind::Any& value);
    /// Getter of the `onscrollend` attribute.
    /// [`VisualViewport.onscrollend`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscrollend)
    [[nodiscard]] jsbind::Any onscrollend() const;
    /// Setter of the `onscrollend` attribute.
    /// [`VisualViewport.onscrollend`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscrollend)
    void onscrollend(const jsbind::Any& value);
};

} // namespace webbind