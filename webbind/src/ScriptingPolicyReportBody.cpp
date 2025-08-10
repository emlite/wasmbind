#include <webbind/ScriptingPolicyReportBody.hpp>

using emlite::Val;
namespace webbind {

ScriptingPolicyReportBody::ScriptingPolicyReportBody(Handle h) noexcept : ReportBody(emlite::Val::take_ownership(h)) {}
ScriptingPolicyReportBody ScriptingPolicyReportBody::take_ownership(Handle h) noexcept {
        return ScriptingPolicyReportBody(h);
    }
ScriptingPolicyReportBody::ScriptingPolicyReportBody(const emlite::Val &val) noexcept: ReportBody(val) {}
ScriptingPolicyReportBody::ScriptingPolicyReportBody() noexcept: ReportBody(emlite::Val::object()) {}
ScriptingPolicyReportBody ScriptingPolicyReportBody::clone() const noexcept { return *this; }

jsbind::String ScriptingPolicyReportBody::violationType() const {
    return emlite::Val::get("violationType").as<jsbind::String>();
}

void ScriptingPolicyReportBody::violationType(const jsbind::String& value) {
    emlite::Val::set("violationType", value);
}

jsbind::String ScriptingPolicyReportBody::violationURL() const {
    return emlite::Val::get("violationURL").as<jsbind::String>();
}

void ScriptingPolicyReportBody::violationURL(const jsbind::String& value) {
    emlite::Val::set("violationURL", value);
}

jsbind::String ScriptingPolicyReportBody::violationSample() const {
    return emlite::Val::get("violationSample").as<jsbind::String>();
}

void ScriptingPolicyReportBody::violationSample(const jsbind::String& value) {
    emlite::Val::set("violationSample", value);
}

unsigned long ScriptingPolicyReportBody::lineno() const {
    return emlite::Val::get("lineno").as<unsigned long>();
}

void ScriptingPolicyReportBody::lineno(unsigned long value) {
    emlite::Val::set("lineno", value);
}

unsigned long ScriptingPolicyReportBody::colno() const {
    return emlite::Val::get("colno").as<unsigned long>();
}

void ScriptingPolicyReportBody::colno(unsigned long value) {
    emlite::Val::set("colno", value);
}


} // namespace webbind