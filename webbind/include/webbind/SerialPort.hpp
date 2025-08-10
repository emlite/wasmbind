#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "SerialPortInfo.hpp"
#include "SerialOptions.hpp"
#include "SerialOutputSignals.hpp"
#include "SerialInputSignals.hpp"

namespace webbind {

class ReadableStream;
class WritableStream;

/// Interface SerialPort
/// [`SerialPort`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPort)
class SerialPort : public EventTarget {
    explicit SerialPort(Handle h) noexcept;
public:
    explicit SerialPort(const emlite::Val &val) noexcept;
    static SerialPort take_ownership(Handle h) noexcept;
    [[nodiscard]] SerialPort clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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

} // namespace webbind