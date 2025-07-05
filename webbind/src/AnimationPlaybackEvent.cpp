#include <webbind/AnimationPlaybackEvent.hpp>


AnimationPlaybackEvent AnimationPlaybackEvent::take_ownership(Handle h) noexcept {
        return AnimationPlaybackEvent(h);
    }
AnimationPlaybackEvent AnimationPlaybackEvent::clone() const noexcept { return *this; }
AnimationPlaybackEvent::AnimationPlaybackEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
AnimationPlaybackEvent::AnimationPlaybackEvent(const emlite::Val &val) noexcept: Event(val) {}


AnimationPlaybackEvent::AnimationPlaybackEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("AnimationPlaybackEvent").new_(type)) {}

AnimationPlaybackEvent::AnimationPlaybackEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("AnimationPlaybackEvent").new_(type, eventInitDict)) {}

jsbind::Any AnimationPlaybackEvent::currentTime() const {
    return Event::get("currentTime").as<jsbind::Any>();
}

jsbind::Any AnimationPlaybackEvent::timelineTime() const {
    return Event::get("timelineTime").as<jsbind::Any>();
}

