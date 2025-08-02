#include <webbind/BrowserCaptureMediaStreamTrack.hpp>
#include <webbind/CropTarget.hpp>
#include <webbind/RestrictionTarget.hpp>


BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack::take_ownership(Handle h) noexcept {
        return BrowserCaptureMediaStreamTrack(h);
    }
BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack::clone() const noexcept { return *this; }
emlite::Val BrowserCaptureMediaStreamTrack::instance() noexcept { return emlite::Val::global("BrowserCaptureMediaStreamTrack"); }
BrowserCaptureMediaStreamTrack::BrowserCaptureMediaStreamTrack(Handle h) noexcept : MediaStreamTrack(emlite::Val::take_ownership(h)) {}
BrowserCaptureMediaStreamTrack::BrowserCaptureMediaStreamTrack(const emlite::Val &val) noexcept: MediaStreamTrack(val) {}


jsbind::Promise<jsbind::Undefined> BrowserCaptureMediaStreamTrack::cropTo(const CropTarget& cropTarget) {
    return MediaStreamTrack::call("cropTo", cropTarget).as<jsbind::Promise<jsbind::Undefined>>();
}

BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack::clone() {
    return MediaStreamTrack::call("clone").as<BrowserCaptureMediaStreamTrack>();
}

jsbind::Promise<jsbind::Undefined> BrowserCaptureMediaStreamTrack::restrictTo(const RestrictionTarget& RestrictionTarget) {
    return MediaStreamTrack::call("restrictTo", RestrictionTarget).as<jsbind::Promise<jsbind::Undefined>>();
}

