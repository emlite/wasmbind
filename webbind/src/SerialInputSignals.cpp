#include "webbind/SerialInputSignals.hpp"

using emlite::Val;
namespace webbind {

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


} // namespace webbind