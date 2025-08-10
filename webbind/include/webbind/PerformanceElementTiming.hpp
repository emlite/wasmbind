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
    /// Getter of the `renderTime` attribute.
    /// [`PerformanceElementTiming.renderTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/renderTime)
    [[nodiscard]] jsbind::Any renderTime() const;
    /// Getter of the `loadTime` attribute.
    /// [`PerformanceElementTiming.loadTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/loadTime)
    [[nodiscard]] jsbind::Any loadTime() const;
    /// Getter of the `intersectionRect` attribute.
    /// [`PerformanceElementTiming.intersectionRect`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/intersectionRect)
    [[nodiscard]] DOMRectReadOnly intersectionRect() const;
    /// Getter of the `identifier` attribute.
    /// [`PerformanceElementTiming.identifier`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/identifier)
    [[nodiscard]] jsbind::String identifier() const;
    /// Getter of the `naturalWidth` attribute.
    /// [`PerformanceElementTiming.naturalWidth`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/naturalWidth)
    [[nodiscard]] unsigned long naturalWidth() const;
    /// Getter of the `naturalHeight` attribute.
    /// [`PerformanceElementTiming.naturalHeight`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/naturalHeight)
    [[nodiscard]] unsigned long naturalHeight() const;
    /// Getter of the `id` attribute.
    /// [`PerformanceElementTiming.id`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `element` attribute.
    /// [`PerformanceElementTiming.element`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/element)
    [[nodiscard]] Element element() const;
    /// Getter of the `url` attribute.
    /// [`PerformanceElementTiming.url`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/url)
    [[nodiscard]] jsbind::String url() const;
    /// The toJSON method.
    /// [`PerformanceElementTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/toJSON)
    jsbind::Object toJSON();
    /// Getter of the `paintTime` attribute.
    /// [`PerformanceElementTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/paintTime)
    [[nodiscard]] jsbind::Any paintTime() const;
    /// Getter of the `presentationTime` attribute.
    /// [`PerformanceElementTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceElementTiming/presentationTime)
    [[nodiscard]] jsbind::Any presentationTime() const;
};

} // namespace webbind