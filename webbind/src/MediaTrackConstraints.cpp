#include "webbind/MediaTrackConstraints.hpp"
#include "webbind/MediaTrackConstraintSet.hpp"

using emlite::Val;
namespace webbind {

MediaTrackConstraints::MediaTrackConstraints(Handle h) noexcept : MediaTrackConstraintSet(emlite::Val::take_ownership(h)) {}
MediaTrackConstraints MediaTrackConstraints::take_ownership(Handle h) noexcept {
        return MediaTrackConstraints(h);
    }
MediaTrackConstraints::MediaTrackConstraints(const emlite::Val &val) noexcept: MediaTrackConstraintSet(val) {}
MediaTrackConstraints::MediaTrackConstraints() noexcept: MediaTrackConstraintSet(emlite::Val::object()) {}
MediaTrackConstraints MediaTrackConstraints::clone() const noexcept { return *this; }

jsbind::TypedArray<MediaTrackConstraintSet> MediaTrackConstraints::advanced() const {
    return emlite::Val::get("advanced").as<jsbind::TypedArray<MediaTrackConstraintSet>>();
}

void MediaTrackConstraints::advanced(const jsbind::TypedArray<MediaTrackConstraintSet>& value) {
    emlite::Val::set("advanced", value);
}


} // namespace webbind