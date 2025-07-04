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
    SerialPortRequestOptions clone() const noexcept;
    jsbind::Sequence<jsbind::Any> filters() const;
    void filters(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> allowedBluetoothServiceClassIds() const;
    void allowedBluetoothServiceClassIds(const jsbind::Sequence<jsbind::Any>& value);
};

class Serial : public EventTarget {
    explicit Serial(Handle h) noexcept;

public:
    explicit Serial(const emlite::Val &val) noexcept;
    static Serial take_ownership(Handle h) noexcept;

    Serial clone() const noexcept;
    jsbind::Any onconnect() const;
    void onconnect(const jsbind::Any& value);
    jsbind::Any ondisconnect() const;
    void ondisconnect(const jsbind::Any& value);
    jsbind::Promise getPorts();
    jsbind::Promise requestPort(const SerialPortRequestOptions& options);
};

