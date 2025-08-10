#include <webbind/AudioListener.hpp>
#include <webbind/AudioParam.hpp>

namespace webbind {

AudioListener AudioListener::take_ownership(Handle h) noexcept {
    return AudioListener(h);
}

AudioListener AudioListener::clone() const noexcept { return *this; }

emlite::Val AudioListener::instance() noexcept { return emlite::Val::global("AudioListener"); }

AudioListener::AudioListener(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

AudioListener::AudioListener(const emlite::Val &val) noexcept: emlite::Val(val) {}

AudioParam AudioListener::positionX() const {
    return emlite::Val::get("positionX").as<AudioParam>();
}

AudioParam AudioListener::positionY() const {
    return emlite::Val::get("positionY").as<AudioParam>();
}

AudioParam AudioListener::positionZ() const {
    return emlite::Val::get("positionZ").as<AudioParam>();
}

AudioParam AudioListener::forwardX() const {
    return emlite::Val::get("forwardX").as<AudioParam>();
}

AudioParam AudioListener::forwardY() const {
    return emlite::Val::get("forwardY").as<AudioParam>();
}

AudioParam AudioListener::forwardZ() const {
    return emlite::Val::get("forwardZ").as<AudioParam>();
}

AudioParam AudioListener::upX() const {
    return emlite::Val::get("upX").as<AudioParam>();
}

AudioParam AudioListener::upY() const {
    return emlite::Val::get("upY").as<AudioParam>();
}

AudioParam AudioListener::upZ() const {
    return emlite::Val::get("upZ").as<AudioParam>();
}

jsbind::Undefined AudioListener::setPosition(float x, float y, float z) {
    return emlite::Val::call("setPosition", x, y, z).as<jsbind::Undefined>();
}

jsbind::Undefined AudioListener::setOrientation(float x, float y, float z, float xUp, float yUp, float zUp) {
    return emlite::Val::call("setOrientation", x, y, z, xUp, yUp, zUp).as<jsbind::Undefined>();
}


} // namespace webbind