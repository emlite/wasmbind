#include <webbind/GetHTMLOptions.hpp>
#include <webbind/ShadowRoot.hpp>

using emlite::Val;
namespace webbind {

GetHTMLOptions::GetHTMLOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetHTMLOptions GetHTMLOptions::take_ownership(Handle h) noexcept {
        return GetHTMLOptions(h);
    }
GetHTMLOptions::GetHTMLOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
GetHTMLOptions::GetHTMLOptions() noexcept: emlite::Val(emlite::Val::object()) {}
GetHTMLOptions GetHTMLOptions::clone() const noexcept { return *this; }

bool GetHTMLOptions::serializableShadowRoots() const {
    return emlite::Val::get("serializableShadowRoots").as<bool>();
}

void GetHTMLOptions::serializableShadowRoots(bool value) {
    emlite::Val::set("serializableShadowRoots", value);
}

jsbind::TypedArray<ShadowRoot> GetHTMLOptions::shadowRoots() const {
    return emlite::Val::get("shadowRoots").as<jsbind::TypedArray<ShadowRoot>>();
}

void GetHTMLOptions::shadowRoots(const jsbind::TypedArray<ShadowRoot>& value) {
    emlite::Val::set("shadowRoots", value);
}


} // namespace webbind