#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaCapabilities;
class Permissions;
class Serial;
class ServiceWorkerContainer;
class HID;
class USB;
class NetworkInformation;
class StorageBucketManager;
class StorageManager;
class NavigatorUAData;
class LockManager;
class GPU;
class ML;

/// Interface WorkerNavigator
/// [`WorkerNavigator`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator)
class WorkerNavigator : public emlite::Val {
    explicit WorkerNavigator(Handle h) noexcept;
public:
    explicit WorkerNavigator(const emlite::Val &val) noexcept;
    static WorkerNavigator take_ownership(Handle h) noexcept;
    [[nodiscard]] WorkerNavigator clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`WorkerNavigator.mediaCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/mediaCapabilities)
    /// [`WorkerNavigator.mediaCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/mediaCapabilities)
    [[nodiscard]] MediaCapabilities mediaCapabilities() const;
    /// [`WorkerNavigator.permissions`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/permissions)
    /// [`WorkerNavigator.permissions`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/permissions)
    [[nodiscard]] Permissions permissions() const;
    /// [`WorkerNavigator.serial`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/serial)
    /// [`WorkerNavigator.serial`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/serial)
    [[nodiscard]] Serial serial() const;
    /// [`WorkerNavigator.serviceWorker`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/serviceWorker)
    /// [`WorkerNavigator.serviceWorker`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/serviceWorker)
    [[nodiscard]] ServiceWorkerContainer serviceWorker() const;
    /// [`WorkerNavigator.hid`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/hid)
    /// [`WorkerNavigator.hid`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/hid)
    [[nodiscard]] HID hid() const;
    /// [`WorkerNavigator.usb`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/usb)
    /// [`WorkerNavigator.usb`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/usb)
    [[nodiscard]] USB usb() const;
    /// The setAppBadge method.
    /// [`WorkerNavigator.setAppBadge`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/setAppBadge)
    jsbind::Promise<jsbind::Undefined> setAppBadge();
    /// The setAppBadge method.
    /// [`WorkerNavigator.setAppBadge`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/setAppBadge)
    jsbind::Promise<jsbind::Undefined> setAppBadge(long long contents);
    /// The clearAppBadge method.
    /// [`WorkerNavigator.clearAppBadge`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/clearAppBadge)
    jsbind::Promise<jsbind::Undefined> clearAppBadge();
    /// [`WorkerNavigator.deviceMemory`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/deviceMemory)
    /// [`WorkerNavigator.deviceMemory`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/deviceMemory)
    [[nodiscard]] double deviceMemory() const;
    /// [`WorkerNavigator.globalPrivacyControl`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/globalPrivacyControl)
    /// [`WorkerNavigator.globalPrivacyControl`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/globalPrivacyControl)
    [[nodiscard]] bool globalPrivacyControl() const;
    /// The taintEnabled method.
    /// [`WorkerNavigator.taintEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/taintEnabled)
    bool taintEnabled();
    /// [`WorkerNavigator.oscpu`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/oscpu)
    /// [`WorkerNavigator.oscpu`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/oscpu)
    [[nodiscard]] jsbind::String oscpu() const;
    /// [`WorkerNavigator.language`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/language)
    /// [`WorkerNavigator.language`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/language)
    [[nodiscard]] jsbind::String language() const;
    /// [`WorkerNavigator.languages`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/languages)
    /// [`WorkerNavigator.languages`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/languages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> languages() const;
    /// [`WorkerNavigator.onLine`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/onLine)
    /// [`WorkerNavigator.onLine`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/onLine)
    [[nodiscard]] bool onLine() const;
    /// [`WorkerNavigator.hardwareConcurrency`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/hardwareConcurrency)
    /// [`WorkerNavigator.hardwareConcurrency`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/hardwareConcurrency)
    [[nodiscard]] long long hardwareConcurrency() const;
    /// [`WorkerNavigator.connection`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/connection)
    /// [`WorkerNavigator.connection`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/connection)
    [[nodiscard]] NetworkInformation connection() const;
    /// [`WorkerNavigator.storageBuckets`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/storageBuckets)
    /// [`WorkerNavigator.storageBuckets`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/storageBuckets)
    [[nodiscard]] StorageBucketManager storageBuckets() const;
    /// [`WorkerNavigator.storage`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/storage)
    /// [`WorkerNavigator.storage`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/storage)
    [[nodiscard]] StorageManager storage() const;
    /// [`WorkerNavigator.userAgentData`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/userAgentData)
    /// [`WorkerNavigator.userAgentData`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/userAgentData)
    [[nodiscard]] NavigatorUAData userAgentData() const;
    /// [`WorkerNavigator.locks`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/locks)
    /// [`WorkerNavigator.locks`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/locks)
    [[nodiscard]] LockManager locks() const;
    /// [`WorkerNavigator.gpu`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/gpu)
    /// [`WorkerNavigator.gpu`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/gpu)
    [[nodiscard]] GPU gpu() const;
    /// [`WorkerNavigator.ml`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/ml)
    /// [`WorkerNavigator.ml`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/ml)
    [[nodiscard]] ML ml() const;
};

} // namespace webbind