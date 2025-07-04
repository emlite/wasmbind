#include <webbind/TextTrack.hpp>
#include <webbind/TextTrackCueList.hpp>
#include <webbind/TextTrackCue.hpp>
#include <webbind/SourceBuffer.hpp>


TextTrack TextTrack::take_ownership(Handle h) noexcept {
        return TextTrack(h);
    }
TextTrack TextTrack::clone() const noexcept { return *this; }
TextTrack::TextTrack(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
TextTrack::TextTrack(const emlite::Val &val) noexcept: EventTarget(val) {}


TextTrackKind TextTrack::kind() const {
    return EventTarget::get("kind").as<TextTrackKind>();
}

jsbind::DOMString TextTrack::label() const {
    return EventTarget::get("label").as<jsbind::DOMString>();
}

jsbind::DOMString TextTrack::language() const {
    return EventTarget::get("language").as<jsbind::DOMString>();
}

jsbind::DOMString TextTrack::id() const {
    return EventTarget::get("id").as<jsbind::DOMString>();
}

jsbind::DOMString TextTrack::inBandMetadataTrackDispatchType() const {
    return EventTarget::get("inBandMetadataTrackDispatchType").as<jsbind::DOMString>();
}

TextTrackMode TextTrack::mode() const {
    return EventTarget::get("mode").as<TextTrackMode>();
}

void TextTrack::mode(const TextTrackMode& value) {
    EventTarget::set("mode", value);
}

TextTrackCueList TextTrack::cues() const {
    return EventTarget::get("cues").as<TextTrackCueList>();
}

TextTrackCueList TextTrack::activeCues() const {
    return EventTarget::get("activeCues").as<TextTrackCueList>();
}

jsbind::Undefined TextTrack::addCue(const TextTrackCue& cue) {
    return EventTarget::call("addCue", cue).as<jsbind::Undefined>();
}

jsbind::Undefined TextTrack::removeCue(const TextTrackCue& cue) {
    return EventTarget::call("removeCue", cue).as<jsbind::Undefined>();
}

jsbind::Any TextTrack::oncuechange() const {
    return EventTarget::get("oncuechange").as<jsbind::Any>();
}

void TextTrack::oncuechange(const jsbind::Any& value) {
    EventTarget::set("oncuechange", value);
}

SourceBuffer TextTrack::sourceBuffer() const {
    return EventTarget::get("sourceBuffer").as<SourceBuffer>();
}

