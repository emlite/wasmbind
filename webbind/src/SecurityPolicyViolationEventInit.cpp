#include <webbind/SecurityPolicyViolationEventInit.hpp>

namespace webbind {

SecurityPolicyViolationEventInit::SecurityPolicyViolationEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
SecurityPolicyViolationEventInit SecurityPolicyViolationEventInit::take_ownership(Handle h) noexcept {
    return SecurityPolicyViolationEventInit(h);
}

SecurityPolicyViolationEventInit::SecurityPolicyViolationEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

SecurityPolicyViolationEventInit::SecurityPolicyViolationEventInit() noexcept: EventInit(emlite::Val::object()) {}

SecurityPolicyViolationEventInit SecurityPolicyViolationEventInit::clone() const noexcept { return *this; }

jsbind::String SecurityPolicyViolationEventInit::documentURI() const {
    return emlite::Val::get("documentURI").as<jsbind::String>();
}

void SecurityPolicyViolationEventInit::documentURI(const jsbind::String& value) {
    emlite::Val::set("documentURI", value);
}

jsbind::String SecurityPolicyViolationEventInit::referrer() const {
    return emlite::Val::get("referrer").as<jsbind::String>();
}

void SecurityPolicyViolationEventInit::referrer(const jsbind::String& value) {
    emlite::Val::set("referrer", value);
}

jsbind::String SecurityPolicyViolationEventInit::blockedURI() const {
    return emlite::Val::get("blockedURI").as<jsbind::String>();
}

void SecurityPolicyViolationEventInit::blockedURI(const jsbind::String& value) {
    emlite::Val::set("blockedURI", value);
}

jsbind::String SecurityPolicyViolationEventInit::violatedDirective() const {
    return emlite::Val::get("violatedDirective").as<jsbind::String>();
}

void SecurityPolicyViolationEventInit::violatedDirective(const jsbind::String& value) {
    emlite::Val::set("violatedDirective", value);
}

jsbind::String SecurityPolicyViolationEventInit::effectiveDirective() const {
    return emlite::Val::get("effectiveDirective").as<jsbind::String>();
}

void SecurityPolicyViolationEventInit::effectiveDirective(const jsbind::String& value) {
    emlite::Val::set("effectiveDirective", value);
}

jsbind::String SecurityPolicyViolationEventInit::originalPolicy() const {
    return emlite::Val::get("originalPolicy").as<jsbind::String>();
}

void SecurityPolicyViolationEventInit::originalPolicy(const jsbind::String& value) {
    emlite::Val::set("originalPolicy", value);
}

jsbind::String SecurityPolicyViolationEventInit::sourceFile() const {
    return emlite::Val::get("sourceFile").as<jsbind::String>();
}

void SecurityPolicyViolationEventInit::sourceFile(const jsbind::String& value) {
    emlite::Val::set("sourceFile", value);
}

jsbind::String SecurityPolicyViolationEventInit::sample() const {
    return emlite::Val::get("sample").as<jsbind::String>();
}

void SecurityPolicyViolationEventInit::sample(const jsbind::String& value) {
    emlite::Val::set("sample", value);
}

SecurityPolicyViolationEventDisposition SecurityPolicyViolationEventInit::disposition() const {
    return emlite::Val::get("disposition").as<SecurityPolicyViolationEventDisposition>();
}

void SecurityPolicyViolationEventInit::disposition(const SecurityPolicyViolationEventDisposition& value) {
    emlite::Val::set("disposition", value);
}

unsigned short SecurityPolicyViolationEventInit::statusCode() const {
    return emlite::Val::get("statusCode").as<unsigned short>();
}

void SecurityPolicyViolationEventInit::statusCode(unsigned short value) {
    emlite::Val::set("statusCode", value);
}

unsigned long SecurityPolicyViolationEventInit::lineNumber() const {
    return emlite::Val::get("lineNumber").as<unsigned long>();
}

void SecurityPolicyViolationEventInit::lineNumber(unsigned long value) {
    emlite::Val::set("lineNumber", value);
}

unsigned long SecurityPolicyViolationEventInit::columnNumber() const {
    return emlite::Val::get("columnNumber").as<unsigned long>();
}

void SecurityPolicyViolationEventInit::columnNumber(unsigned long value) {
    emlite::Val::set("columnNumber", value);
}


} // namespace webbind