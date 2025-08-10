#include <webbind/VideoTrack.hpp>
#include <webbind/SourceBuffer.hpp>

namespace webbind {

VideoTrack VideoTrack::take_ownership(Handle h) noexcept {
        return VideoTrack(h);
    }
VideoTrack VideoTrack::clone() const noexcept { return *this; }
emlite::Val VideoTrack::instance() noexcept { return emlite::Val::global("VideoTrack"); }
VideoTrack::VideoTrack(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoTrack::VideoTrack(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String VideoTrack::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

jsbind::String VideoTrack::kind() const {
    return emlite::Val::get("kind").as<jsbind::String>();
}

jsbind::String VideoTrack::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

jsbind::String VideoTrack::language() const {
    return emlite::Val::get("language").as<jsbind::String>();
}

bool VideoTrack::selected() const {
    return emlite::Val::get("selected").as<bool>();
}

void VideoTrack::selected(bool value) {
    emlite::Val::set("selected", value);
}

SourceBuffer VideoTrack::sourceBuffer() const {
    return emlite::Val::get("sourceBuffer").as<SourceBuffer>();
}


} // namespace webbind