#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class SerialPort;
class SerialPortRequestOptions;


class SerialPortRequestOptions : public emlite::Val {
  explicit SerialPortRequestOptions(Handle h) noexcept;
public:
    static SerialPortRequestOptions take_ownership(Handle h) noexcept;
    explicit SerialPortRequestOptions(const emlite::Val &val) noexcept;
    SerialPortRequestOptions() noexcept;
    [[nodiscard]] SerialPortRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> filters() const;
    void filters(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> allowedBluetoothServiceClassIds() const;
    void allowedBluetoothServiceClassIds(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The Serial class.
/// [`Serial`](https://developer.mozilla.org/en-US/docs/Web/API/Serial)
class Serial : public EventTarget {
    explicit Serial(Handle h) noexcept;

public:
    explicit Serial(const emlite::Val &val) noexcept;
    static Serial take_ownership(Handle h) noexcept;

    [[nodiscard]] Serial clone() const noexcept;
    /// Getter of the `onconnect` attribute.
    /// [`Serial.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/Serial/onconnect)
    [[nodiscard]] jsbind::Any onconnect() const;
    /// Setter of the `onconnect` attribute.
    /// [`Serial.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/Serial/onconnect)
    void onconnect(const jsbind::Any& value);
    /// Getter of the `ondisconnect` attribute.
    /// [`Serial.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/Serial/ondisconnect)
    [[nodiscard]] jsbind::Any ondisconnect() const;
    /// Setter of the `ondisconnect` attribute.
    /// [`Serial.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/Serial/ondisconnect)
    void ondisconnect(const jsbind::Any& value);
    /// The getPorts method.
    /// [`Serial.getPorts`](https://developer.mozilla.org/en-US/docs/Web/API/Serial/getPorts)
    jsbind::Promise<jsbind::TypedArray<SerialPort>> getPorts();
    /// The requestPort method.
    /// [`Serial.requestPort`](https://developer.mozilla.org/en-US/docs/Web/API/Serial/requestPort)
    jsbind::Promise<SerialPort> requestPort();
    /// The requestPort method.
    /// [`Serial.requestPort`](https://developer.mozilla.org/en-US/docs/Web/API/Serial/requestPort)
    jsbind::Promise<SerialPort> requestPort(const SerialPortRequestOptions& options);
};

