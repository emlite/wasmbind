#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

class Element;

/// Interface LargestContentfulPaint
/// [`LargestContentfulPaint`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint)
class LargestContentfulPaint : public PerformanceEntry {
    explicit LargestContentfulPaint(Handle h) noexcept;
public:
    explicit LargestContentfulPaint(const emlite::Val &val) noexcept;
    static LargestContentfulPaint take_ownership(Handle h) noexcept;
    [[nodiscard]] LargestContentfulPaint clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`LargestContentfulPaint.loadTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/loadTime)
    /// [`LargestContentfulPaint.loadTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/loadTime)
    [[nodiscard]] jsbind::Any loadTime() const;
    /// [`LargestContentfulPaint.renderTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/renderTime)
    /// [`LargestContentfulPaint.renderTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/renderTime)
    [[nodiscard]] jsbind::Any renderTime() const;
    /// [`LargestContentfulPaint.size`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/size)
    /// [`LargestContentfulPaint.size`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/size)
    [[nodiscard]] unsigned long size() const;
    /// [`LargestContentfulPaint.id`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/id)
    /// [`LargestContentfulPaint.id`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`LargestContentfulPaint.url`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/url)
    /// [`LargestContentfulPaint.url`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`LargestContentfulPaint.element`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/element)
    /// [`LargestContentfulPaint.element`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/element)
    [[nodiscard]] Element element() const;
    /// The toJSON method.
    /// [`LargestContentfulPaint.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/toJSON)
    jsbind::Object toJSON();
    /// [`LargestContentfulPaint.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/paintTime)
    /// [`LargestContentfulPaint.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/paintTime)
    [[nodiscard]] jsbind::Any paintTime() const;
    /// [`LargestContentfulPaint.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/presentationTime)
    /// [`LargestContentfulPaint.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/presentationTime)
    [[nodiscard]] jsbind::Any presentationTime() const;
};

} // namespace webbind