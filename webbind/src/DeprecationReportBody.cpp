#include <webbind/DeprecationReportBody.hpp>

using emlite::Val;
namespace webbind {

DeprecationReportBody::DeprecationReportBody(Handle h) noexcept : ReportBody(emlite::Val::take_ownership(h)) {}
DeprecationReportBody DeprecationReportBody::take_ownership(Handle h) noexcept {
        return DeprecationReportBody(h);
    }
DeprecationReportBody::DeprecationReportBody(const emlite::Val &val) noexcept: ReportBody(val) {}
DeprecationReportBody::DeprecationReportBody() noexcept: ReportBody(emlite::Val::object()) {}
DeprecationReportBody DeprecationReportBody::clone() const noexcept { return *this; }

jsbind::String DeprecationReportBody::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void DeprecationReportBody::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::Object DeprecationReportBody::anticipatedRemoval() const {
    return emlite::Val::get("anticipatedRemoval").as<jsbind::Object>();
}

void DeprecationReportBody::anticipatedRemoval(const jsbind::Object& value) {
    emlite::Val::set("anticipatedRemoval", value);
}

jsbind::String DeprecationReportBody::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

void DeprecationReportBody::message(const jsbind::String& value) {
    emlite::Val::set("message", value);
}

jsbind::String DeprecationReportBody::sourceFile() const {
    return emlite::Val::get("sourceFile").as<jsbind::String>();
}

void DeprecationReportBody::sourceFile(const jsbind::String& value) {
    emlite::Val::set("sourceFile", value);
}

unsigned long DeprecationReportBody::lineNumber() const {
    return emlite::Val::get("lineNumber").as<unsigned long>();
}

void DeprecationReportBody::lineNumber(unsigned long value) {
    emlite::Val::set("lineNumber", value);
}

unsigned long DeprecationReportBody::columnNumber() const {
    return emlite::Val::get("columnNumber").as<unsigned long>();
}

void DeprecationReportBody::columnNumber(unsigned long value) {
    emlite::Val::set("columnNumber", value);
}


} // namespace webbind