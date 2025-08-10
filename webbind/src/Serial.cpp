#include "webbind/Serial.hpp"
#include "webbind/SerialPort.hpp"
#include "webbind/SerialPortRequestOptions.hpp"

namespace webbind {

Serial Serial::take_ownership(Handle h) noexcept {
        return Serial(h);
    }
Serial Serial::clone() const noexcept { return *this; }
emlite::Val Serial::instance() noexcept { return emlite::Val::global("Serial"); }
Serial::Serial(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Serial::Serial(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any Serial::onconnect() const {
    return EventTarget::get("onconnect").as<jsbind::Any>();
}

void Serial::onconnect(const jsbind::Any& value) {
    EventTarget::set("onconnect", value);
}

jsbind::Any Serial::ondisconnect() const {
    return EventTarget::get("ondisconnect").as<jsbind::Any>();
}

void Serial::ondisconnect(const jsbind::Any& value) {
    EventTarget::set("ondisconnect", value);
}

jsbind::Promise<jsbind::TypedArray<SerialPort>> Serial::getPorts() {
    return EventTarget::call("getPorts").as<jsbind::Promise<jsbind::TypedArray<SerialPort>>>();
}

jsbind::Promise<SerialPort> Serial::requestPort() {
    return EventTarget::call("requestPort").as<jsbind::Promise<SerialPort>>();
}

jsbind::Promise<SerialPort> Serial::requestPort(const SerialPortRequestOptions& options) {
    return EventTarget::call("requestPort", options).as<jsbind::Promise<SerialPort>>();
}


} // namespace webbind