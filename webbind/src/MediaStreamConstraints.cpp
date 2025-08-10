#include <webbind/MediaStreamConstraints.hpp>

using emlite::Val;
namespace webbind {

MediaStreamConstraints::MediaStreamConstraints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaStreamConstraints MediaStreamConstraints::take_ownership(Handle h) noexcept {
        return MediaStreamConstraints(h);
    }
MediaStreamConstraints::MediaStreamConstraints(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaStreamConstraints::MediaStreamConstraints() noexcept: emlite::Val(emlite::Val::object()) {}
MediaStreamConstraints MediaStreamConstraints::clone() const noexcept { return *this; }

jsbind::String MediaStreamConstraints::peerIdentity() const {
    return emlite::Val::get("peerIdentity").as<jsbind::String>();
}

void MediaStreamConstraints::peerIdentity(const jsbind::String& value) {
    emlite::Val::set("peerIdentity", value);
}


} // namespace webbind