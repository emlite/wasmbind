#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "USBControlTransferParameters.hpp"
#include "enums.hpp"

namespace webbind {

class USBConfiguration;
class USBInTransferResult;
class USBOutTransferResult;
class USBIsochronousInTransferResult;
class USBIsochronousOutTransferResult;

/// Interface USBDevice
/// [`USBDevice`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice)
class USBDevice : public emlite::Val {
    explicit USBDevice(Handle h) noexcept;
public:
    explicit USBDevice(const emlite::Val &val) noexcept;
    static USBDevice take_ownership(Handle h) noexcept;
    [[nodiscard]] USBDevice clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`USBDevice.usbVersionMajor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionMajor)
    /// [`USBDevice.usbVersionMajor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionMajor)
    [[nodiscard]] unsigned char usbVersionMajor() const;
    /// [`USBDevice.usbVersionMinor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionMinor)
    /// [`USBDevice.usbVersionMinor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionMinor)
    [[nodiscard]] unsigned char usbVersionMinor() const;
    /// [`USBDevice.usbVersionSubminor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionSubminor)
    /// [`USBDevice.usbVersionSubminor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionSubminor)
    [[nodiscard]] unsigned char usbVersionSubminor() const;
    /// [`USBDevice.deviceClass`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceClass)
    /// [`USBDevice.deviceClass`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceClass)
    [[nodiscard]] unsigned char deviceClass() const;
    /// [`USBDevice.deviceSubclass`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceSubclass)
    /// [`USBDevice.deviceSubclass`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceSubclass)
    [[nodiscard]] unsigned char deviceSubclass() const;
    /// [`USBDevice.deviceProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceProtocol)
    /// [`USBDevice.deviceProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceProtocol)
    [[nodiscard]] unsigned char deviceProtocol() const;
    /// [`USBDevice.vendorId`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/vendorId)
    /// [`USBDevice.vendorId`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/vendorId)
    [[nodiscard]] unsigned short vendorId() const;
    /// [`USBDevice.productId`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/productId)
    /// [`USBDevice.productId`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/productId)
    [[nodiscard]] unsigned short productId() const;
    /// [`USBDevice.deviceVersionMajor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionMajor)
    /// [`USBDevice.deviceVersionMajor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionMajor)
    [[nodiscard]] unsigned char deviceVersionMajor() const;
    /// [`USBDevice.deviceVersionMinor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionMinor)
    /// [`USBDevice.deviceVersionMinor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionMinor)
    [[nodiscard]] unsigned char deviceVersionMinor() const;
    /// [`USBDevice.deviceVersionSubminor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionSubminor)
    /// [`USBDevice.deviceVersionSubminor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionSubminor)
    [[nodiscard]] unsigned char deviceVersionSubminor() const;
    /// [`USBDevice.manufacturerName`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/manufacturerName)
    /// [`USBDevice.manufacturerName`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/manufacturerName)
    [[nodiscard]] jsbind::String manufacturerName() const;
    /// [`USBDevice.productName`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/productName)
    /// [`USBDevice.productName`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/productName)
    [[nodiscard]] jsbind::String productName() const;
    /// [`USBDevice.serialNumber`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/serialNumber)
    /// [`USBDevice.serialNumber`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/serialNumber)
    [[nodiscard]] jsbind::String serialNumber() const;
    /// [`USBDevice.configuration`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/configuration)
    /// [`USBDevice.configuration`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/configuration)
    [[nodiscard]] USBConfiguration configuration() const;
    /// [`USBDevice.configurations`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/configurations)
    /// [`USBDevice.configurations`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/configurations)
    [[nodiscard]] jsbind::TypedArray<USBConfiguration> configurations() const;
    /// [`USBDevice.opened`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/opened)
    /// [`USBDevice.opened`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/opened)
    [[nodiscard]] bool opened() const;
    /// The open method.
    /// [`USBDevice.open`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/open)
    jsbind::Promise<jsbind::Undefined> open();
    /// The close method.
    /// [`USBDevice.close`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/close)
    jsbind::Promise<jsbind::Undefined> close();
    /// The forget method.
    /// [`USBDevice.forget`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/forget)
    jsbind::Promise<jsbind::Undefined> forget();
    /// The selectConfiguration method.
    /// [`USBDevice.selectConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/selectConfiguration)
    jsbind::Promise<jsbind::Undefined> selectConfiguration(unsigned char configurationValue);
    /// The claimInterface method.
    /// [`USBDevice.claimInterface`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/claimInterface)
    jsbind::Promise<jsbind::Undefined> claimInterface(unsigned char interfaceNumber);
    /// The releaseInterface method.
    /// [`USBDevice.releaseInterface`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/releaseInterface)
    jsbind::Promise<jsbind::Undefined> releaseInterface(unsigned char interfaceNumber);
    /// The selectAlternateInterface method.
    /// [`USBDevice.selectAlternateInterface`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/selectAlternateInterface)
    jsbind::Promise<jsbind::Undefined> selectAlternateInterface(unsigned char interfaceNumber, unsigned char alternateSetting);
    /// The controlTransferIn method.
    /// [`USBDevice.controlTransferIn`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/controlTransferIn)
    jsbind::Promise<USBInTransferResult> controlTransferIn(const USBControlTransferParameters& setup, unsigned short length);
    /// The controlTransferOut method.
    /// [`USBDevice.controlTransferOut`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/controlTransferOut)
    jsbind::Promise<USBOutTransferResult> controlTransferOut(const USBControlTransferParameters& setup);
    /// The controlTransferOut method.
    /// [`USBDevice.controlTransferOut`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/controlTransferOut)
    jsbind::Promise<USBOutTransferResult> controlTransferOut(const USBControlTransferParameters& setup, const jsbind::Any& data);
    /// The clearHalt method.
    /// [`USBDevice.clearHalt`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/clearHalt)
    jsbind::Promise<jsbind::Undefined> clearHalt(const USBDirection& direction, unsigned char endpointNumber);
    /// The transferIn method.
    /// [`USBDevice.transferIn`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/transferIn)
    jsbind::Promise<USBInTransferResult> transferIn(unsigned char endpointNumber, unsigned long length);
    /// The transferOut method.
    /// [`USBDevice.transferOut`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/transferOut)
    jsbind::Promise<USBOutTransferResult> transferOut(unsigned char endpointNumber, const jsbind::Any& data);
    /// The isochronousTransferIn method.
    /// [`USBDevice.isochronousTransferIn`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/isochronousTransferIn)
    jsbind::Promise<USBIsochronousInTransferResult> isochronousTransferIn(unsigned char endpointNumber, jsbind::TypedArray<unsigned long> packetLengths);
    /// The isochronousTransferOut method.
    /// [`USBDevice.isochronousTransferOut`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/isochronousTransferOut)
    jsbind::Promise<USBIsochronousOutTransferResult> isochronousTransferOut(unsigned char endpointNumber, const jsbind::Any& data, jsbind::TypedArray<unsigned long> packetLengths);
    /// The reset method.
    /// [`USBDevice.reset`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/reset)
    jsbind::Promise<jsbind::Undefined> reset();
};

} // namespace webbind