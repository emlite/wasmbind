#include <webbind/SecurityPolicyViolationEvent.hpp>


SecurityPolicyViolationEvent SecurityPolicyViolationEvent::take_ownership(Handle h) noexcept {
        return SecurityPolicyViolationEvent(h);
    }
SecurityPolicyViolationEvent SecurityPolicyViolationEvent::clone() const noexcept { return *this; }
SecurityPolicyViolationEvent::SecurityPolicyViolationEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SecurityPolicyViolationEvent::SecurityPolicyViolationEvent(const emlite::Val &val) noexcept: Event(val) {}


SecurityPolicyViolationEvent::SecurityPolicyViolationEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("SecurityPolicyViolationEvent").new_(type)) {}

SecurityPolicyViolationEvent::SecurityPolicyViolationEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("SecurityPolicyViolationEvent").new_(type, eventInitDict)) {}

jsbind::USVString SecurityPolicyViolationEvent::documentURI() const {
    return Event::get("documentURI").as<jsbind::USVString>();
}

jsbind::USVString SecurityPolicyViolationEvent::referrer() const {
    return Event::get("referrer").as<jsbind::USVString>();
}

jsbind::USVString SecurityPolicyViolationEvent::blockedURI() const {
    return Event::get("blockedURI").as<jsbind::USVString>();
}

jsbind::DOMString SecurityPolicyViolationEvent::effectiveDirective() const {
    return Event::get("effectiveDirective").as<jsbind::DOMString>();
}

jsbind::DOMString SecurityPolicyViolationEvent::violatedDirective() const {
    return Event::get("violatedDirective").as<jsbind::DOMString>();
}

jsbind::DOMString SecurityPolicyViolationEvent::originalPolicy() const {
    return Event::get("originalPolicy").as<jsbind::DOMString>();
}

jsbind::USVString SecurityPolicyViolationEvent::sourceFile() const {
    return Event::get("sourceFile").as<jsbind::USVString>();
}

jsbind::DOMString SecurityPolicyViolationEvent::sample() const {
    return Event::get("sample").as<jsbind::DOMString>();
}

SecurityPolicyViolationEventDisposition SecurityPolicyViolationEvent::disposition() const {
    return Event::get("disposition").as<SecurityPolicyViolationEventDisposition>();
}

unsigned short SecurityPolicyViolationEvent::statusCode() const {
    return Event::get("statusCode").as<unsigned short>();
}

unsigned long SecurityPolicyViolationEvent::lineNumber() const {
    return Event::get("lineNumber").as<unsigned long>();
}

unsigned long SecurityPolicyViolationEvent::columnNumber() const {
    return Event::get("columnNumber").as<unsigned long>();
}

