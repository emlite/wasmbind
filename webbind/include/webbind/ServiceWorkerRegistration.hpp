#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "NotificationOptions.hpp"
#include "GetNotificationOptions.hpp"
#include "enums.hpp"

namespace webbind {

class ServiceWorker;
class NavigationPreloadManager;
class ServiceWorkerRegistration;
class BackgroundFetchManager;
class SyncManager;
class ContentIndex;
class CookieStoreManager;
class Notification;
class PaymentManager;
class PeriodicSyncManager;
class PushManager;

/// Interface ServiceWorkerRegistration
/// [`ServiceWorkerRegistration`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration)
class ServiceWorkerRegistration : public EventTarget {
    explicit ServiceWorkerRegistration(Handle h) noexcept;
public:
    explicit ServiceWorkerRegistration(const emlite::Val &val) noexcept;
    static ServiceWorkerRegistration take_ownership(Handle h) noexcept;
    [[nodiscard]] ServiceWorkerRegistration clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `installing` attribute.
    /// [`ServiceWorkerRegistration.installing`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/installing)
    [[nodiscard]] ServiceWorker installing() const;
    /// Getter of the `waiting` attribute.
    /// [`ServiceWorkerRegistration.waiting`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/waiting)
    [[nodiscard]] ServiceWorker waiting() const;
    /// Getter of the `active` attribute.
    /// [`ServiceWorkerRegistration.active`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/active)
    [[nodiscard]] ServiceWorker active() const;
    /// Getter of the `navigationPreload` attribute.
    /// [`ServiceWorkerRegistration.navigationPreload`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/navigationPreload)
    [[nodiscard]] NavigationPreloadManager navigationPreload() const;
    /// Getter of the `scope` attribute.
    /// [`ServiceWorkerRegistration.scope`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/scope)
    [[nodiscard]] jsbind::String scope() const;
    /// Getter of the `updateViaCache` attribute.
    /// [`ServiceWorkerRegistration.updateViaCache`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/updateViaCache)
    [[nodiscard]] ServiceWorkerUpdateViaCache updateViaCache() const;
    /// The update method.
    /// [`ServiceWorkerRegistration.update`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/update)
    jsbind::Promise<ServiceWorkerRegistration> update();
    /// The unregister method.
    /// [`ServiceWorkerRegistration.unregister`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/unregister)
    jsbind::Promise<bool> unregister();
    /// Getter of the `onupdatefound` attribute.
    /// [`ServiceWorkerRegistration.onupdatefound`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/onupdatefound)
    [[nodiscard]] jsbind::Any onupdatefound() const;
    /// Setter of the `onupdatefound` attribute.
    /// [`ServiceWorkerRegistration.onupdatefound`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/onupdatefound)
    void onupdatefound(const jsbind::Any& value);
    /// Getter of the `backgroundFetch` attribute.
    /// [`ServiceWorkerRegistration.backgroundFetch`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/backgroundFetch)
    [[nodiscard]] BackgroundFetchManager backgroundFetch() const;
    /// Getter of the `sync` attribute.
    /// [`ServiceWorkerRegistration.sync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/sync)
    [[nodiscard]] SyncManager sync() const;
    /// Getter of the `index` attribute.
    /// [`ServiceWorkerRegistration.index`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/index)
    [[nodiscard]] ContentIndex index() const;
    /// Getter of the `cookies` attribute.
    /// [`ServiceWorkerRegistration.cookies`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/cookies)
    [[nodiscard]] CookieStoreManager cookies() const;
    /// The showNotification method.
    /// [`ServiceWorkerRegistration.showNotification`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/showNotification)
    jsbind::Promise<jsbind::Undefined> showNotification(const jsbind::String& title);
    /// The showNotification method.
    /// [`ServiceWorkerRegistration.showNotification`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/showNotification)
    jsbind::Promise<jsbind::Undefined> showNotification(const jsbind::String& title, const NotificationOptions& options);
    /// The getNotifications method.
    /// [`ServiceWorkerRegistration.getNotifications`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/getNotifications)
    jsbind::Promise<jsbind::TypedArray<Notification>> getNotifications();
    /// The getNotifications method.
    /// [`ServiceWorkerRegistration.getNotifications`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/getNotifications)
    jsbind::Promise<jsbind::TypedArray<Notification>> getNotifications(const GetNotificationOptions& filter);
    /// Getter of the `paymentManager` attribute.
    /// [`ServiceWorkerRegistration.paymentManager`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/paymentManager)
    [[nodiscard]] PaymentManager paymentManager() const;
    /// Getter of the `periodicSync` attribute.
    /// [`ServiceWorkerRegistration.periodicSync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/periodicSync)
    [[nodiscard]] PeriodicSyncManager periodicSync() const;
    /// Getter of the `pushManager` attribute.
    /// [`ServiceWorkerRegistration.pushManager`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/pushManager)
    [[nodiscard]] PushManager pushManager() const;
};

} // namespace webbind