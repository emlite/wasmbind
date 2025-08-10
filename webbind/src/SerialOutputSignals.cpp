#include <webbind/SerialOutputSignals.hpp>

namespace webbind {

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


} // namespace webbind