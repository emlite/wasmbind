#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaStreamTrack.hpp"

namespace webbind {

class HTMLCanvasElement;

/// Interface CanvasCaptureMediaStreamTrack
/// [`CanvasCaptureMediaStreamTrack`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasCaptureMediaStreamTrack)
class CanvasCaptureMediaStreamTrack : public MediaStreamTrack {
    explicit CanvasCaptureMediaStreamTrack(Handle h) noexcept;
public:
    explicit CanvasCaptureMediaStreamTrack(const emlite::Val &val) noexcept;
    static CanvasCaptureMediaStreamTrack take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasCaptureMediaStreamTrack clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `canvas` attribute.
    /// [`CanvasCaptureMediaStreamTrack.canvas`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasCaptureMediaStreamTrack/canvas)
    [[nodiscard]] HTMLCanvasElement canvas() const;
    /// The requestFrame method.
    /// [`CanvasCaptureMediaStreamTrack.requestFrame`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasCaptureMediaStreamTrack/requestFrame)
    jsbind::Undefined requestFrame();
};

} // namespace webbind