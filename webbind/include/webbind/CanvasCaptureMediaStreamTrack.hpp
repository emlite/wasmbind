#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MediaStreamTrack.hpp"
#include "enums.hpp"

class HTMLCanvasElement;


class CanvasCaptureMediaStreamTrack : public MediaStreamTrack {
    explicit CanvasCaptureMediaStreamTrack(Handle h) noexcept;

public:
    explicit CanvasCaptureMediaStreamTrack(const emlite::Val &val) noexcept;
    static CanvasCaptureMediaStreamTrack take_ownership(Handle h) noexcept;

    CanvasCaptureMediaStreamTrack clone() const noexcept;
    HTMLCanvasElement canvas() const;
    jsbind::Undefined requestFrame();
};

