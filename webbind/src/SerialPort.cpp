#include <webbind/SerialPort.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>
#include <webbind/SerialPortInfo.hpp>
#include <webbind/SerialOptions.hpp>
#include <webbind/SerialOutputSignals.hpp>
#include <webbind/SerialInputSignals.hpp>

namespace webbind {

SerialPort SerialPort::take_ownership(Handle h) noexcept {
    return SerialPort(h);
}

SerialPort SerialPort::clone() const noexcept { return *this; }

emlite::Val SerialPort::instance() noexcept { return emlite::Val::global("SerialPort"); }

SerialPort::SerialPort(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

SerialPort::SerialPort(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any SerialPort::onconnect() const {
    return EventTarget::get("onconnect").as<jsbind::Any>();
}

void SerialPort::onconnect(const jsbind::Any& value) {
    EventTarget::set("onconnect", value);
}

jsbind::Any SerialPort::ondisconnect() const {
    return EventTarget::get("ondisconnect").as<jsbind::Any>();
}

void SerialPort::ondisconnect(const jsbind::Any& value) {
    EventTarget::set("ondisconnect", value);
}

bool SerialPort::connected() const {
    return EventTarget::get("connected").as<bool>();
}

ReadableStream SerialPort::readable() const {
    return EventTarget::get("readable").as<ReadableStream>();
}

WritableStream SerialPort::writable() const {
    return EventTarget::get("writable").as<WritableStream>();
}

SerialPortInfo SerialPort::getInfo() {
    return EventTarget::call("getInfo").as<SerialPortInfo>();
}

jsbind::Promise<jsbind::Undefined> SerialPort::open(const SerialOptions& options) {
    return EventTarget::call("open", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> SerialPort::setSignals() {
    return EventTarget::call("setSignals").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> SerialPort::setSignals(const SerialOutputSignals& signals) {
    return EventTarget::call("setSignals", signals).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<SerialInputSignals> SerialPort::getSignals() {
    return EventTarget::call("getSignals").as<jsbind::Promise<SerialInputSignals>>();
}

jsbind::Promise<jsbind::Undefined> SerialPort::close() {
    return EventTarget::call("close").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> SerialPort::forget() {
    return EventTarget::call("forget").as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind