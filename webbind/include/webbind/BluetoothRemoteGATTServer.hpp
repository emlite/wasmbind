#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class BluetoothDevice;
class BluetoothRemoteGATTServer;
class BluetoothRemoteGATTService;

/// Interface BluetoothRemoteGATTServer
/// [`BluetoothRemoteGATTServer`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer)
class BluetoothRemoteGATTServer : public emlite::Val {
    explicit BluetoothRemoteGATTServer(Handle h) noexcept;
public:
    explicit BluetoothRemoteGATTServer(const emlite::Val &val) noexcept;
    static BluetoothRemoteGATTServer take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothRemoteGATTServer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `device` attribute.
    /// [`BluetoothRemoteGATTServer.device`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer/device)
    [[nodiscard]] BluetoothDevice device() const;
    /// Getter of the `connected` attribute.
    /// [`BluetoothRemoteGATTServer.connected`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer/connected)
    [[nodiscard]] bool connected() const;
    /// The connect method.
    /// [`BluetoothRemoteGATTServer.connect`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer/connect)
    jsbind::Promise<BluetoothRemoteGATTServer> connect();
    /// The disconnect method.
    /// [`BluetoothRemoteGATTServer.disconnect`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer/disconnect)
    jsbind::Undefined disconnect();
    /// The getPrimaryService method.
    /// [`BluetoothRemoteGATTServer.getPrimaryService`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer/getPrimaryService)
    jsbind::Promise<BluetoothRemoteGATTService> getPrimaryService(const jsbind::Any& service);
    /// The getPrimaryServices method.
    /// [`BluetoothRemoteGATTServer.getPrimaryServices`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer/getPrimaryServices)
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> getPrimaryServices();
    /// The getPrimaryServices method.
    /// [`BluetoothRemoteGATTServer.getPrimaryServices`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTServer/getPrimaryServices)
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> getPrimaryServices(const jsbind::Any& service);
};

} // namespace webbind