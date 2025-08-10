#include <webbind/RTCDTMFToneChangeEventInit.hpp>

using emlite::Val;
namespace webbind {

RTCDTMFToneChangeEventInit::RTCDTMFToneChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
RTCDTMFToneChangeEventInit RTCDTMFToneChangeEventInit::take_ownership(Handle h) noexcept {
        return RTCDTMFToneChangeEventInit(h);
    }
RTCDTMFToneChangeEventInit::RTCDTMFToneChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
RTCDTMFToneChangeEventInit::RTCDTMFToneChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
RTCDTMFToneChangeEventInit RTCDTMFToneChangeEventInit::clone() const noexcept { return *this; }

jsbind::String RTCDTMFToneChangeEventInit::tone() const {
    return emlite::Val::get("tone").as<jsbind::String>();
}

void RTCDTMFToneChangeEventInit::tone(const jsbind::String& value) {
    emlite::Val::set("tone", value);
}


} // namespace webbind