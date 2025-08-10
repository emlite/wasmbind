#include <webbind/NavigatorUABrandVersion.hpp>

using emlite::Val;
namespace webbind {

NavigatorUABrandVersion::NavigatorUABrandVersion(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigatorUABrandVersion NavigatorUABrandVersion::take_ownership(Handle h) noexcept {
        return NavigatorUABrandVersion(h);
    }
NavigatorUABrandVersion::NavigatorUABrandVersion(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigatorUABrandVersion::NavigatorUABrandVersion() noexcept: emlite::Val(emlite::Val::object()) {}
NavigatorUABrandVersion NavigatorUABrandVersion::clone() const noexcept { return *this; }

jsbind::String NavigatorUABrandVersion::brand() const {
    return emlite::Val::get("brand").as<jsbind::String>();
}

void NavigatorUABrandVersion::brand(const jsbind::String& value) {
    emlite::Val::set("brand", value);
}

jsbind::String NavigatorUABrandVersion::version() const {
    return emlite::Val::get("version").as<jsbind::String>();
}

void NavigatorUABrandVersion::version(const jsbind::String& value) {
    emlite::Val::set("version", value);
}


} // namespace webbind