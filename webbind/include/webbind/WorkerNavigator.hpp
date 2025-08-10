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
    /// Getter of the `mediaCapabilities` attribute.
    /// [`WorkerNavigator.mediaCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/mediaCapabilities)
    [[nodiscard]] MediaCapabilities mediaCapabilities() const;
    /// Getter of the `permissions` attribute.
    /// [`WorkerNavigator.permissions`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/permissions)
    [[nodiscard]] Permissions permissions() const;
    /// Getter of the `serial` attribute.
    /// [`WorkerNavigator.serial`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/serial)
    [[nodiscard]] Serial serial() const;
    /// Getter of the `serviceWorker` attribute.
    /// [`WorkerNavigator.serviceWorker`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/serviceWorker)
    [[nodiscard]] ServiceWorkerContainer serviceWorker() const;
    /// Getter of the `hid` attribute.
    /// [`WorkerNavigator.hid`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/hid)
    [[nodiscard]] HID hid() const;
    /// Getter of the `usb` attribute.
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
    /// Getter of the `deviceMemory` attribute.
    /// [`WorkerNavigator.deviceMemory`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/deviceMemory)
    [[nodiscard]] double deviceMemory() const;
    /// Getter of the `globalPrivacyControl` attribute.
    /// [`WorkerNavigator.globalPrivacyControl`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/globalPrivacyControl)
    [[nodiscard]] bool globalPrivacyControl() const;
    /// The taintEnabled method.
    /// [`WorkerNavigator.taintEnabled`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/taintEnabled)
    bool taintEnabled();
    /// Getter of the `oscpu` attribute.
    /// [`WorkerNavigator.oscpu`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/oscpu)
    [[nodiscard]] jsbind::String oscpu() const;
    /// Getter of the `language` attribute.
    /// [`WorkerNavigator.language`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/language)
    [[nodiscard]] jsbind::String language() const;
    /// Getter of the `languages` attribute.
    /// [`WorkerNavigator.languages`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/languages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> languages() const;
    /// Getter of the `onLine` attribute.
    /// [`WorkerNavigator.onLine`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/onLine)
    [[nodiscard]] bool onLine() const;
    /// Getter of the `hardwareConcurrency` attribute.
    /// [`WorkerNavigator.hardwareConcurrency`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/hardwareConcurrency)
    [[nodiscard]] long long hardwareConcurrency() const;
    /// Getter of the `connection` attribute.
    /// [`WorkerNavigator.connection`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/connection)
    [[nodiscard]] NetworkInformation connection() const;
    /// Getter of the `storageBuckets` attribute.
    /// [`WorkerNavigator.storageBuckets`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/storageBuckets)
    [[nodiscard]] StorageBucketManager storageBuckets() const;
    /// Getter of the `storage` attribute.
    /// [`WorkerNavigator.storage`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/storage)
    [[nodiscard]] StorageManager storage() const;
    /// Getter of the `userAgentData` attribute.
    /// [`WorkerNavigator.userAgentData`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/userAgentData)
    [[nodiscard]] NavigatorUAData userAgentData() const;
    /// Getter of the `locks` attribute.
    /// [`WorkerNavigator.locks`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/locks)
    [[nodiscard]] LockManager locks() const;
    /// Getter of the `gpu` attribute.
    /// [`WorkerNavigator.gpu`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/gpu)
    [[nodiscard]] GPU gpu() const;
    /// Getter of the `ml` attribute.
    /// [`WorkerNavigator.ml`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerNavigator/ml)
    [[nodiscard]] ML ml() const;
};

} // namespace webbind