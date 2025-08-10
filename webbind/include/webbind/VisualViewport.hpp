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
    /// [`VisualViewport.offsetLeft`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/offsetLeft)
    /// [`VisualViewport.offsetLeft`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/offsetLeft)
    [[nodiscard]] double offsetLeft() const;
    /// [`VisualViewport.offsetTop`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/offsetTop)
    /// [`VisualViewport.offsetTop`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/offsetTop)
    [[nodiscard]] double offsetTop() const;
    /// [`VisualViewport.pageLeft`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/pageLeft)
    /// [`VisualViewport.pageLeft`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/pageLeft)
    [[nodiscard]] double pageLeft() const;
    /// [`VisualViewport.pageTop`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/pageTop)
    /// [`VisualViewport.pageTop`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/pageTop)
    [[nodiscard]] double pageTop() const;
    /// [`VisualViewport.width`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/width)
    /// [`VisualViewport.width`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/width)
    [[nodiscard]] double width() const;
    /// [`VisualViewport.height`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/height)
    /// [`VisualViewport.height`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/height)
    [[nodiscard]] double height() const;
    /// [`VisualViewport.scale`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/scale)
    /// [`VisualViewport.scale`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/scale)
    [[nodiscard]] double scale() const;
    /// [`VisualViewport.onresize`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onresize)
    /// [`VisualViewport.onresize`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onresize)
    [[nodiscard]] jsbind::Any onresize() const;
    /// Setter of the `onresize` attribute.
    /// [`VisualViewport.onresize`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onresize)
    void onresize(const jsbind::Any& value);
    /// [`VisualViewport.onscroll`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscroll)
    /// [`VisualViewport.onscroll`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscroll)
    [[nodiscard]] jsbind::Any onscroll() const;
    /// Setter of the `onscroll` attribute.
    /// [`VisualViewport.onscroll`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscroll)
    void onscroll(const jsbind::Any& value);
    /// [`VisualViewport.onscrollend`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscrollend)
    /// [`VisualViewport.onscrollend`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscrollend)
    [[nodiscard]] jsbind::Any onscrollend() const;
    /// Setter of the `onscrollend` attribute.
    /// [`VisualViewport.onscrollend`](https://developer.mozilla.org/en-US/docs/Web/API/VisualViewport/onscrollend)
    void onscrollend(const jsbind::Any& value);
};

} // namespace webbind