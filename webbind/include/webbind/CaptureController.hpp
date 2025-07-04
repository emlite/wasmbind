#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class HTMLElement;


class CaptureController : public EventTarget {
    explicit CaptureController(Handle h) noexcept;

public:
    explicit CaptureController(const emlite::Val &val) noexcept;
    static CaptureController take_ownership(Handle h) noexcept;

    CaptureController clone() const noexcept;
    CaptureController();
    jsbind::Undefined setFocusBehavior(const CaptureStartFocusBehavior& focusBehavior);
    jsbind::Any oncapturedmousechange() const;
    void oncapturedmousechange(const jsbind::Any& value);
    jsbind::Sequence<long> getSupportedZoomLevels();
    long zoomLevel() const;
    jsbind::Promise increaseZoomLevel();
    jsbind::Promise decreaseZoomLevel();
    jsbind::Promise resetZoomLevel();
    jsbind::Any onzoomlevelchange() const;
    void onzoomlevelchange(const jsbind::Any& value);
    jsbind::Promise forwardWheel(const HTMLElement& element);
};

