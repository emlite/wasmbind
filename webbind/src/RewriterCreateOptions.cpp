#include <webbind/RewriterCreateOptions.hpp>
#include <webbind/AbortSignal.hpp>

using emlite::Val;
namespace webbind {

RewriterCreateOptions::RewriterCreateOptions(Handle h) noexcept : RewriterCreateCoreOptions(emlite::Val::take_ownership(h)) {}
RewriterCreateOptions RewriterCreateOptions::take_ownership(Handle h) noexcept {
        return RewriterCreateOptions(h);
    }
RewriterCreateOptions::RewriterCreateOptions(const emlite::Val &val) noexcept: RewriterCreateCoreOptions(val) {}
RewriterCreateOptions::RewriterCreateOptions() noexcept: RewriterCreateCoreOptions(emlite::Val::object()) {}
RewriterCreateOptions RewriterCreateOptions::clone() const noexcept { return *this; }

AbortSignal RewriterCreateOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void RewriterCreateOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::Function RewriterCreateOptions::monitor() const {
    return emlite::Val::get("monitor").as<jsbind::Function>();
}

void RewriterCreateOptions::monitor(const jsbind::Function& value) {
    emlite::Val::set("monitor", value);
}

jsbind::String RewriterCreateOptions::sharedContext() const {
    return emlite::Val::get("sharedContext").as<jsbind::String>();
}

void RewriterCreateOptions::sharedContext(const jsbind::String& value) {
    emlite::Val::set("sharedContext", value);
}


} // namespace webbind