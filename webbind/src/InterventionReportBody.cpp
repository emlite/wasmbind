#include <webbind/InterventionReportBody.hpp>

namespace webbind {

InterventionReportBody::InterventionReportBody(Handle h) noexcept : ReportBody(emlite::Val::take_ownership(h)) {}
InterventionReportBody InterventionReportBody::take_ownership(Handle h) noexcept {
    return InterventionReportBody(h);
}

InterventionReportBody::InterventionReportBody(const emlite::Val &val) noexcept: ReportBody(val) {}

InterventionReportBody::InterventionReportBody() noexcept: ReportBody(emlite::Val::object()) {}

InterventionReportBody InterventionReportBody::clone() const noexcept { return *this; }

jsbind::String InterventionReportBody::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void InterventionReportBody::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String InterventionReportBody::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

void InterventionReportBody::message(const jsbind::String& value) {
    emlite::Val::set("message", value);
}

jsbind::String InterventionReportBody::sourceFile() const {
    return emlite::Val::get("sourceFile").as<jsbind::String>();
}

void InterventionReportBody::sourceFile(const jsbind::String& value) {
    emlite::Val::set("sourceFile", value);
}

unsigned long InterventionReportBody::lineNumber() const {
    return emlite::Val::get("lineNumber").as<unsigned long>();
}

void InterventionReportBody::lineNumber(unsigned long value) {
    emlite::Val::set("lineNumber", value);
}

unsigned long InterventionReportBody::columnNumber() const {
    return emlite::Val::get("columnNumber").as<unsigned long>();
}

void InterventionReportBody::columnNumber(unsigned long value) {
    emlite::Val::set("columnNumber", value);
}


} // namespace webbind