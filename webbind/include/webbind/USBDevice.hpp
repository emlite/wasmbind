#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBConfiguration;
class USBInTransferResult;
class USBControlTransferParameters;
class USBOutTransferResult;
class USBIsochronousInTransferResult;
class USBIsochronousOutTransferResult;


class USBControlTransferParameters : public emlite::Val {
  explicit USBControlTransferParameters(Handle h) noexcept;
public:
    static USBControlTransferParameters take_ownership(Handle h) noexcept;
    explicit USBControlTransferParameters(const emlite::Val &val) noexcept;
    USBControlTransferParameters() noexcept;
    [[nodiscard]] USBControlTransferParameters clone() const noexcept;
    [[nodiscard]] USBRequestType requestType() const;
    void requestType(const USBRequestType& value);
    [[nodiscard]] USBRecipient recipient() const;
    void recipient(const USBRecipient& value);
    [[nodiscard]] unsigned char request() const;
    void request(unsigned char value);
    [[nodiscard]] unsigned short value() const;
    void value(unsigned short value);
    [[nodiscard]] unsigned short index() const;
    void index(unsigned short value);
};

/// The USBDevice class.
/// [`USBDevice`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice)
class USBDevice : public emlite::Val {
    explicit USBDevice(Handle h) noexcept;

public:
    explicit USBDevice(const emlite::Val &val) noexcept;
    static USBDevice take_ownership(Handle h) noexcept;

    [[nodiscard]] USBDevice clone() const noexcept;
    /// Getter of the `usbVersionMajor` attribute.
    /// [`USBDevice.usbVersionMajor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionMajor)
    [[nodiscard]] unsigned char usbVersionMajor() const;
    /// Getter of the `usbVersionMinor` attribute.
    /// [`USBDevice.usbVersionMinor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionMinor)
    [[nodiscard]] unsigned char usbVersionMinor() const;
    /// Getter of the `usbVersionSubminor` attribute.
    /// [`USBDevice.usbVersionSubminor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/usbVersionSubminor)
    [[nodiscard]] unsigned char usbVersionSubminor() const;
    /// Getter of the `deviceClass` attribute.
    /// [`USBDevice.deviceClass`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceClass)
    [[nodiscard]] unsigned char deviceClass() const;
    /// Getter of the `deviceSubclass` attribute.
    /// [`USBDevice.deviceSubclass`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceSubclass)
    [[nodiscard]] unsigned char deviceSubclass() const;
    /// Getter of the `deviceProtocol` attribute.
    /// [`USBDevice.deviceProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceProtocol)
    [[nodiscard]] unsigned char deviceProtocol() const;
    /// Getter of the `vendorId` attribute.
    /// [`USBDevice.vendorId`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/vendorId)
    [[nodiscard]] unsigned short vendorId() const;
    /// Getter of the `productId` attribute.
    /// [`USBDevice.productId`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/productId)
    [[nodiscard]] unsigned short productId() const;
    /// Getter of the `deviceVersionMajor` attribute.
    /// [`USBDevice.deviceVersionMajor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionMajor)
    [[nodiscard]] unsigned char deviceVersionMajor() const;
    /// Getter of the `deviceVersionMinor` attribute.
    /// [`USBDevice.deviceVersionMinor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionMinor)
    [[nodiscard]] unsigned char deviceVersionMinor() const;
    /// Getter of the `deviceVersionSubminor` attribute.
    /// [`USBDevice.deviceVersionSubminor`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/deviceVersionSubminor)
    [[nodiscard]] unsigned char deviceVersionSubminor() const;
    /// Getter of the `manufacturerName` attribute.
    /// [`USBDevice.manufacturerName`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/manufacturerName)
    [[nodiscard]] jsbind::String manufacturerName() const;
    /// Getter of the `productName` attribute.
    /// [`USBDevice.productName`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/productName)
    [[nodiscard]] jsbind::String productName() const;
    /// Getter of the `serialNumber` attribute.
    /// [`USBDevice.serialNumber`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/serialNumber)
    [[nodiscard]] jsbind::String serialNumber() const;
    /// Getter of the `configuration` attribute.
    /// [`USBDevice.configuration`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/configuration)
    [[nodiscard]] USBConfiguration configuration() const;
    /// Getter of the `configurations` attribute.
    /// [`USBDevice.configurations`](https://developer.mozilla.org/en-US/docs/Web/API/USBDevice/configurations)
    [[nodiscard]] jsbind::TypedArray<USBConfiguration> configurations() const;
    /// Getter of the `opened` attribute.
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

