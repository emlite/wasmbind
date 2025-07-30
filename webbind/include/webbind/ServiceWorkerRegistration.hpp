#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

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
class NotificationAction;


class NotificationOptions : public emlite::Val {
  explicit NotificationOptions(Handle h) noexcept;
public:
    static NotificationOptions take_ownership(Handle h) noexcept;
    explicit NotificationOptions(const emlite::Val &val) noexcept;
    NotificationOptions() noexcept;
    NotificationOptions clone() const noexcept;
    NotificationDirection dir() const;
    void dir(const NotificationDirection& value);
    jsbind::String lang() const;
    void lang(const jsbind::String& value);
    jsbind::String body() const;
    void body(const jsbind::String& value);
    jsbind::String tag() const;
    void tag(const jsbind::String& value);
    jsbind::String image() const;
    void image(const jsbind::String& value);
    jsbind::String icon() const;
    void icon(const jsbind::String& value);
    jsbind::String badge() const;
    void badge(const jsbind::String& value);
    jsbind::Any vibrate() const;
    void vibrate(const jsbind::Any& value);
    jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    bool renotify() const;
    void renotify(bool value);
    bool silent() const;
    void silent(bool value);
    bool requireInteraction() const;
    void requireInteraction(bool value);
    jsbind::Any data() const;
    void data(const jsbind::Any& value);
    jsbind::TypedArray<NotificationAction> actions() const;
    void actions(const jsbind::TypedArray<NotificationAction>& value);
};

class GetNotificationOptions : public emlite::Val {
  explicit GetNotificationOptions(Handle h) noexcept;
public:
    static GetNotificationOptions take_ownership(Handle h) noexcept;
    explicit GetNotificationOptions(const emlite::Val &val) noexcept;
    GetNotificationOptions() noexcept;
    GetNotificationOptions clone() const noexcept;
    jsbind::String tag() const;
    void tag(const jsbind::String& value);
};

class ServiceWorkerRegistration : public EventTarget {
    explicit ServiceWorkerRegistration(Handle h) noexcept;

public:
    explicit ServiceWorkerRegistration(const emlite::Val &val) noexcept;
    static ServiceWorkerRegistration take_ownership(Handle h) noexcept;

    ServiceWorkerRegistration clone() const noexcept;
    ServiceWorker installing() const;
    ServiceWorker waiting() const;
    ServiceWorker active() const;
    NavigationPreloadManager navigationPreload() const;
    jsbind::String scope() const;
    ServiceWorkerUpdateViaCache updateViaCache() const;
    jsbind::Promise<ServiceWorkerRegistration> update();
    jsbind::Promise<bool> unregister();
    jsbind::Any onupdatefound() const;
    void onupdatefound(const jsbind::Any& value);
    BackgroundFetchManager backgroundFetch() const;
    SyncManager sync() const;
    ContentIndex index() const;
    CookieStoreManager cookies() const;
    jsbind::Promise<jsbind::Undefined> showNotification(const jsbind::String& title);
    jsbind::Promise<jsbind::Undefined> showNotification(const jsbind::String& title, const NotificationOptions& options);
    jsbind::Promise<jsbind::TypedArray<Notification>> getNotifications();
    jsbind::Promise<jsbind::TypedArray<Notification>> getNotifications(const GetNotificationOptions& filter);
    PaymentManager paymentManager() const;
    PeriodicSyncManager periodicSync() const;
    PushManager pushManager() const;
};

