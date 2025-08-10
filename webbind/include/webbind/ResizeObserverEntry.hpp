#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Element;
class DOMRectReadOnly;
class ResizeObserverSize;

/// Interface ResizeObserverEntry
/// [`ResizeObserverEntry`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry)
class ResizeObserverEntry : public emlite::Val {
    explicit ResizeObserverEntry(Handle h) noexcept;
public:
    explicit ResizeObserverEntry(const emlite::Val &val) noexcept;
    static ResizeObserverEntry take_ownership(Handle h) noexcept;
    [[nodiscard]] ResizeObserverEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ResizeObserverEntry.target`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/target)
    /// [`ResizeObserverEntry.target`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/target)
    [[nodiscard]] Element target() const;
    /// [`ResizeObserverEntry.contentRect`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/contentRect)
    /// [`ResizeObserverEntry.contentRect`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/contentRect)
    [[nodiscard]] DOMRectReadOnly contentRect() const;
    /// [`ResizeObserverEntry.borderBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/borderBoxSize)
    /// [`ResizeObserverEntry.borderBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/borderBoxSize)
    [[nodiscard]] jsbind::TypedArray<ResizeObserverSize> borderBoxSize() const;
    /// [`ResizeObserverEntry.contentBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/contentBoxSize)
    /// [`ResizeObserverEntry.contentBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/contentBoxSize)
    [[nodiscard]] jsbind::TypedArray<ResizeObserverSize> contentBoxSize() const;
    /// [`ResizeObserverEntry.devicePixelContentBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/devicePixelContentBoxSize)
    /// [`ResizeObserverEntry.devicePixelContentBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/devicePixelContentBoxSize)
    [[nodiscard]] jsbind::TypedArray<ResizeObserverSize> devicePixelContentBoxSize() const;
};

} // namespace webbind