#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class HTMLElement;

/// Interface CaptureController
/// [`CaptureController`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController)
class CaptureController : public EventTarget {
    explicit CaptureController(Handle h) noexcept;
public:
    explicit CaptureController(const emlite::Val &val) noexcept;
    static CaptureController take_ownership(Handle h) noexcept;
    [[nodiscard]] CaptureController clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CaptureController(..)` constructor, creating a new CaptureController instance
    CaptureController();
    /// The setFocusBehavior method.
    /// [`CaptureController.setFocusBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/setFocusBehavior)
    jsbind::Undefined setFocusBehavior(const CaptureStartFocusBehavior& focusBehavior);
    /// Getter of the `oncapturedmousechange` attribute.
    /// [`CaptureController.oncapturedmousechange`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/oncapturedmousechange)
    [[nodiscard]] jsbind::Any oncapturedmousechange() const;
    /// Setter of the `oncapturedmousechange` attribute.
    /// [`CaptureController.oncapturedmousechange`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/oncapturedmousechange)
    void oncapturedmousechange(const jsbind::Any& value);
    /// The getSupportedZoomLevels method.
    /// [`CaptureController.getSupportedZoomLevels`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/getSupportedZoomLevels)
    jsbind::TypedArray<long> getSupportedZoomLevels();
    /// Getter of the `zoomLevel` attribute.
    /// [`CaptureController.zoomLevel`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/zoomLevel)
    [[nodiscard]] long zoomLevel() const;
    /// The increaseZoomLevel method.
    /// [`CaptureController.increaseZoomLevel`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/increaseZoomLevel)
    jsbind::Promise<jsbind::Undefined> increaseZoomLevel();
    /// The decreaseZoomLevel method.
    /// [`CaptureController.decreaseZoomLevel`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/decreaseZoomLevel)
    jsbind::Promise<jsbind::Undefined> decreaseZoomLevel();
    /// The resetZoomLevel method.
    /// [`CaptureController.resetZoomLevel`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/resetZoomLevel)
    jsbind::Promise<jsbind::Undefined> resetZoomLevel();
    /// Getter of the `onzoomlevelchange` attribute.
    /// [`CaptureController.onzoomlevelchange`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/onzoomlevelchange)
    [[nodiscard]] jsbind::Any onzoomlevelchange() const;
    /// Setter of the `onzoomlevelchange` attribute.
    /// [`CaptureController.onzoomlevelchange`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/onzoomlevelchange)
    void onzoomlevelchange(const jsbind::Any& value);
    /// The forwardWheel method.
    /// [`CaptureController.forwardWheel`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureController/forwardWheel)
    jsbind::Promise<jsbind::Undefined> forwardWheel(const HTMLElement& element);
};

} // namespace webbind