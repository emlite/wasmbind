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
    WatchAdvertisementsOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class BluetoothDevice : public EventTarget {
    explicit BluetoothDevice(Handle h) noexcept;

public:
    explicit BluetoothDevice(const emlite::Val &val) noexcept;
    static BluetoothDevice take_ownership(Handle h) noexcept;

    BluetoothDevice clone() const noexcept;
    jsbind::DOMString id() const;
    jsbind::DOMString name() const;
    BluetoothRemoteGATTServer gatt() const;
    jsbind::Promise forget();
    jsbind::Promise watchAdvertisements(const WatchAdvertisementsOptions& options);
    bool watchingAdvertisements() const;
    jsbind::Any onadvertisementreceived() const;
    void onadvertisementreceived(const jsbind::Any& value);
    jsbind::Any ongattserverdisconnected() const;
    void ongattserverdisconnected(const jsbind::Any& value);
    jsbind::Any oncharacteristicvaluechanged() const;
    void oncharacteristicvaluechanged(const jsbind::Any& value);
    jsbind::Any onserviceadded() const;
    void onserviceadded(const jsbind::Any& value);
    jsbind::Any onservicechanged() const;
    void onservicechanged(const jsbind::Any& value);
    jsbind::Any onserviceremoved() const;
    void onserviceremoved(const jsbind::Any& value);
};

