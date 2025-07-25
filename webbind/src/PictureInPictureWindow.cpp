#include <webbind/PictureInPictureWindow.hpp>


PictureInPictureWindow PictureInPictureWindow::take_ownership(Handle h) noexcept {
        return PictureInPictureWindow(h);
    }
PictureInPictureWindow PictureInPictureWindow::clone() const noexcept { return *this; }
PictureInPictureWindow::PictureInPictureWindow(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PictureInPictureWindow::PictureInPictureWindow(const emlite::Val &val) noexcept: EventTarget(val) {}


long PictureInPictureWindow::width() const {
    return EventTarget::get("width").as<long>();
}

long PictureInPictureWindow::height() const {
    return EventTarget::get("height").as<long>();
}

jsbind::Any PictureInPictureWindow::onresize() const {
    return EventTarget::get("onresize").as<jsbind::Any>();
}

void PictureInPictureWindow::onresize(const jsbind::Any& value) {
    EventTarget::set("onresize", value);
}

