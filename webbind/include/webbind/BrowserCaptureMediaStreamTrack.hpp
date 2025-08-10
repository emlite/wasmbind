#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaStreamTrack.hpp"

namespace webbind {

class CropTarget;
class BrowserCaptureMediaStreamTrack;
class RestrictionTarget;

/// Interface BrowserCaptureMediaStreamTrack
/// [`BrowserCaptureMediaStreamTrack`](https://developer.mozilla.org/en-US/docs/Web/API/BrowserCaptureMediaStreamTrack)
class BrowserCaptureMediaStreamTrack : public MediaStreamTrack {
    explicit BrowserCaptureMediaStreamTrack(Handle h) noexcept;
public:
    explicit BrowserCaptureMediaStreamTrack(const emlite::Val &val) noexcept;
    static BrowserCaptureMediaStreamTrack take_ownership(Handle h) noexcept;
    [[nodiscard]] BrowserCaptureMediaStreamTrack clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The cropTo method.
    /// [`BrowserCaptureMediaStreamTrack.cropTo`](https://developer.mozilla.org/en-US/docs/Web/API/BrowserCaptureMediaStreamTrack/cropTo)
    jsbind::Promise<jsbind::Undefined> cropTo(const CropTarget& cropTarget);
    /// The clone method.
    /// [`BrowserCaptureMediaStreamTrack.clone`](https://developer.mozilla.org/en-US/docs/Web/API/BrowserCaptureMediaStreamTrack/clone)
    BrowserCaptureMediaStreamTrack clone();
    /// The restrictTo method.
    /// [`BrowserCaptureMediaStreamTrack.restrictTo`](https://developer.mozilla.org/en-US/docs/Web/API/BrowserCaptureMediaStreamTrack/restrictTo)
    jsbind::Promise<jsbind::Undefined> restrictTo(const RestrictionTarget& RestrictionTarget);
};

} // namespace webbind