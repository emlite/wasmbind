#include <webbind/RegistrationOptions.hpp>

namespace webbind {

RegistrationOptions::RegistrationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RegistrationOptions RegistrationOptions::take_ownership(Handle h) noexcept {
    return RegistrationOptions(h);
}

RegistrationOptions::RegistrationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

RegistrationOptions::RegistrationOptions() noexcept: emlite::Val(emlite::Val::object()) {}

RegistrationOptions RegistrationOptions::clone() const noexcept { return *this; }

jsbind::String RegistrationOptions::scope() const {
    return emlite::Val::get("scope").as<jsbind::String>();
}

void RegistrationOptions::scope(const jsbind::String& value) {
    emlite::Val::set("scope", value);
}

WorkerType RegistrationOptions::type() const {
    return emlite::Val::get("type").as<WorkerType>();
}

void RegistrationOptions::type(const WorkerType& value) {
    emlite::Val::set("type", value);
}

ServiceWorkerUpdateViaCache RegistrationOptions::updateViaCache() const {
    return emlite::Val::get("updateViaCache").as<ServiceWorkerUpdateViaCache>();
}

void RegistrationOptions::updateViaCache(const ServiceWorkerUpdateViaCache& value) {
    emlite::Val::set("updateViaCache", value);
}


} // namespace webbind