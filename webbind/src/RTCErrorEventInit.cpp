#include <webbind/RTCErrorEventInit.hpp>
#include <webbind/RTCError.hpp>

using emlite::Val;
namespace webbind {

RTCErrorEventInit::RTCErrorEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
RTCErrorEventInit RTCErrorEventInit::take_ownership(Handle h) noexcept {
        return RTCErrorEventInit(h);
    }
RTCErrorEventInit::RTCErrorEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
RTCErrorEventInit::RTCErrorEventInit() noexcept: EventInit(emlite::Val::object()) {}
RTCErrorEventInit RTCErrorEventInit::clone() const noexcept { return *this; }

RTCError RTCErrorEventInit::error() const {
    return emlite::Val::get("error").as<RTCError>();
}

void RTCErrorEventInit::error(const RTCError& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind