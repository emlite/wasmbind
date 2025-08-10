#include <webbind/ReportingObserverOptions.hpp>

using emlite::Val;
namespace webbind {

ReportingObserverOptions::ReportingObserverOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReportingObserverOptions ReportingObserverOptions::take_ownership(Handle h) noexcept {
        return ReportingObserverOptions(h);
    }
ReportingObserverOptions::ReportingObserverOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ReportingObserverOptions::ReportingObserverOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ReportingObserverOptions ReportingObserverOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> ReportingObserverOptions::types() const {
    return emlite::Val::get("types").as<jsbind::TypedArray<jsbind::String>>();
}

void ReportingObserverOptions::types(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("types", value);
}

bool ReportingObserverOptions::buffered() const {
    return emlite::Val::get("buffered").as<bool>();
}

void ReportingObserverOptions::buffered(bool value) {
    emlite::Val::set("buffered", value);
}


} // namespace webbind