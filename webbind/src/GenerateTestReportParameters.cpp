#include <webbind/GenerateTestReportParameters.hpp>

using emlite::Val;
namespace webbind {

GenerateTestReportParameters::GenerateTestReportParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GenerateTestReportParameters GenerateTestReportParameters::take_ownership(Handle h) noexcept {
        return GenerateTestReportParameters(h);
    }
GenerateTestReportParameters::GenerateTestReportParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
GenerateTestReportParameters::GenerateTestReportParameters() noexcept: emlite::Val(emlite::Val::object()) {}
GenerateTestReportParameters GenerateTestReportParameters::clone() const noexcept { return *this; }

jsbind::String GenerateTestReportParameters::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}

void GenerateTestReportParameters::message(const jsbind::String& value) {
    emlite::Val::set("message", value);
}

jsbind::String GenerateTestReportParameters::group() const {
    return emlite::Val::get("group").as<jsbind::String>();
}

void GenerateTestReportParameters::group(const jsbind::String& value) {
    emlite::Val::set("group", value);
}


} // namespace webbind