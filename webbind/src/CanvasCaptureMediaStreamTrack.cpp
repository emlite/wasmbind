#include <webbind/CanvasCaptureMediaStreamTrack.hpp>
#include <webbind/HTMLCanvasElement.hpp>


CanvasCaptureMediaStreamTrack CanvasCaptureMediaStreamTrack::take_ownership(Handle h) noexcept {
        return CanvasCaptureMediaStreamTrack(h);
    }
CanvasCaptureMediaStreamTrack CanvasCaptureMediaStreamTrack::clone() const noexcept { return *this; }
emlite::Val CanvasCaptureMediaStreamTrack::instance() noexcept { return emlite::Val::global("CanvasCaptureMediaStreamTrack"); }
CanvasCaptureMediaStreamTrack::CanvasCaptureMediaStreamTrack(Handle h) noexcept : MediaStreamTrack(emlite::Val::take_ownership(h)) {}
CanvasCaptureMediaStreamTrack::CanvasCaptureMediaStreamTrack(const emlite::Val &val) noexcept: MediaStreamTrack(val) {}


HTMLCanvasElement CanvasCaptureMediaStreamTrack::canvas() const {
    return MediaStreamTrack::get("canvas").as<HTMLCanvasElement>();
}

jsbind::Undefined CanvasCaptureMediaStreamTrack::requestFrame() {
    return MediaStreamTrack::call("requestFrame").as<jsbind::Undefined>();
}

