#include <webbind/USBConnectionEvent.hpp>
#include <webbind/USBConnectionEventInit.hpp>
#include <webbind/USBDevice.hpp>

namespace webbind {

USBConnectionEvent USBConnectionEvent::take_ownership(Handle h) noexcept {
    return USBConnectionEvent(h);
}

USBConnectionEvent USBConnectionEvent::clone() const noexcept { return *this; }

emlite::Val USBConnectionEvent::instance() noexcept { return emlite::Val::global("USBConnectionEvent"); }

USBConnectionEvent::USBConnectionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

USBConnectionEvent::USBConnectionEvent(const emlite::Val &val) noexcept: Event(val) {}

USBConnectionEvent::USBConnectionEvent(const jsbind::String& type, const USBConnectionEventInit& eventInitDict) : Event(emlite::Val::global("USBConnectionEvent").new_(type, eventInitDict)) {}

USBDevice USBConnectionEvent::device() const {
    return Event::get("device").as<USBDevice>();
}


} // namespace webbind