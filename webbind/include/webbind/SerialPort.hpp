#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class ReadableStream;
class WritableStream;
class SerialPortInfo;
class SerialOptions;
class SerialOutputSignals;
class SerialInputSignals;


class SerialPortInfo : public emlite::Val {
  explicit SerialPortInfo(Handle h) noexcept;
public:
    static SerialPortInfo take_ownership(Handle h) noexcept;
    explicit SerialPortInfo(const emlite::Val &val) noexcept;
    SerialPortInfo() noexcept;
    SerialPortInfo clone() const noexcept;
    unsigned short usbVendorId() const;
    void usbVendorId(unsigned short value);
    unsigned short usbProductId() const;
    void usbProductId(unsigned short value);
    jsbind::Any bluetoothServiceClassId() const;
    void bluetoothServiceClassId(const jsbind::Any& value);
};

class SerialOptions : public emlite::Val {
  explicit SerialOptions(Handle h) noexcept;
public:
    static SerialOptions take_ownership(Handle h) noexcept;
    explicit SerialOptions(const emlite::Val &val) noexcept;
    SerialOptions() noexcept;
    SerialOptions clone() const noexcept;
    unsigned long baudRate() const;
    void baudRate(unsigned long value);
    unsigned char dataBits() const;
    void dataBits(unsigned char value);
    unsigned char stopBits() const;
    void stopBits(unsigned char value);
    ParityType parity() const;
    void parity(const ParityType& value);
    unsigned long bufferSize() const;
    void bufferSize(unsigned long value);
    FlowControlType flowControl() const;
    void flowControl(const FlowControlType& value);
};

class SerialOutputSignals : public emlite::Val {
  explicit SerialOutputSignals(Handle h) noexcept;
public:
    static SerialOutputSignals take_ownership(Handle h) noexcept;
    explicit SerialOutputSignals(const emlite::Val &val) noexcept;
    SerialOutputSignals() noexcept;
    SerialOutputSignals clone() const noexcept;
    bool dataTerminalReady() const;
    void dataTerminalReady(bool value);
    bool requestToSend() const;
    void requestToSend(bool value);
    bool break_() const;
    void break_(bool value);
};

class SerialInputSignals : public emlite::Val {
  explicit SerialInputSignals(Handle h) noexcept;
public:
    static SerialInputSignals take_ownership(Handle h) noexcept;
    explicit SerialInputSignals(const emlite::Val &val) noexcept;
    SerialInputSignals() noexcept;
    SerialInputSignals clone() const noexcept;
    bool dataCarrierDetect() const;
    void dataCarrierDetect(bool value);
    bool clearToSend() const;
    void clearToSend(bool value);
    bool ringIndicator() const;
    void ringIndicator(bool value);
    bool dataSetReady() const;
    void dataSetReady(bool value);
};

class SerialPort : public EventTarget {
    explicit SerialPort(Handle h) noexcept;

public:
    explicit SerialPort(const emlite::Val &val) noexcept;
    static SerialPort take_ownership(Handle h) noexcept;

    SerialPort clone() const noexcept;
    jsbind::Any onconnect() const;
    void onconnect(const jsbind::Any& value);
    jsbind::Any ondisconnect() const;
    void ondisconnect(const jsbind::Any& value);
    bool connected() const;
    ReadableStream readable() const;
    WritableStream writable() const;
    SerialPortInfo getInfo();
    jsbind::Promise open(const SerialOptions& options);
    jsbind::Promise setSignals();
    jsbind::Promise setSignals(const SerialOutputSignals& signals);
    jsbind::Promise getSignals();
    jsbind::Promise close();
    jsbind::Promise forget();
};

