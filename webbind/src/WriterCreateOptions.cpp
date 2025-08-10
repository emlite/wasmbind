#include <webbind/WriterCreateOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

WriterCreateOptions::WriterCreateOptions(Handle h) noexcept : WriterCreateCoreOptions(emlite::Val::take_ownership(h)) {}
WriterCreateOptions WriterCreateOptions::take_ownership(Handle h) noexcept {
    return WriterCreateOptions(h);
}

WriterCreateOptions::WriterCreateOptions(const emlite::Val &val) noexcept: WriterCreateCoreOptions(val) {}

WriterCreateOptions::WriterCreateOptions() noexcept: WriterCreateCoreOptions(emlite::Val::object()) {}

WriterCreateOptions WriterCreateOptions::clone() const noexcept { return *this; }

AbortSignal WriterCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void WriterCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function WriterCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void WriterCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}

jsbind::String WriterCreateOptions::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::String>();
}

void WriterCreateOptions::sharedContext(const jsbind::String& value) {
    emlite::Val::set("sharedContext", value);
}


} // namespace webbind