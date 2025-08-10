#include "webbind/IntegrityViolationReportBody.hpp"

using emlite::Val;
namespace webbind {

IntegrityViolationReportBody::IntegrityViolationReportBody(Handle h) noexcept : ReportBody(emlite::Val::take_ownership(h)) {}
IntegrityViolationReportBody IntegrityViolationReportBody::take_ownership(Handle h) noexcept {
        return IntegrityViolationReportBody(h);
    }
IntegrityViolationReportBody::IntegrityViolationReportBody(const emlite::Val &val) noexcept: ReportBody(val) {}
IntegrityViolationReportBody::IntegrityViolationReportBody() noexcept: ReportBody(emlite::Val::object()) {}
IntegrityViolationReportBody IntegrityViolationReportBody::clone() const noexcept { return *this; }

jsbind::String IntegrityViolationReportBody::documentURL() const {
    return emlite::Val::get("documentURL").as<jsbind::String>();
}

void IntegrityViolationReportBody::documentURL(const jsbind::String& value) {
    emlite::Val::set("documentURL", value);
}

jsbind::String IntegrityViolationReportBody::blockedURL() const {
    return emlite::Val::get("blockedURL").as<jsbind::String>();
}

void IntegrityViolationReportBody::blockedURL(const jsbind::String& value) {
    emlite::Val::set("blockedURL", value);
}

jsbind::String IntegrityViolationReportBody::destination() const {
    return emlite::Val::get("destination").as<jsbind::String>();
}

void IntegrityViolationReportBody::destination(const jsbind::String& value) {
    emlite::Val::set("destination", value);
}

bool IntegrityViolationReportBody::reportOnly() const {
    return emlite::Val::get("reportOnly").as<bool>();
}

void IntegrityViolationReportBody::reportOnly(bool value) {
    emlite::Val::set("reportOnly", value);
}


} // namespace webbind