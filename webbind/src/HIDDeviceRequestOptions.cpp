#include <webbind/HIDDeviceRequestOptions.hpp>
#include <webbind/HIDDeviceFilter.hpp>

namespace webbind {

HIDDeviceRequestOptions::HIDDeviceRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HIDDeviceRequestOptions HIDDeviceRequestOptions::take_ownership(Handle h) noexcept {
    return HIDDeviceRequestOptions(h);
}

HIDDeviceRequestOptions::HIDDeviceRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

HIDDeviceRequestOptions::HIDDeviceRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}

HIDDeviceRequestOptions HIDDeviceRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<HIDDeviceFilter> HIDDeviceRequestOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<HIDDeviceFilter>>();
}

void HIDDeviceRequestOptions::filters(const jsbind::TypedArray<HIDDeviceFilter>& value) {
    emlite::Val::set("filters", value);
}

jsbind::TypedArray<HIDDeviceFilter> HIDDeviceRequestOptions::exclusionFilters() const {
    return emlite::Val::get("exclusionFilters").as<jsbind::TypedArray<HIDDeviceFilter>>();
}

void HIDDeviceRequestOptions::exclusionFilters(const jsbind::TypedArray<HIDDeviceFilter>& value) {
    emlite::Val::set("exclusionFilters", value);
}


} // namespace webbind