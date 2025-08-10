#include <webbind/SummarizerCreateOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

SummarizerCreateOptions::SummarizerCreateOptions(Handle h) noexcept : SummarizerCreateCoreOptions(emlite::Val::take_ownership(h)) {}
SummarizerCreateOptions SummarizerCreateOptions::take_ownership(Handle h) noexcept {
    return SummarizerCreateOptions(h);
}

SummarizerCreateOptions::SummarizerCreateOptions(const emlite::Val &val) noexcept: SummarizerCreateCoreOptions(val) {}

SummarizerCreateOptions::SummarizerCreateOptions() noexcept: SummarizerCreateCoreOptions(emlite::Val::object()) {}

SummarizerCreateOptions SummarizerCreateOptions::clone() const noexcept { return *this; }

AbortSignal SummarizerCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void SummarizerCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function SummarizerCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void SummarizerCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}

jsbind::String SummarizerCreateOptions::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::String>();
}

void SummarizerCreateOptions::sharedContext(const jsbind::String& value) {
    emlite::Val::set("sharedContext", value);
}


} // namespace webbind