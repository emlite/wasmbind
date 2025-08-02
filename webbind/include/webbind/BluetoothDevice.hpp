#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class BluetoothRemoteGATTServer;
class WatchAdvertisementsOptions;
class AbortSignal;


class WatchAdvertisementsOptions : public emlite::Val {
  explicit WatchAdvertisementsOptions(Handle h) noexcept;
public:
    static WatchAdvertisementsOptions take_ownership(Handle h) noexcept;
    explicit WatchAdvertisementsOptions(const emlite::Val &val) noexcept;
    WatchAdvertisementsOptions() noexcept;
    [[nodiscard]] WatchAdvertisementsOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The BluetoothDevice class.
/// [`BluetoothDevice`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice)
class BluetoothDevice : public EventTarget {
    explicit BluetoothDevice(Handle h) noexcept;

public:
    explicit BluetoothDevice(const emlite::Val &val) noexcept;
    static BluetoothDevice take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothDevice clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `id` attribute.
    /// [`BluetoothDevice.id`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `name` attribute.
    /// [`BluetoothDevice.name`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `gatt` attribute.
    /// [`BluetoothDevice.gatt`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/gatt)
    [[nodiscard]] BluetoothRemoteGATTServer gatt() const;
    /// The forget method.
    /// [`BluetoothDevice.forget`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/forget)
    jsbind::Promise<jsbind::Undefined> forget();
    /// The watchAdvertisements method.
    /// [`BluetoothDevice.watchAdvertisements`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/watchAdvertisements)
    jsbind::Promise<jsbind::Undefined> watchAdvertisements();
    /// The watchAdvertisements method.
    /// [`BluetoothDevice.watchAdvertisements`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/watchAdvertisements)
    jsbind::Promise<jsbind::Undefined> watchAdvertisements(const WatchAdvertisementsOptions& options);
    /// Getter of the `watchingAdvertisements` attribute.
    /// [`BluetoothDevice.watchingAdvertisements`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/watchingAdvertisements)
    [[nodiscard]] bool watchingAdvertisements() const;
    /// Getter of the `onadvertisementreceived` attribute.
    /// [`BluetoothDevice.onadvertisementreceived`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/onadvertisementreceived)
    [[nodiscard]] jsbind::Any onadvertisementreceived() const;
    /// Setter of the `onadvertisementreceived` attribute.
    /// [`BluetoothDevice.onadvertisementreceived`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/onadvertisementreceived)
    void onadvertisementreceived(const jsbind::Any& value);
    /// Getter of the `ongattserverdisconnected` attribute.
    /// [`BluetoothDevice.ongattserverdisconnected`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/ongattserverdisconnected)
    [[nodiscard]] jsbind::Any ongattserverdisconnected() const;
    /// Setter of the `ongattserverdisconnected` attribute.
    /// [`BluetoothDevice.ongattserverdisconnected`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/ongattserverdisconnected)
    void ongattserverdisconnected(const jsbind::Any& value);
    /// Getter of the `oncharacteristicvaluechanged` attribute.
    /// [`BluetoothDevice.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/oncharacteristicvaluechanged)
    [[nodiscard]] jsbind::Any oncharacteristicvaluechanged() const;
    /// Setter of the `oncharacteristicvaluechanged` attribute.
    /// [`BluetoothDevice.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/oncharacteristicvaluechanged)
    void oncharacteristicvaluechanged(const jsbind::Any& value);
    /// Getter of the `onserviceadded` attribute.
    /// [`BluetoothDevice.onserviceadded`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/onserviceadded)
    [[nodiscard]] jsbind::Any onserviceadded() const;
    /// Setter of the `onserviceadded` attribute.
    /// [`BluetoothDevice.onserviceadded`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/onserviceadded)
    void onserviceadded(const jsbind::Any& value);
    /// Getter of the `onservicechanged` attribute.
    /// [`BluetoothDevice.onservicechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/onservicechanged)
    [[nodiscard]] jsbind::Any onservicechanged() const;
    /// Setter of the `onservicechanged` attribute.
    /// [`BluetoothDevice.onservicechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/onservicechanged)
    void onservicechanged(const jsbind::Any& value);
    /// Getter of the `onserviceremoved` attribute.
    /// [`BluetoothDevice.onserviceremoved`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/onserviceremoved)
    [[nodiscard]] jsbind::Any onserviceremoved() const;
    /// Setter of the `onserviceremoved` attribute.
    /// [`BluetoothDevice.onserviceremoved`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothDevice/onserviceremoved)
    void onserviceremoved(const jsbind::Any& value);
};

