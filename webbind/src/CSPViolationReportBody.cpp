#include <webbind/CSPViolationReportBody.hpp>

namespace webbind {

CSPViolationReportBody::CSPViolationReportBody(Handle h) noexcept : ReportBody(emlite::Val::take_ownership(h)) {}
CSPViolationReportBody CSPViolationReportBody::take_ownership(Handle h) noexcept {
    return CSPViolationReportBody(h);
}

CSPViolationReportBody::CSPViolationReportBody(const emlite::Val &val) noexcept: ReportBody(val) {}

CSPViolationReportBody::CSPViolationReportBody() noexcept: ReportBody(emlite::Val::object()) {}

CSPViolationReportBody CSPViolationReportBody::clone() const noexcept { return *this; }

jsbind::String CSPViolationReportBody::documentURL() const {
    return emlite::Val::get("documentURL").as<jsbind::String>();
}

void CSPViolationReportBody::documentURL(const jsbind::String& value) {
    emlite::Val::set("documentURL", value);
}

jsbind::String CSPViolationReportBody::referrer() const {
    return emlite::Val::get("referrer").as<jsbind::String>();
}

void CSPViolationReportBody::referrer(const jsbind::String& value) {
    emlite::Val::set("referrer", value);
}

jsbind::String CSPViolationReportBody::blockedURL() const {
    return emlite::Val::get("blockedURL").as<jsbind::String>();
}

void CSPViolationReportBody::blockedURL(const jsbind::String& value) {
    emlite::Val::set("blockedURL", value);
}

jsbind::String CSPViolationReportBody::effectiveDirective() const {
    return emlite::Val::get("effectiveDirective").as<jsbind::String>();
}

void CSPViolationReportBody::effectiveDirective(const jsbind::String& value) {
    emlite::Val::set("effectiveDirective", value);
}

jsbind::String CSPViolationReportBody::originalPolicy() const {
    return emlite::Val::get("originalPolicy").as<jsbind::String>();
}

void CSPViolationReportBody::originalPolicy(const jsbind::String& value) {
    emlite::Val::set("originalPolicy", value);
}

jsbind::String CSPViolationReportBody::sourceFile() const {
    return emlite::Val::get("sourceFile").as<jsbind::String>();
}

void CSPViolationReportBody::sourceFile(const jsbind::String& value) {
    emlite::Val::set("sourceFile", value);
}

jsbind::String CSPViolationReportBody::sample() const {
    return emlite::Val::get("sample").as<jsbind::String>();
}

void CSPViolationReportBody::sample(const jsbind::String& value) {
    emlite::Val::set("sample", value);
}

SecurityPolicyViolationEventDisposition CSPViolationReportBody::disposition() const {
    return emlite::Val::get("disposition").as<SecurityPolicyViolationEventDisposition>();
}

void CSPViolationReportBody::disposition(const SecurityPolicyViolationEventDisposition& value) {
    emlite::Val::set("disposition", value);
}

unsigned short CSPViolationReportBody::statusCode() const {
    return emlite::Val::get("statusCode").as<unsigned short>();
}

void CSPViolationReportBody::statusCode(unsigned short value) {
    emlite::Val::set("statusCode", value);
}

unsigned long CSPViolationReportBody::lineNumber() const {
    return emlite::Val::get("lineNumber").as<unsigned long>();
}

void CSPViolationReportBody::lineNumber(unsigned long value) {
    emlite::Val::set("lineNumber", value);
}

unsigned long CSPViolationReportBody::columnNumber() const {
    return emlite::Val::get("columnNumber").as<unsigned long>();
}

void CSPViolationReportBody::columnNumber(unsigned long value) {
    emlite::Val::set("columnNumber", value);
}


} // namespace webbind