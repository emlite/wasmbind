#include "webbind/CrashReportBody.hpp"

using emlite::Val;
namespace webbind {

CrashReportBody::CrashReportBody(Handle h) noexcept : ReportBody(emlite::Val::take_ownership(h)) {}
CrashReportBody CrashReportBody::take_ownership(Handle h) noexcept {
        return CrashReportBody(h);
    }
CrashReportBody::CrashReportBody(const emlite::Val &val) noexcept: ReportBody(val) {}
CrashReportBody::CrashReportBody() noexcept: ReportBody(emlite::Val::object()) {}
CrashReportBody CrashReportBody::clone() const noexcept { return *this; }

jsbind::String CrashReportBody::reason() const {
    return emlite::Val::get("reason").as<jsbind::String>();
}

void CrashReportBody::reason(const jsbind::String& value) {
    emlite::Val::set("reason", value);
}

jsbind::String CrashReportBody::stack() const {
    return emlite::Val::get("stack").as<jsbind::String>();
}

void CrashReportBody::stack(const jsbind::String& value) {
    emlite::Val::set("stack", value);
}

bool CrashReportBody::is_top_level() const {
    return emlite::Val::get("is_top_level").as<bool>();
}

void CrashReportBody::is_top_level(bool value) {
    emlite::Val::set("is_top_level", value);
}

DocumentVisibilityState CrashReportBody::page_visibility() const {
    return emlite::Val::get("page_visibility").as<DocumentVisibilityState>();
}

void CrashReportBody::page_visibility(const DocumentVisibilityState& value) {
    emlite::Val::set("page_visibility", value);
}


} // namespace webbind