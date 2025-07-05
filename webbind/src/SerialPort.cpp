#include <webbind/SerialPort.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>


SerialPortInfo::SerialPortInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SerialPortInfo SerialPortInfo::take_ownership(Handle h) noexcept {
        return SerialPortInfo(h);
    }
SerialPortInfo::SerialPortInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
SerialPortInfo::SerialPortInfo() noexcept: emlite::Val(emlite::Val::object()) {}
SerialPortInfo SerialPortInfo::clone() const noexcept { return *this; }

unsigned short SerialPortInfo::usbVendorId() const {
    return emlite::Val::get("usbVendorId").as<unsigned short>();
}

void SerialPortInfo::usbVendorId(unsigned short value) {
    emlite::Val::set("usbVendorId", value);
}

unsigned short SerialPortInfo::usbProductId() const {
    return emlite::Val::get("usbProductId").as<unsigned short>();
}

void SerialPortInfo::usbProductId(unsigned short value) {
    emlite::Val::set("usbProductId", value);
}

jsbind::Any SerialPortInfo::bluetoothServiceClassId() const {
    return emlite::Val::get("bluetoothServiceClassId").as<jsbind::Any>();
}

void SerialPortInfo::bluetoothServiceClassId(const jsbind::Any& value) {
    emlite::Val::set("bluetoothServiceClassId", value);
}

SerialOptions::SerialOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SerialOptions SerialOptions::take_ownership(Handle h) noexcept {
        return SerialOptions(h);
    }
SerialOptions::SerialOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SerialOptions::SerialOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SerialOptions SerialOptions::clone() const noexcept { return *this; }

unsigned long SerialOptions::baudRate() const {
    return emlite::Val::get("baudRate").as<unsigned long>();
}

void SerialOptions::baudRate(unsigned long value) {
    emlite::Val::set("baudRate", value);
}

unsigned char SerialOptions::dataBits() const {
    return emlite::Val::get("dataBits").as<unsigned char>();
}

void SerialOptions::dataBits(unsigned char value) {
    emlite::Val::set("dataBits", value);
}

unsigned char SerialOptions::stopBits() const {
    return emlite::Val::get("stopBits").as<unsigned char>();
}

void SerialOptions::stopBits(unsigned char value) {
    emlite::Val::set("stopBits", value);
}

ParityType SerialOptions::parity() const {
    return emlite::Val::get("parity").as<ParityType>();
}

void SerialOptions::parity(const ParityType& value) {
    emlite::Val::set("parity", value);
}

unsigned long SerialOptions::bufferSize() const {
    return emlite::Val::get("bufferSize").as<unsigned long>();
}

void SerialOptions::bufferSize(unsigned long value) {
    emlite::Val::set("bufferSize", value);
}

FlowControlType SerialOptions::flowControl() const {
    return emlite::Val::get("flowControl").as<FlowControlType>();
}

void SerialOptions::flowControl(const FlowControlType& value) {
    emlite::Val::set("flowControl", value);
}

SerialOutputSignals::SerialOutputSignals(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SerialOutputSignals SerialOutputSignals::take_ownership(Handle h) noexcept {
        return SerialOutputSignals(h);
    }
SerialOutputSignals::SerialOutputSignals(const emlite::Val &val) noexcept: emlite::Val(val) {}
SerialOutputSignals::SerialOutputSignals() noexcept: emlite::Val(emlite::Val::object()) {}
SerialOutputSignals SerialOutputSignals::clone() const noexcept { return *this; }

bool SerialOutputSignals::dataTerminalReady() const {
    return emlite::Val::get("dataTerminalReady").as<bool>();
}

void SerialOutputSignals::dataTerminalReady(bool value) {
    emlite::Val::set("dataTerminalReady", value);
}

bool SerialOutputSignals::requestToSend() const {
    return emlite::Val::get("requestToSend").as<bool>();
}

void SerialOutputSignals::requestToSend(bool value) {
    emlite::Val::set("requestToSend", value);
}

bool SerialOutputSignals::break_() const {
    return emlite::Val::get("break").as<bool>();
}

void SerialOutputSignals::break_(bool value) {
    emlite::Val::set("break", value);
}

SerialInputSignals::SerialInputSignals(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SerialInputSignals SerialInputSignals::take_ownership(Handle h) noexcept {
        return SerialInputSignals(h);
    }
SerialInputSignals::SerialInputSignals(const emlite::Val &val) noexcept: emlite::Val(val) {}
SerialInputSignals::SerialInputSignals() noexcept: emlite::Val(emlite::Val::object()) {}
SerialInputSignals SerialInputSignals::clone() const noexcept { return *this; }

bool SerialInputSignals::dataCarrierDetect() const {
    return emlite::Val::get("dataCarrierDetect").as<bool>();
}

void SerialInputSignals::dataCarrierDetect(bool value) {
    emlite::Val::set("dataCarrierDetect", value);
}

bool SerialInputSignals::clearToSend() const {
    return emlite::Val::get("clearToSend").as<bool>();
}

void SerialInputSignals::clearToSend(bool value) {
    emlite::Val::set("clearToSend", value);
}

bool SerialInputSignals::ringIndicator() const {
    return emlite::Val::get("ringIndicator").as<bool>();
}

void SerialInputSignals::ringIndicator(bool value) {
    emlite::Val::set("ringIndicator", value);
}

bool SerialInputSignals::dataSetReady() const {
    return emlite::Val::get("dataSetReady").as<bool>();
}

void SerialInputSignals::dataSetReady(bool value) {
    emlite::Val::set("dataSetReady", value);
}

SerialPort SerialPort::take_ownership(Handle h) noexcept {
        return SerialPort(h);
    }
SerialPort SerialPort::clone() const noexcept { return *this; }
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

jsbind::Promise SerialPort::open(const SerialOptions& options) {
    return EventTarget::call("open", options).as<jsbind::Promise>();
}

jsbind::Promise SerialPort::setSignals() {
    return EventTarget::call("setSignals").as<jsbind::Promise>();
}

jsbind::Promise SerialPort::setSignals(const SerialOutputSignals& signals) {
    return EventTarget::call("setSignals", signals).as<jsbind::Promise>();
}

jsbind::Promise SerialPort::getSignals() {
    return EventTarget::call("getSignals").as<jsbind::Promise>();
}

jsbind::Promise SerialPort::close() {
    return EventTarget::call("close").as<jsbind::Promise>();
}

jsbind::Promise SerialPort::forget() {
    return EventTarget::call("forget").as<jsbind::Promise>();
}

