#include "webbind/TextTrackList.hpp"
#include "webbind/TextTrack.hpp"

namespace webbind {

TextTrackList TextTrackList::take_ownership(Handle h) noexcept {
        return TextTrackList(h);
    }
TextTrackList TextTrackList::clone() const noexcept { return *this; }
emlite::Val TextTrackList::instance() noexcept { return emlite::Val::global("TextTrackList"); }
TextTrackList::TextTrackList(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
TextTrackList::TextTrackList(const emlite::Val &val) noexcept: EventTarget(val) {}

unsigned long TextTrackList::length() const {
    return EventTarget::get("length").as<unsigned long>();
}

TextTrack TextTrackList::getTrackById(const jsbind::String& id) {
    return EventTarget::call("getTrackById", id).as<TextTrack>();
}

jsbind::Any TextTrackList::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void TextTrackList::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

jsbind::Any TextTrackList::onaddtrack() const {
    return EventTarget::get("onaddtrack").as<jsbind::Any>();
}

void TextTrackList::onaddtrack(const jsbind::Any& value) {
    EventTarget::set("onaddtrack", value);
}

jsbind::Any TextTrackList::onremovetrack() const {
    return EventTarget::get("onremovetrack").as<jsbind::Any>();
}

void TextTrackList::onremovetrack(const jsbind::Any& value) {
    EventTarget::set("onremovetrack", value);
}


} // namespace webbind