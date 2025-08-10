#include <webbind/USBDevice.hpp>
#include <webbind/USBConfiguration.hpp>
#include <webbind/USBInTransferResult.hpp>
#include <webbind/USBControlTransferParameters.hpp>
#include <webbind/USBOutTransferResult.hpp>
#include <webbind/USBIsochronousInTransferResult.hpp>
#include <webbind/USBIsochronousOutTransferResult.hpp>

namespace webbind {

USBDevice USBDevice::take_ownership(Handle h) noexcept {
        return USBDevice(h);
    }
USBDevice USBDevice::clone() const noexcept { return *this; }
emlite::Val USBDevice::instance() noexcept { return emlite::Val::global("USBDevice"); }
USBDevice::USBDevice(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBDevice::USBDevice(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned char USBDevice::usbVersionMajor() const {
    return emlite::Val::get("usbVersionMajor").as<unsigned char>();
}

unsigned char USBDevice::usbVersionMinor() const {
    return emlite::Val::get("usbVersionMinor").as<unsigned char>();
}

unsigned char USBDevice::usbVersionSubminor() const {
    return emlite::Val::get("usbVersionSubminor").as<unsigned char>();
}

unsigned char USBDevice::deviceClass() const {
    return emlite::Val::get("deviceClass").as<unsigned char>();
}

unsigned char USBDevice::deviceSubclass() const {
    return emlite::Val::get("deviceSubclass").as<unsigned char>();
}

unsigned char USBDevice::deviceProtocol() const {
    return emlite::Val::get("deviceProtocol").as<unsigned char>();
}

unsigned short USBDevice::vendorId() const {
    return emlite::Val::get("vendorId").as<unsigned short>();
}

unsigned short USBDevice::productId() const {
    return emlite::Val::get("productId").as<unsigned short>();
}

unsigned char USBDevice::deviceVersionMajor() const {
    return emlite::Val::get("deviceVersionMajor").as<unsigned char>();
}

unsigned char USBDevice::deviceVersionMinor() const {
    return emlite::Val::get("deviceVersionMinor").as<unsigned char>();
}

unsigned char USBDevice::deviceVersionSubminor() const {
    return emlite::Val::get("deviceVersionSubminor").as<unsigned char>();
}

jsbind::String USBDevice::manufacturerName() const {
    return emlite::Val::get("manufacturerName").as<jsbind::String>();
}

jsbind::String USBDevice::productName() const {
    return emlite::Val::get("productName").as<jsbind::String>();
}

jsbind::String USBDevice::serialNumber() const {
    return emlite::Val::get("serialNumber").as<jsbind::String>();
}

USBConfiguration USBDevice::configuration() const {
    return emlite::Val::get("configuration").as<USBConfiguration>();
}

jsbind::TypedArray<USBConfiguration> USBDevice::configurations() const {
    return emlite::Val::get("configurations").as<jsbind::TypedArray<USBConfiguration>>();
}

bool USBDevice::opened() const {
    return emlite::Val::get("opened").as<bool>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::open() {
    return emlite::Val::call("open").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::close() {
    return emlite::Val::call("close").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::forget() {
    return emlite::Val::call("forget").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::selectConfiguration(unsigned char configurationValue) {
    return emlite::Val::call("selectConfiguration", configurationValue).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::claimInterface(unsigned char interfaceNumber) {
    return emlite::Val::call("claimInterface", interfaceNumber).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::releaseInterface(unsigned char interfaceNumber) {
    return emlite::Val::call("releaseInterface", interfaceNumber).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::selectAlternateInterface(unsigned char interfaceNumber, unsigned char alternateSetting) {
    return emlite::Val::call("selectAlternateInterface", interfaceNumber, alternateSetting).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<USBInTransferResult> USBDevice::controlTransferIn(const USBControlTransferParameters& setup, unsigned short length) {
    return emlite::Val::call("controlTransferIn", setup, length).as<jsbind::Promise<USBInTransferResult>>();
}

jsbind::Promise<USBOutTransferResult> USBDevice::controlTransferOut(const USBControlTransferParameters& setup) {
    return emlite::Val::call("controlTransferOut", setup).as<jsbind::Promise<USBOutTransferResult>>();
}

jsbind::Promise<USBOutTransferResult> USBDevice::controlTransferOut(const USBControlTransferParameters& setup, const jsbind::Any& data) {
    return emlite::Val::call("controlTransferOut", setup, data).as<jsbind::Promise<USBOutTransferResult>>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::clearHalt(const USBDirection& direction, unsigned char endpointNumber) {
    return emlite::Val::call("clearHalt", direction, endpointNumber).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<USBInTransferResult> USBDevice::transferIn(unsigned char endpointNumber, unsigned long length) {
    return emlite::Val::call("transferIn", endpointNumber, length).as<jsbind::Promise<USBInTransferResult>>();
}

jsbind::Promise<USBOutTransferResult> USBDevice::transferOut(unsigned char endpointNumber, const jsbind::Any& data) {
    return emlite::Val::call("transferOut", endpointNumber, data).as<jsbind::Promise<USBOutTransferResult>>();
}

jsbind::Promise<USBIsochronousInTransferResult> USBDevice::isochronousTransferIn(unsigned char endpointNumber, jsbind::TypedArray<unsigned long> packetLengths) {
    return emlite::Val::call("isochronousTransferIn", endpointNumber, packetLengths).as<jsbind::Promise<USBIsochronousInTransferResult>>();
}

jsbind::Promise<USBIsochronousOutTransferResult> USBDevice::isochronousTransferOut(unsigned char endpointNumber, const jsbind::Any& data, jsbind::TypedArray<unsigned long> packetLengths) {
    return emlite::Val::call("isochronousTransferOut", endpointNumber, data, packetLengths).as<jsbind::Promise<USBIsochronousOutTransferResult>>();
}

jsbind::Promise<jsbind::Undefined> USBDevice::reset() {
    return emlite::Val::call("reset").as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind