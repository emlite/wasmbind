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
    /// Getter of the `target` attribute.
    /// [`ResizeObserverEntry.target`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/target)
    [[nodiscard]] Element target() const;
    /// Getter of the `contentRect` attribute.
    /// [`ResizeObserverEntry.contentRect`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/contentRect)
    [[nodiscard]] DOMRectReadOnly contentRect() const;
    /// Getter of the `borderBoxSize` attribute.
    /// [`ResizeObserverEntry.borderBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/borderBoxSize)
    [[nodiscard]] jsbind::TypedArray<ResizeObserverSize> borderBoxSize() const;
    /// Getter of the `contentBoxSize` attribute.
    /// [`ResizeObserverEntry.contentBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/contentBoxSize)
    [[nodiscard]] jsbind::TypedArray<ResizeObserverSize> contentBoxSize() const;
    /// Getter of the `devicePixelContentBoxSize` attribute.
    /// [`ResizeObserverEntry.devicePixelContentBoxSize`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverEntry/devicePixelContentBoxSize)
    [[nodiscard]] jsbind::TypedArray<ResizeObserverSize> devicePixelContentBoxSize() const;
};

} // namespace webbind