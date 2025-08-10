#include <webbind/PictureInPictureEvent.hpp>
#include <webbind/PictureInPictureEventInit.hpp>
#include <webbind/PictureInPictureWindow.hpp>

namespace webbind {

PictureInPictureEvent PictureInPictureEvent::take_ownership(Handle h) noexcept {
    return PictureInPictureEvent(h);
}

PictureInPictureEvent PictureInPictureEvent::clone() const noexcept { return *this; }

emlite::Val PictureInPictureEvent::instance() noexcept { return emlite::Val::global("PictureInPictureEvent"); }

PictureInPictureEvent::PictureInPictureEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

PictureInPictureEvent::PictureInPictureEvent(const emlite::Val &val) noexcept: Event(val) {}

PictureInPictureEvent::PictureInPictureEvent(const jsbind::String& type, const PictureInPictureEventInit& eventInitDict) : Event(emlite::Val::global("PictureInPictureEvent").new_(type, eventInitDict)) {}

PictureInPictureWindow PictureInPictureEvent::pictureInPictureWindow() const {
    return Event::get("pictureInPictureWindow").as<PictureInPictureWindow>();
}


} // namespace webbind