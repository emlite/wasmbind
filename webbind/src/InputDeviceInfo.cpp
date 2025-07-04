#include <webbind/InputDeviceInfo.hpp>
#include <webbind/MediaStreamTrack.hpp>


InputDeviceInfo InputDeviceInfo::take_ownership(Handle h) noexcept {
        return InputDeviceInfo(h);
    }
InputDeviceInfo InputDeviceInfo::clone() const noexcept { return *this; }
InputDeviceInfo::InputDeviceInfo(Handle h) noexcept : MediaDeviceInfo(emlite::Val::take_ownership(h)) {}
InputDeviceInfo::InputDeviceInfo(const emlite::Val &val) noexcept: MediaDeviceInfo(val) {}


MediaTrackCapabilities InputDeviceInfo::getCapabilities() {
    return MediaDeviceInfo::call("getCapabilities").as<MediaTrackCapabilities>();
}

