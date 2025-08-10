#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

class DOMRectReadOnly;
class Element;

/// Interface PerformanceElementTiming
/// [`PerformanceElementTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming)
class PerformanceElementTiming : public PerformanceEntry {
    explicit PerformanceElementTiming(Handle h) noexcept;
public:
    explicit PerformanceElementTiming(const emlite::Val &val) noexcept;
    static PerformanceElementTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceElementTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceElementTiming.renderTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/renderTime)
    /// [`PerformanceElementTiming.renderTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/renderTime)
    [[nodiscard]] jsbind::Any renderTime() const;
    /// [`PerformanceElementTiming.loadTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/loadTime)
    /// [`PerformanceElementTiming.loadTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/loadTime)
    [[nodiscard]] jsbind::Any loadTime() const;
    /// [`PerformanceElementTiming.intersectionRect`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/intersectionRect)
    /// [`PerformanceElementTiming.intersectionRect`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/intersectionRect)
    [[nodiscard]] DOMRectReadOnly intersectionRect() const;
    /// [`PerformanceElementTiming.identifier`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/identifier)
    /// [`PerformanceElementTiming.identifier`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/identifier)
    [[nodiscard]] jsbind::String identifier() const;
    /// [`PerformanceElementTiming.naturalWidth`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/naturalWidth)
    /// [`PerformanceElementTiming.naturalWidth`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/naturalWidth)
    [[nodiscard]] unsigned long naturalWidth() const;
    /// [`PerformanceElementTiming.naturalHeight`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/naturalHeight)
    /// [`PerformanceElementTiming.naturalHeight`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/naturalHeight)
    [[nodiscard]] unsigned long naturalHeight() const;
    /// [`PerformanceElementTiming.id`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/id)
    /// [`PerformanceElementTiming.id`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`PerformanceElementTiming.element`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/element)
    /// [`PerformanceElementTiming.element`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/element)
    [[nodiscard]] Element element() const;
    /// [`PerformanceElementTiming.url`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/url)
    /// [`PerformanceElementTiming.url`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/url)
    [[nodiscard]] jsbind::String url() const;
    /// The toJSON method.
    /// [`PerformanceElementTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/toJSON)
    jsbind::Object toJSON();
    /// [`PerformanceElementTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/paintTime)
    /// [`PerformanceElementTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/paintTime)
    [[nodiscard]] jsbind::Any paintTime() const;
    /// [`PerformanceElementTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/presentationTime)
    /// [`PerformanceElementTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/presentationTime)
    [[nodiscard]] jsbind::Any presentationTime() const;
};

} // namespace webbind