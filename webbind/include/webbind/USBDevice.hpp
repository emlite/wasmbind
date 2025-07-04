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
    jsbind::Promise open();
    jsbind::Promise close();
    jsbind::Promise forget();
    jsbind::Promise selectConfiguration(unsigned char configurationValue);
    jsbind::Promise claimInterface(unsigned char interfaceNumber);
    jsbind::Promise releaseInterface(unsigned char interfaceNumber);
    jsbind::Promise selectAlternateInterface(unsigned char interfaceNumber, unsigned char alternateSetting);
    jsbind::Promise controlTransferIn(const USBControlTransferParameters& setup, unsigned short length);
    jsbind::Promise controlTransferOut(const USBControlTransferParameters& setup, const jsbind::Any& data);
    jsbind::Promise clearHalt(const USBDirection& direction, unsigned char endpointNumber);
    jsbind::Promise transferIn(unsigned char endpointNumber, unsigned long length);
    jsbind::Promise transferOut(unsigned char endpointNumber, const jsbind::Any& data);
    jsbind::Promise isochronousTransferIn(unsigned char endpointNumber, jsbind::Sequence<unsigned long> packetLengths);
    jsbind::Promise isochronousTransferOut(unsigned char endpointNumber, const jsbind::Any& data, jsbind::Sequence<unsigned long> packetLengths);
    jsbind::Promise reset();
};

