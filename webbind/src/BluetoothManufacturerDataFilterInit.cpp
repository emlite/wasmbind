#include <webbind/BluetoothManufacturerDataFilterInit.hpp>

using emlite::Val;
namespace webbind {

BluetoothManufacturerDataFilterInit::BluetoothManufacturerDataFilterInit(Handle h) noexcept : BluetoothDataFilterInit(emlite::Val::take_ownership(h)) {}
BluetoothManufacturerDataFilterInit BluetoothManufacturerDataFilterInit::take_ownership(Handle h) noexcept {
        return BluetoothManufacturerDataFilterInit(h);
    }
BluetoothManufacturerDataFilterInit::BluetoothManufacturerDataFilterInit(const emlite::Val &val) noexcept: BluetoothDataFilterInit(val) {}
BluetoothManufacturerDataFilterInit::BluetoothManufacturerDataFilterInit() noexcept: BluetoothDataFilterInit(emlite::Val::object()) {}
BluetoothManufacturerDataFilterInit BluetoothManufacturerDataFilterInit::clone() const noexcept { return *this; }

unsigned short BluetoothManufacturerDataFilterInit::companyIdentifier() const {
    return emlite::Val::get("companyIdentifier").as<unsigned short>();
}

void BluetoothManufacturerDataFilterInit::companyIdentifier(unsigned short value) {
    emlite::Val::set("companyIdentifier", value);
}


} // namespace webbind