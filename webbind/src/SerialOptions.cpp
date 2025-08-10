#include <webbind/SerialOptions.hpp>

namespace webbind {

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


} // namespace webbind