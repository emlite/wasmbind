#include <webbind/SecurityPolicyViolationEvent.hpp>


SecurityPolicyViolationEvent SecurityPolicyViolationEvent::take_ownership(Handle h) noexcept {
        return SecurityPolicyViolationEvent(h);
    }
SecurityPolicyViolationEvent SecurityPolicyViolationEvent::clone() const noexcept { return *this; }
emlite::Val SecurityPolicyViolationEvent::instance() noexcept { return emlite::Val::global("SecurityPolicyViolationEvent"); }
SecurityPolicyViolationEvent::SecurityPolicyViolationEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SecurityPolicyViolationEvent::SecurityPolicyViolationEvent(const emlite::Val &val) noexcept: Event(val) {}


SecurityPolicyViolationEvent::SecurityPolicyViolationEvent(const jsbind::String& type) : Event(emlite::Val::global("SecurityPolicyViolationEvent").new_(type)) {}

SecurityPolicyViolationEvent::SecurityPolicyViolationEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("SecurityPolicyViolationEvent").new_(type, eventInitDict)) {}

jsbind::String SecurityPolicyViolationEvent::documentURI() const {
    return Event::get("documentURI").as<jsbind::String>();
}

jsbind::String SecurityPolicyViolationEvent::referrer() const {
    return Event::get("referrer").as<jsbind::String>();
}

jsbind::String SecurityPolicyViolationEvent::blockedURI() const {
    return Event::get("blockedURI").as<jsbind::String>();
}

jsbind::String SecurityPolicyViolationEvent::effectiveDirective() const {
    return Event::get("effectiveDirective").as<jsbind::String>();
}

jsbind::String SecurityPolicyViolationEvent::violatedDirective() const {
    return Event::get("violatedDirective").as<jsbind::String>();
}

jsbind::String SecurityPolicyViolationEvent::originalPolicy() const {
    return Event::get("originalPolicy").as<jsbind::String>();
}

jsbind::String SecurityPolicyViolationEvent::sourceFile() const {
    return Event::get("sourceFile").as<jsbind::String>();
}

jsbind::String SecurityPolicyViolationEvent::sample() const {
    return Event::get("sample").as<jsbind::String>();
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

