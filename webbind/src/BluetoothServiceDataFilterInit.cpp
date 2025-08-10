#include <webbind/BluetoothServiceDataFilterInit.hpp>

using emlite::Val;
namespace webbind {

BluetoothServiceDataFilterInit::BluetoothServiceDataFilterInit(Handle h) noexcept : BluetoothDataFilterInit(emlite::Val::take_ownership(h)) {}
BluetoothServiceDataFilterInit BluetoothServiceDataFilterInit::take_ownership(Handle h) noexcept {
        return BluetoothServiceDataFilterInit(h);
    }
BluetoothServiceDataFilterInit::BluetoothServiceDataFilterInit(const emlite::Val &val) noexcept: BluetoothDataFilterInit(val) {}
BluetoothServiceDataFilterInit::BluetoothServiceDataFilterInit() noexcept: BluetoothDataFilterInit(emlite::Val::object()) {}
BluetoothServiceDataFilterInit BluetoothServiceDataFilterInit::clone() const noexcept { return *this; }

jsbind::Any BluetoothServiceDataFilterInit::service() const {
    return emlite::Val::get("service").as<jsbind::Any>();
}

void BluetoothServiceDataFilterInit::service(const jsbind::Any& value) {
    emlite::Val::set("service", value);
}


} // namespace webbind