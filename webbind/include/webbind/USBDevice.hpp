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
    USBControlTransferParameters clone() const noexcept;
    USBRequestType requestType() const;
    void requestType(const USBRequestType& value);
    USBRecipient recipient() const;
    void recipient(const USBRecipient& value);
    unsigned char request() const;
    void request(unsigned char value);
    unsigned short value() const;
    void value(unsigned short value);
    unsigned short index() const;
    void index(unsigned short value);
};

class USBDevice : public emlite::Val {
    explicit USBDevice(Handle h) noexcept;

public:
    explicit USBDevice(const emlite::Val &val) noexcept;
    static USBDevice take_ownership(Handle h) noexcept;

    USBDevice clone() const noexcept;
    unsigned char usbVersionMajor() const;
    unsigned char usbVersionMinor() const;
    unsigned char usbVersionSubminor() const;
    unsigned char deviceClass() const;
    unsigned char deviceSubclass() const;
    unsigned char deviceProtocol() const;
    unsigned short vendorId() const;
    unsigned short productId() const;
    unsigned char deviceVersionMajor() const;
    unsigned char deviceVersionMinor() const;
    unsigned char deviceVersionSubminor() const;
    jsbind::DOMString manufacturerName() const;
    jsbind::DOMString productName() const;
    jsbind::DOMString serialNumber() const;
    USBConfiguration configuration() const;
    jsbind::FrozenArray<USBConfiguration> configurations() const;
    bool opened() const;
    jsbind::Promise<jsbind::Undefined> open();
    jsbind::Promise<jsbind::Undefined> close();
    jsbind::Promise<jsbind::Undefined> forget();
    jsbind::Promise<jsbind::Undefined> selectConfiguration(unsigned char configurationValue);
    jsbind::Promise<jsbind::Undefined> claimInterface(unsigned char interfaceNumber);
    jsbind::Promise<jsbind::Undefined> releaseInterface(unsigned char interfaceNumber);
    jsbind::Promise<jsbind::Undefined> selectAlternateInterface(unsigned char interfaceNumber, unsigned char alternateSetting);
    jsbind::Promise<USBInTransferResult> controlTransferIn(const USBControlTransferParameters& setup, unsigned short length);
    jsbind::Promise<USBOutTransferResult> controlTransferOut(const USBControlTransferParameters& setup);
    jsbind::Promise<USBOutTransferResult> controlTransferOut(const USBControlTransferParameters& setup, const jsbind::Any& data);
    jsbind::Promise<jsbind::Undefined> clearHalt(const USBDirection& direction, unsigned char endpointNumber);
    jsbind::Promise<USBInTransferResult> transferIn(unsigned char endpointNumber, unsigned long length);
    jsbind::Promise<USBOutTransferResult> transferOut(unsigned char endpointNumber, const jsbind::Any& data);
    jsbind::Promise<USBIsochronousInTransferResult> isochronousTransferIn(unsigned char endpointNumber, jsbind::Sequence<unsigned long> packetLengths);
    jsbind::Promise<USBIsochronousOutTransferResult> isochronousTransferOut(unsigned char endpointNumber, const jsbind::Any& data, jsbind::Sequence<unsigned long> packetLengths);
    jsbind::Promise<jsbind::Undefined> reset();
};

