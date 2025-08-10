#include "webbind/RTCError.hpp"
#include "webbind/RTCErrorInit.hpp"

namespace webbind {

RTCError RTCError::take_ownership(Handle h) noexcept {
        return RTCError(h);
    }
RTCError RTCError::clone() const noexcept { return *this; }
emlite::Val RTCError::instance() noexcept { return emlite::Val::global("RTCError"); }
RTCError::RTCError(Handle h) noexcept : DOMException(emlite::Val::take_ownership(h)) {}
RTCError::RTCError(const emlite::Val &val) noexcept: DOMException(val) {}

RTCError::RTCError(const RTCErrorInit& init) : DOMException(emlite::Val::global("RTCError").new_(init)) {}

RTCError::RTCError(const RTCErrorInit& init, const jsbind::String& message) : DOMException(emlite::Val::global("RTCError").new_(init, message)) {}

RTCErrorDetailType RTCError::errorDetail() const {
    return DOMException::get("errorDetail").as<RTCErrorDetailType>();
}

long RTCError::sdpLineNumber() const {
    return DOMException::get("sdpLineNumber").as<long>();
}

long RTCError::sctpCauseCode() const {
    return DOMException::get("sctpCauseCode").as<long>();
}

unsigned long RTCError::receivedAlert() const {
    return DOMException::get("receivedAlert").as<unsigned long>();
}

unsigned long RTCError::sentAlert() const {
    return DOMException::get("sentAlert").as<unsigned long>();
}

long RTCError::httpRequestStatusCode() const {
    return DOMException::get("httpRequestStatusCode").as<long>();
}


} // namespace webbind