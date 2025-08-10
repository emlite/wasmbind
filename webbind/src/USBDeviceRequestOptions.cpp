#include <webbind/USBDeviceRequestOptions.hpp>
#include <webbind/USBDeviceFilter.hpp>

using emlite::Val;
namespace webbind {

USBDeviceRequestOptions::USBDeviceRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBDeviceRequestOptions USBDeviceRequestOptions::take_ownership(Handle h) noexcept {
        return USBDeviceRequestOptions(h);
    }
USBDeviceRequestOptions::USBDeviceRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
USBDeviceRequestOptions::USBDeviceRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
USBDeviceRequestOptions USBDeviceRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<USBDeviceFilter> USBDeviceRequestOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<USBDeviceFilter>>();
}

void USBDeviceRequestOptions::filters(const jsbind::TypedArray<USBDeviceFilter>& value) {
    emlite::Val::set("filters", value);
}

jsbind::TypedArray<USBDeviceFilter> USBDeviceRequestOptions::exclusionFilters() const {
    return emlite::Val::get("exclusionFilters").as<jsbind::TypedArray<USBDeviceFilter>>();
}

void USBDeviceRequestOptions::exclusionFilters(const jsbind::TypedArray<USBDeviceFilter>& value) {
    emlite::Val::set("exclusionFilters", value);
}


} // namespace webbind