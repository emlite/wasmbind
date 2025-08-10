#include <webbind/VideoTrackList.hpp>
#include <webbind/VideoTrack.hpp>

namespace webbind {

VideoTrackList VideoTrackList::take_ownership(Handle h) noexcept {
        return VideoTrackList(h);
    }
VideoTrackList VideoTrackList::clone() const noexcept { return *this; }
emlite::Val VideoTrackList::instance() noexcept { return emlite::Val::global("VideoTrackList"); }
VideoTrackList::VideoTrackList(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
VideoTrackList::VideoTrackList(const emlite::Val &val) noexcept: EventTarget(val) {}

unsigned long VideoTrackList::length() const {
    return EventTarget::get("length").as<unsigned long>();
}

VideoTrack VideoTrackList::getTrackById(const jsbind::String& id) {
    return EventTarget::call("getTrackById", id).as<VideoTrack>();
}

long VideoTrackList::selectedIndex() const {
    return EventTarget::get("selectedIndex").as<long>();
}

jsbind::Any VideoTrackList::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void VideoTrackList::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

jsbind::Any VideoTrackList::onaddtrack() const {
    return EventTarget::get("onaddtrack").as<jsbind::Any>();
}

void VideoTrackList::onaddtrack(const jsbind::Any& value) {
    EventTarget::set("onaddtrack", value);
}

jsbind::Any VideoTrackList::onremovetrack() const {
    return EventTarget::get("onremovetrack").as<jsbind::Any>();
}

void VideoTrackList::onremovetrack(const jsbind::Any& value) {
    EventTarget::set("onremovetrack", value);
}


} // namespace webbind