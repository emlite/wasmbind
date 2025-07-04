#include <webbind/Animation.hpp>
#include <webbind/AnimationEffect.hpp>
#include <webbind/AnimationTimeline.hpp>
#include <webbind/AnimationTrigger.hpp>


Animation Animation::take_ownership(Handle h) noexcept {
        return Animation(h);
    }
Animation Animation::clone() const noexcept { return *this; }
Animation::Animation(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Animation::Animation(const emlite::Val &val) noexcept: EventTarget(val) {}


Animation::Animation(const AnimationEffect& effect, const AnimationTimeline& timeline): EventTarget(emlite::Val::global("Animation").new_(effect, timeline)) {}

jsbind::DOMString Animation::id() const {
    return EventTarget::get("id").as<jsbind::DOMString>();
}

void Animation::id(const jsbind::DOMString& value) {
    EventTarget::set("id", value);
}

AnimationEffect Animation::effect() const {
    return EventTarget::get("effect").as<AnimationEffect>();
}

void Animation::effect(const AnimationEffect& value) {
    EventTarget::set("effect", value);
}

AnimationTimeline Animation::timeline() const {
    return EventTarget::get("timeline").as<AnimationTimeline>();
}

void Animation::timeline(const AnimationTimeline& value) {
    EventTarget::set("timeline", value);
}

double Animation::playbackRate() const {
    return EventTarget::get("playbackRate").as<double>();
}

void Animation::playbackRate(double value) {
    EventTarget::set("playbackRate", value);
}

AnimationPlayState Animation::playState() const {
    return EventTarget::get("playState").as<AnimationPlayState>();
}

AnimationReplaceState Animation::replaceState() const {
    return EventTarget::get("replaceState").as<AnimationReplaceState>();
}

bool Animation::pending() const {
    return EventTarget::get("pending").as<bool>();
}

jsbind::Promise Animation::ready() const {
    return EventTarget::get("ready").as<jsbind::Promise>();
}

jsbind::Promise Animation::finished() const {
    return EventTarget::get("finished").as<jsbind::Promise>();
}

jsbind::Any Animation::onfinish() const {
    return EventTarget::get("onfinish").as<jsbind::Any>();
}

void Animation::onfinish(const jsbind::Any& value) {
    EventTarget::set("onfinish", value);
}

jsbind::Any Animation::oncancel() const {
    return EventTarget::get("oncancel").as<jsbind::Any>();
}

void Animation::oncancel(const jsbind::Any& value) {
    EventTarget::set("oncancel", value);
}

jsbind::Any Animation::onremove() const {
    return EventTarget::get("onremove").as<jsbind::Any>();
}

void Animation::onremove(const jsbind::Any& value) {
    EventTarget::set("onremove", value);
}

jsbind::Undefined Animation::cancel() {
    return EventTarget::call("cancel").as<jsbind::Undefined>();
}

jsbind::Undefined Animation::finish() {
    return EventTarget::call("finish").as<jsbind::Undefined>();
}

jsbind::Undefined Animation::play() {
    return EventTarget::call("play").as<jsbind::Undefined>();
}

jsbind::Undefined Animation::pause() {
    return EventTarget::call("pause").as<jsbind::Undefined>();
}

jsbind::Undefined Animation::updatePlaybackRate(double playbackRate) {
    return EventTarget::call("updatePlaybackRate", playbackRate).as<jsbind::Undefined>();
}

jsbind::Undefined Animation::reverse() {
    return EventTarget::call("reverse").as<jsbind::Undefined>();
}

jsbind::Undefined Animation::persist() {
    return EventTarget::call("persist").as<jsbind::Undefined>();
}

jsbind::Undefined Animation::commitStyles() {
    return EventTarget::call("commitStyles").as<jsbind::Undefined>();
}

jsbind::Any Animation::startTime() const {
    return EventTarget::get("startTime").as<jsbind::Any>();
}

void Animation::startTime(const jsbind::Any& value) {
    EventTarget::set("startTime", value);
}

jsbind::Any Animation::currentTime() const {
    return EventTarget::get("currentTime").as<jsbind::Any>();
}

void Animation::currentTime(const jsbind::Any& value) {
    EventTarget::set("currentTime", value);
}

AnimationTrigger Animation::trigger() const {
    return EventTarget::get("trigger").as<AnimationTrigger>();
}

void Animation::trigger(const AnimationTrigger& value) {
    EventTarget::set("trigger", value);
}

double Animation::overallProgress() const {
    return EventTarget::get("overallProgress").as<double>();
}

