#include <webbind/RTCErrorInit.hpp>

using emlite::Val;
namespace webbind {

RTCErrorInit::RTCErrorInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCErrorInit RTCErrorInit::take_ownership(Handle h) noexcept {
        return RTCErrorInit(h);
    }
RTCErrorInit::RTCErrorInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCErrorInit::RTCErrorInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCErrorInit RTCErrorInit::clone() const noexcept { return *this; }

RTCErrorDetailType RTCErrorInit::errorDetail() const {
    return emlite::Val::get("errorDetail").as<RTCErrorDetailType>();
}

void RTCErrorInit::errorDetail(const RTCErrorDetailType& value) {
    emlite::Val::set("errorDetail", value);
}

long RTCErrorInit::sdpLineNumber() const {
    return emlite::Val::get("sdpLineNumber").as<long>();
}

void RTCErrorInit::sdpLineNumber(long value) {
    emlite::Val::set("sdpLineNumber", value);
}

long RTCErrorInit::sctpCauseCode() const {
    return emlite::Val::get("sctpCauseCode").as<long>();
}

void RTCErrorInit::sctpCauseCode(long value) {
    emlite::Val::set("sctpCauseCode", value);
}

unsigned long RTCErrorInit::receivedAlert() const {
    return emlite::Val::get("receivedAlert").as<unsigned long>();
}

void RTCErrorInit::receivedAlert(unsigned long value) {
    emlite::Val::set("receivedAlert", value);
}

unsigned long RTCErrorInit::sentAlert() const {
    return emlite::Val::get("sentAlert").as<unsigned long>();
}

void RTCErrorInit::sentAlert(unsigned long value) {
    emlite::Val::set("sentAlert", value);
}


} // namespace webbind