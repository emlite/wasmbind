#include <webbind/Serial.hpp>
#include <webbind/SerialPort.hpp>


SerialPortRequestOptions::SerialPortRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SerialPortRequestOptions SerialPortRequestOptions::take_ownership(Handle h) noexcept {
        return SerialPortRequestOptions(h);
    }
SerialPortRequestOptions::SerialPortRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SerialPortRequestOptions::SerialPortRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SerialPortRequestOptions SerialPortRequestOptions::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> SerialPortRequestOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::Sequence<jsbind::Any>>();
}

void SerialPortRequestOptions::filters(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("filters", value);
}

jsbind::Sequence<jsbind::Any> SerialPortRequestOptions::allowedBluetoothServiceClassIds() const {
    return emlite::Val::get("allowedBluetoothServiceClassIds").as<jsbind::Sequence<jsbind::Any>>();
}

void SerialPortRequestOptions::allowedBluetoothServiceClassIds(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("allowedBluetoothServiceClassIds", value);
}

Serial Serial::take_ownership(Handle h) noexcept {
        return Serial(h);
    }
Serial Serial::clone() const noexcept { return *this; }
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

jsbind::Promise<jsbind::Sequence<SerialPort>> Serial::getPorts() {
    return EventTarget::call("getPorts").as<jsbind::Promise<jsbind::Sequence<SerialPort>>>();
}

jsbind::Promise<SerialPort> Serial::requestPort() {
    return EventTarget::call("requestPort").as<jsbind::Promise<SerialPort>>();
}

jsbind::Promise<SerialPort> Serial::requestPort(const SerialPortRequestOptions& options) {
    return EventTarget::call("requestPort", options).as<jsbind::Promise<SerialPort>>();
}

