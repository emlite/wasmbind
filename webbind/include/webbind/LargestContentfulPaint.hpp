#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class Element;


/// The LargestContentfulPaint class.
/// [`LargestContentfulPaint`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint)
class LargestContentfulPaint : public PerformanceEntry {
    explicit LargestContentfulPaint(Handle h) noexcept;

public:
    explicit LargestContentfulPaint(const emlite::Val &val) noexcept;
    static LargestContentfulPaint take_ownership(Handle h) noexcept;

    [[nodiscard]] LargestContentfulPaint clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `loadTime` attribute.
    /// [`LargestContentfulPaint.loadTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/loadTime)
    [[nodiscard]] jsbind::Any loadTime() const;
    /// Getter of the `size` attribute.
    /// [`LargestContentfulPaint.size`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/size)
    [[nodiscard]] unsigned long size() const;
    /// Getter of the `id` attribute.
    /// [`LargestContentfulPaint.id`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `url` attribute.
    /// [`LargestContentfulPaint.url`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `element` attribute.
    /// [`LargestContentfulPaint.element`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/element)
    [[nodiscard]] Element element() const;
    /// The toJSON method.
    /// [`LargestContentfulPaint.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/toJSON)
    jsbind::Object toJSON();
    /// Getter of the `paintTime` attribute.
    /// [`LargestContentfulPaint.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/paintTime)
    [[nodiscard]] jsbind::Any paintTime() const;
    /// Getter of the `presentationTime` attribute.
    /// [`LargestContentfulPaint.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/LargestContentfulPaint/presentationTime)
    [[nodiscard]] jsbind::Any presentationTime() const;
};

