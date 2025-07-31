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
    [[nodiscard]] SerialPortInfo clone() const noexcept;
    [[nodiscard]] unsigned short usbVendorId() const;
    void usbVendorId(unsigned short value);
    [[nodiscard]] unsigned short usbProductId() const;
    void usbProductId(unsigned short value);
    [[nodiscard]] jsbind::Any bluetoothServiceClassId() const;
    void bluetoothServiceClassId(const jsbind::Any& value);
};

class SerialOptions : public emlite::Val {
  explicit SerialOptions(Handle h) noexcept;
public:
    static SerialOptions take_ownership(Handle h) noexcept;
    explicit SerialOptions(const emlite::Val &val) noexcept;
    SerialOptions() noexcept;
    [[nodiscard]] SerialOptions clone() const noexcept;
    [[nodiscard]] unsigned long baudRate() const;
    void baudRate(unsigned long value);
    [[nodiscard]] unsigned char dataBits() const;
    void dataBits(unsigned char value);
    [[nodiscard]] unsigned char stopBits() const;
    void stopBits(unsigned char value);
    [[nodiscard]] ParityType parity() const;
    void parity(const ParityType& value);
    [[nodiscard]] unsigned long bufferSize() const;
    void bufferSize(unsigned long value);
    [[nodiscard]] FlowControlType flowControl() const;
    void flowControl(const FlowControlType& value);
};

class SerialOutputSignals : public emlite::Val {
  explicit SerialOutputSignals(Handle h) noexcept;
public:
    static SerialOutputSignals take_ownership(Handle h) noexcept;
    explicit SerialOutputSignals(const emlite::Val &val) noexcept;
    SerialOutputSignals() noexcept;
    [[nodiscard]] SerialOutputSignals clone() const noexcept;
    [[nodiscard]] bool dataTerminalReady() const;
    void dataTerminalReady(bool value);
    [[nodiscard]] bool requestToSend() const;
    void requestToSend(bool value);
    [[nodiscard]] bool break_() const;
    void break_(bool value);
};

class SerialInputSignals : public emlite::Val {
  explicit SerialInputSignals(Handle h) noexcept;
public:
    static SerialInputSignals take_ownership(Handle h) noexcept;
    explicit SerialInputSignals(const emlite::Val &val) noexcept;
    SerialInputSignals() noexcept;
    [[nodiscard]] SerialInputSignals clone() const noexcept;
    [[nodiscard]] bool dataCarrierDetect() const;
    void dataCarrierDetect(bool value);
    [[nodiscard]] bool clearToSend() const;
    void clearToSend(bool value);
    [[nodiscard]] bool ringIndicator() const;
    void ringIndicator(bool value);
    [[nodiscard]] bool dataSetReady() const;
    void dataSetReady(bool value);
};

/// The SerialPort class.
/// [`SerialPort`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort)
class SerialPort : public EventTarget {
    explicit SerialPort(Handle h) noexcept;

public:
    explicit SerialPort(const emlite::Val &val) noexcept;
    static SerialPort take_ownership(Handle h) noexcept;

    [[nodiscard]] SerialPort clone() const noexcept;
    /// Getter of the `onconnect` attribute.
    /// [`SerialPort.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/onconnect)
    [[nodiscard]] jsbind::Any onconnect() const;
    /// Setter of the `onconnect` attribute.
    /// [`SerialPort.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/onconnect)
    void onconnect(const jsbind::Any& value);
    /// Getter of the `ondisconnect` attribute.
    /// [`SerialPort.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/ondisconnect)
    [[nodiscard]] jsbind::Any ondisconnect() const;
    /// Setter of the `ondisconnect` attribute.
    /// [`SerialPort.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/ondisconnect)
    void ondisconnect(const jsbind::Any& value);
    /// Getter of the `connected` attribute.
    /// [`SerialPort.connected`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/connected)
    [[nodiscard]] bool connected() const;
    /// Getter of the `readable` attribute.
    /// [`SerialPort.readable`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// Getter of the `writable` attribute.
    /// [`SerialPort.writable`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/writable)
    [[nodiscard]] WritableStream writable() const;
    /// The getInfo method.
    /// [`SerialPort.getInfo`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/getInfo)
    SerialPortInfo getInfo();
    /// The open method.
    /// [`SerialPort.open`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/open)
    jsbind::Promise<jsbind::Undefined> open(const SerialOptions& options);
    /// The setSignals method.
    /// [`SerialPort.setSignals`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/setSignals)
    jsbind::Promise<jsbind::Undefined> setSignals();
    /// The setSignals method.
    /// [`SerialPort.setSignals`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/setSignals)
    jsbind::Promise<jsbind::Undefined> setSignals(const SerialOutputSignals& signals);
    /// The getSignals method.
    /// [`SerialPort.getSignals`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/getSignals)
    jsbind::Promise<SerialInputSignals> getSignals();
    /// The close method.
    /// [`SerialPort.close`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/close)
    jsbind::Promise<jsbind::Undefined> close();
    /// The forget method.
    /// [`SerialPort.forget`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort/forget)
    jsbind::Promise<jsbind::Undefined> forget();
};

