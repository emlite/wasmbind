#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class ServiceWorker;
class NavigationPreloadManager;
class ServiceWorkerRegistration;
class BackgroundFetchManager;
class SyncManager;
class ContentIndex;
class CookieStoreManager;
class NotificationOptions;
class Notification;
class GetNotificationOptions;
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
    /// [`ServiceWorkerRegistration.installing`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/installing)
    /// [`ServiceWorkerRegistration.installing`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/installing)
    [[nodiscard]] ServiceWorker installing() const;
    /// [`ServiceWorkerRegistration.waiting`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/waiting)
    /// [`ServiceWorkerRegistration.waiting`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/waiting)
    [[nodiscard]] ServiceWorker waiting() const;
    /// [`ServiceWorkerRegistration.active`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/active)
    /// [`ServiceWorkerRegistration.active`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/active)
    [[nodiscard]] ServiceWorker active() const;
    /// [`ServiceWorkerRegistration.navigationPreload`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/navigationPreload)
    /// [`ServiceWorkerRegistration.navigationPreload`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/navigationPreload)
    [[nodiscard]] NavigationPreloadManager navigationPreload() const;
    /// [`ServiceWorkerRegistration.scope`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/scope)
    /// [`ServiceWorkerRegistration.scope`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/scope)
    [[nodiscard]] jsbind::String scope() const;
    /// [`ServiceWorkerRegistration.updateViaCache`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/updateViaCache)
    /// [`ServiceWorkerRegistration.updateViaCache`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/updateViaCache)
    [[nodiscard]] ServiceWorkerUpdateViaCache updateViaCache() const;
    /// The update method.
    /// [`ServiceWorkerRegistration.update`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/update)
    jsbind::Promise<ServiceWorkerRegistration> update();
    /// The unregister method.
    /// [`ServiceWorkerRegistration.unregister`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/unregister)
    jsbind::Promise<bool> unregister();
    /// [`ServiceWorkerRegistration.onupdatefound`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/onupdatefound)
    /// [`ServiceWorkerRegistration.onupdatefound`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/onupdatefound)
    [[nodiscard]] jsbind::Any onupdatefound() const;
    /// Setter of the `onupdatefound` attribute.
    /// [`ServiceWorkerRegistration.onupdatefound`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/onupdatefound)
    void onupdatefound(const jsbind::Any& value);
    /// [`ServiceWorkerRegistration.backgroundFetch`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/backgroundFetch)
    /// [`ServiceWorkerRegistration.backgroundFetch`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/backgroundFetch)
    [[nodiscard]] BackgroundFetchManager backgroundFetch() const;
    /// [`ServiceWorkerRegistration.sync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/sync)
    /// [`ServiceWorkerRegistration.sync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/sync)
    [[nodiscard]] SyncManager sync() const;
    /// [`ServiceWorkerRegistration.index`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/index)
    /// [`ServiceWorkerRegistration.index`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/index)
    [[nodiscard]] ContentIndex index() const;
    /// [`ServiceWorkerRegistration.cookies`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/cookies)
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
    /// [`ServiceWorkerRegistration.paymentManager`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/paymentManager)
    /// [`ServiceWorkerRegistration.paymentManager`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/paymentManager)
    [[nodiscard]] PaymentManager paymentManager() const;
    /// [`ServiceWorkerRegistration.periodicSync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/periodicSync)
    /// [`ServiceWorkerRegistration.periodicSync`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/periodicSync)
    [[nodiscard]] PeriodicSyncManager periodicSync() const;
    /// [`ServiceWorkerRegistration.pushManager`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/pushManager)
    /// [`ServiceWorkerRegistration.pushManager`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerRegistration/pushManager)
    [[nodiscard]] PushManager pushManager() const;
};

} // namespace webbind