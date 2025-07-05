#include <webbind/USBConnectionEvent.hpp>
#include <webbind/USBDevice.hpp>


USBConnectionEvent USBConnectionEvent::take_ownership(Handle h) noexcept {
        return USBConnectionEvent(h);
    }
USBConnectionEvent USBConnectionEvent::clone() const noexcept { return *this; }
USBConnectionEvent::USBConnectionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
USBConnectionEvent::USBConnectionEvent(const emlite::Val &val) noexcept: Event(val) {}


USBConnectionEvent::USBConnectionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("USBConnectionEvent").new_(type, eventInitDict)) {}

USBDevice USBConnectionEvent::device() const {
    return Event::get("device").as<USBDevice>();
}

