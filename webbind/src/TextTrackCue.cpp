#include "webbind/TextTrackCue.hpp"
#include "webbind/TextTrack.hpp"

namespace webbind {

TextTrackCue TextTrackCue::take_ownership(Handle h) noexcept {
        return TextTrackCue(h);
    }
TextTrackCue TextTrackCue::clone() const noexcept { return *this; }
emlite::Val TextTrackCue::instance() noexcept { return emlite::Val::global("TextTrackCue"); }
TextTrackCue::TextTrackCue(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
TextTrackCue::TextTrackCue(const emlite::Val &val) noexcept: EventTarget(val) {}

TextTrack TextTrackCue::track() const {
    return EventTarget::get("track").as<TextTrack>();
}

jsbind::String TextTrackCue::id() const {
    return EventTarget::get("id").as<jsbind::String>();
}

void TextTrackCue::id(const jsbind::String& value) {
    EventTarget::set("id", value);
}

double TextTrackCue::startTime() const {
    return EventTarget::get("startTime").as<double>();
}

void TextTrackCue::startTime(double value) {
    EventTarget::set("startTime", value);
}

double TextTrackCue::endTime() const {
    return EventTarget::get("endTime").as<double>();
}

void TextTrackCue::endTime(double value) {
    EventTarget::set("endTime", value);
}

bool TextTrackCue::pauseOnExit() const {
    return EventTarget::get("pauseOnExit").as<bool>();
}

void TextTrackCue::pauseOnExit(bool value) {
    EventTarget::set("pauseOnExit", value);
}

jsbind::Any TextTrackCue::onenter() const {
    return EventTarget::get("onenter").as<jsbind::Any>();
}

void TextTrackCue::onenter(const jsbind::Any& value) {
    EventTarget::set("onenter", value);
}

jsbind::Any TextTrackCue::onexit() const {
    return EventTarget::get("onexit").as<jsbind::Any>();
}

void TextTrackCue::onexit(const jsbind::Any& value) {
    EventTarget::set("onexit", value);
}


} // namespace webbind