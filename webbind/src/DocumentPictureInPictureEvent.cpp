#include <webbind/DocumentPictureInPictureEvent.hpp>
#include <webbind/Window.hpp>


DocumentPictureInPictureEvent DocumentPictureInPictureEvent::take_ownership(Handle h) noexcept {
        return DocumentPictureInPictureEvent(h);
    }
DocumentPictureInPictureEvent DocumentPictureInPictureEvent::clone() const noexcept { return *this; }
DocumentPictureInPictureEvent::DocumentPictureInPictureEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
DocumentPictureInPictureEvent::DocumentPictureInPictureEvent(const emlite::Val &val) noexcept: Event(val) {}


DocumentPictureInPictureEvent::DocumentPictureInPictureEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("DocumentPictureInPictureEvent").new_(type, eventInitDict)) {}

Window DocumentPictureInPictureEvent::window() const {
    return Event::get("window").as<Window>();
}

