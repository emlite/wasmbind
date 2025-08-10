#include <webbind/BluetoothDataFilterInit.hpp>

using emlite::Val;
namespace webbind {

BluetoothDataFilterInit::BluetoothDataFilterInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothDataFilterInit BluetoothDataFilterInit::take_ownership(Handle h) noexcept {
        return BluetoothDataFilterInit(h);
    }
BluetoothDataFilterInit::BluetoothDataFilterInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
BluetoothDataFilterInit::BluetoothDataFilterInit() noexcept: emlite::Val(emlite::Val::object()) {}
BluetoothDataFilterInit BluetoothDataFilterInit::clone() const noexcept { return *this; }

jsbind::Any BluetoothDataFilterInit::dataPrefix() const {
    return emlite::Val::get("dataPrefix").as<jsbind::Any>();
}

void BluetoothDataFilterInit::dataPrefix(const jsbind::Any& value) {
    emlite::Val::set("dataPrefix", value);
}

jsbind::Any BluetoothDataFilterInit::mask() const {
    return emlite::Val::get("mask").as<jsbind::Any>();
}

void BluetoothDataFilterInit::mask(const jsbind::Any& value) {
    emlite::Val::set("mask", value);
}


} // namespace webbind