#include <webbind/USBConnectionEventInit.hpp>
#include <webbind/USBDevice.hpp>

using emlite::Val;
namespace webbind {

USBConnectionEventInit::USBConnectionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
USBConnectionEventInit USBConnectionEventInit::take_ownership(Handle h) noexcept {
        return USBConnectionEventInit(h);
    }
USBConnectionEventInit::USBConnectionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
USBConnectionEventInit::USBConnectionEventInit() noexcept: EventInit(emlite::Val::object()) {}
USBConnectionEventInit USBConnectionEventInit::clone() const noexcept { return *this; }

USBDevice USBConnectionEventInit::device() const {
    return emlite::Val::get("device").as<USBDevice>();
}

void USBConnectionEventInit::device(const USBDevice& value) {
    emlite::Val::set("device", value);
}


} // namespace webbind