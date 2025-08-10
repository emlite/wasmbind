#include <webbind/PortalActivateOptions.hpp>

namespace webbind {

PortalActivateOptions::PortalActivateOptions(Handle h) noexcept : StructuredSerializeOptions(emlite::Val::take_ownership(h)) {}
PortalActivateOptions PortalActivateOptions::take_ownership(Handle h) noexcept {
    return PortalActivateOptions(h);
}

PortalActivateOptions::PortalActivateOptions(const emlite::Val &val) noexcept: StructuredSerializeOptions(val) {}

PortalActivateOptions::PortalActivateOptions() noexcept: StructuredSerializeOptions(emlite::Val::object()) {}

PortalActivateOptions PortalActivateOptions::clone() const noexcept { return *this; }

jsbind::Any PortalActivateOptions::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void PortalActivateOptions::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind