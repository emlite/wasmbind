#include <webbind/AnimationPlaybackEventInit.hpp>

using emlite::Val;
namespace webbind {

AnimationPlaybackEventInit::AnimationPlaybackEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
AnimationPlaybackEventInit AnimationPlaybackEventInit::take_ownership(Handle h) noexcept {
        return AnimationPlaybackEventInit(h);
    }
AnimationPlaybackEventInit::AnimationPlaybackEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
AnimationPlaybackEventInit::AnimationPlaybackEventInit() noexcept: EventInit(emlite::Val::object()) {}
AnimationPlaybackEventInit AnimationPlaybackEventInit::clone() const noexcept { return *this; }

jsbind::Any AnimationPlaybackEventInit::currentTime() const {
    return emlite::Val::get("currentTime").as<jsbind::Any>();
}

void AnimationPlaybackEventInit::currentTime(const jsbind::Any& value) {
    emlite::Val::set("currentTime", value);
}

jsbind::Any AnimationPlaybackEventInit::timelineTime() const {
    return emlite::Val::get("timelineTime").as<jsbind::Any>();
}

void AnimationPlaybackEventInit::timelineTime(const jsbind::Any& value) {
    emlite::Val::set("timelineTime", value);
}


} // namespace webbind