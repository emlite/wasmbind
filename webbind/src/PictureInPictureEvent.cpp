#include <webbind/PictureInPictureEvent.hpp>
#include <webbind/PictureInPictureWindow.hpp>


PictureInPictureEvent PictureInPictureEvent::take_ownership(Handle h) noexcept {
        return PictureInPictureEvent(h);
    }
PictureInPictureEvent PictureInPictureEvent::clone() const noexcept { return *this; }
PictureInPictureEvent::PictureInPictureEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PictureInPictureEvent::PictureInPictureEvent(const emlite::Val &val) noexcept: Event(val) {}


PictureInPictureEvent::PictureInPictureEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("PictureInPictureEvent").new_(type, eventInitDict)) {}

PictureInPictureWindow PictureInPictureEvent::pictureInPictureWindow() const {
    return Event::get("pictureInPictureWindow").as<PictureInPictureWindow>();
}

