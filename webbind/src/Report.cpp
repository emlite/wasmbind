#include <webbind/Report.hpp>
#include <webbind/ReportBody.hpp>

using emlite::Val;
namespace webbind {

Report::Report(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Report Report::take_ownership(Handle h) noexcept {
        return Report(h);
    }
Report::Report(const emlite::Val &val) noexcept: emlite::Val(val) {}
Report::Report() noexcept: emlite::Val(emlite::Val::object()) {}
Report Report::clone() const noexcept { return *this; }

jsbind::String Report::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void Report::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::String Report::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void Report::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

ReportBody Report::body() const {
    return emlite::Val::get("body").as<ReportBody>();
}

void Report::body(const ReportBody& value) {
    emlite::Val::set("body", value);
}


} // namespace webbind