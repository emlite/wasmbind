#include <webbind/HTMLVideoElement.hpp>
#include <webbind/VideoPlaybackQuality.hpp>
#include <webbind/PictureInPictureWindow.hpp>

namespace webbind {

HTMLVideoElement HTMLVideoElement::take_ownership(Handle h) noexcept {
        return HTMLVideoElement(h);
    }
HTMLVideoElement HTMLVideoElement::clone() const noexcept { return *this; }
emlite::Val HTMLVideoElement::instance() noexcept { return emlite::Val::global("HTMLVideoElement"); }
HTMLVideoElement::HTMLVideoElement(Handle h) noexcept : HTMLMediaElement(emlite::Val::take_ownership(h)) {}
HTMLVideoElement::HTMLVideoElement(const emlite::Val &val) noexcept: HTMLMediaElement(val) {}

HTMLVideoElement::HTMLVideoElement() : HTMLMediaElement(emlite::Val::global("HTMLVideoElement").new_()) {}

unsigned long HTMLVideoElement::width() const {
    return HTMLMediaElement::get("width").as<unsigned long>();
}

void HTMLVideoElement::width(unsigned long value) {
    HTMLMediaElement::set("width", value);
}

unsigned long HTMLVideoElement::height() const {
    return HTMLMediaElement::get("height").as<unsigned long>();
}

void HTMLVideoElement::height(unsigned long value) {
    HTMLMediaElement::set("height", value);
}

unsigned long HTMLVideoElement::videoWidth() const {
    return HTMLMediaElement::get("videoWidth").as<unsigned long>();
}

unsigned long HTMLVideoElement::videoHeight() const {
    return HTMLMediaElement::get("videoHeight").as<unsigned long>();
}

jsbind::String HTMLVideoElement::poster() const {
    return HTMLMediaElement::get("poster").as<jsbind::String>();
}

void HTMLVideoElement::poster(const jsbind::String& value) {
    HTMLMediaElement::set("poster", value);
}

bool HTMLVideoElement::playsInline() const {
    return HTMLMediaElement::get("playsInline").as<bool>();
}

void HTMLVideoElement::playsInline(bool value) {
    HTMLMediaElement::set("playsInline", value);
}

VideoPlaybackQuality HTMLVideoElement::getVideoPlaybackQuality() {
    return HTMLMediaElement::call("getVideoPlaybackQuality").as<VideoPlaybackQuality>();
}

jsbind::Promise<PictureInPictureWindow> HTMLVideoElement::requestPictureInPicture() {
    return HTMLMediaElement::call("requestPictureInPicture").as<jsbind::Promise<PictureInPictureWindow>>();
}

jsbind::Any HTMLVideoElement::onenterpictureinpicture() const {
    return HTMLMediaElement::get("onenterpictureinpicture").as<jsbind::Any>();
}

void HTMLVideoElement::onenterpictureinpicture(const jsbind::Any& value) {
    HTMLMediaElement::set("onenterpictureinpicture", value);
}

jsbind::Any HTMLVideoElement::onleavepictureinpicture() const {
    return HTMLMediaElement::get("onleavepictureinpicture").as<jsbind::Any>();
}

void HTMLVideoElement::onleavepictureinpicture(const jsbind::Any& value) {
    HTMLMediaElement::set("onleavepictureinpicture", value);
}

bool HTMLVideoElement::disablePictureInPicture() const {
    return HTMLMediaElement::get("disablePictureInPicture").as<bool>();
}

void HTMLVideoElement::disablePictureInPicture(bool value) {
    HTMLMediaElement::set("disablePictureInPicture", value);
}

unsigned long HTMLVideoElement::requestVideoFrameCallback(const jsbind::Function& callback) {
    return HTMLMediaElement::call("requestVideoFrameCallback", callback).as<unsigned long>();
}

jsbind::Undefined HTMLVideoElement::cancelVideoFrameCallback(unsigned long handle) {
    return HTMLMediaElement::call("cancelVideoFrameCallback", handle).as<jsbind::Undefined>();
}


} // namespace webbind