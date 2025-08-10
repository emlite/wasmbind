#include <webbind/PermissionsPolicyViolationReportBody.hpp>

namespace webbind {

PermissionsPolicyViolationReportBody::PermissionsPolicyViolationReportBody(Handle h) noexcept : ReportBody(emlite::Val::take_ownership(h)) {}
PermissionsPolicyViolationReportBody PermissionsPolicyViolationReportBody::take_ownership(Handle h) noexcept {
    return PermissionsPolicyViolationReportBody(h);
}

PermissionsPolicyViolationReportBody::PermissionsPolicyViolationReportBody(const emlite::Val &val) noexcept: ReportBody(val) {}

PermissionsPolicyViolationReportBody::PermissionsPolicyViolationReportBody() noexcept: ReportBody(emlite::Val::object()) {}

PermissionsPolicyViolationReportBody PermissionsPolicyViolationReportBody::clone() const noexcept { return *this; }

jsbind::String PermissionsPolicyViolationReportBody::featureId() const {
    return emlite::Val::get("featureId").as<jsbind::String>();
}

void PermissionsPolicyViolationReportBody::featureId(const jsbind::String& value) {
    emlite::Val::set("featureId", value);
}

jsbind::String PermissionsPolicyViolationReportBody::sourceFile() const {
    return emlite::Val::get("sourceFile").as<jsbind::String>();
}

void PermissionsPolicyViolationReportBody::sourceFile(const jsbind::String& value) {
    emlite::Val::set("sourceFile", value);
}

long PermissionsPolicyViolationReportBody::lineNumber() const {
    return emlite::Val::get("lineNumber").as<long>();
}

void PermissionsPolicyViolationReportBody::lineNumber(long value) {
    emlite::Val::set("lineNumber", value);
}

long PermissionsPolicyViolationReportBody::columnNumber() const {
    return emlite::Val::get("columnNumber").as<long>();
}

void PermissionsPolicyViolationReportBody::columnNumber(long value) {
    emlite::Val::set("columnNumber", value);
}

jsbind::String PermissionsPolicyViolationReportBody::disposition() const {
    return emlite::Val::get("disposition").as<jsbind::String>();
}

void PermissionsPolicyViolationReportBody::disposition(const jsbind::String& value) {
    emlite::Val::set("disposition", value);
}

jsbind::String PermissionsPolicyViolationReportBody::allowAttribute() const {
    return emlite::Val::get("allowAttribute").as<jsbind::String>();
}

void PermissionsPolicyViolationReportBody::allowAttribute(const jsbind::String& value) {
    emlite::Val::set("allowAttribute", value);
}

jsbind::String PermissionsPolicyViolationReportBody::srcAttribute() const {
    return emlite::Val::get("srcAttribute").as<jsbind::String>();
}

void PermissionsPolicyViolationReportBody::srcAttribute(const jsbind::String& value) {
    emlite::Val::set("srcAttribute", value);
}


} // namespace webbind