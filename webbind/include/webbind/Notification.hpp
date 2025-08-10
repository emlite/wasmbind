#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class NotificationOptions;
class NotificationAction;

/// Interface Notification
/// [`Notification`](https://developer.mozilla.org/en-US/docs/Web/API/Notification)
class Notification : public EventTarget {
    explicit Notification(Handle h) noexcept;
public:
    explicit Notification(const emlite::Val &val) noexcept;
    static Notification take_ownership(Handle h) noexcept;
    [[nodiscard]] Notification clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Notification(..)` constructor, creating a new Notification instance
    Notification(const jsbind::String& title);
    /// The `new Notification(..)` constructor, creating a new Notification instance
    Notification(const jsbind::String& title, const NotificationOptions& options);
    /// Getter of the `permission` static attribute.
    /// [`Notification.permission`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/permission)
    /// [`Notification.permission`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/permission)
    [[nodiscard]] static NotificationPermission permission();
    /// The requestPermission method.
    /// [`Notification.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/requestPermission)
    static jsbind::Promise<NotificationPermission> requestPermission();
    /// The requestPermission method.
    /// [`Notification.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/requestPermission)
    static jsbind::Promise<NotificationPermission> requestPermission(const jsbind::Function& deprecatedCallback);
    /// Getter of the `maxActions` static attribute.
    /// [`Notification.maxActions`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/maxActions)
    /// [`Notification.maxActions`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/maxActions)
    [[nodiscard]] static unsigned long maxActions();
    /// [`Notification.onclick`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclick)
    /// [`Notification.onclick`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclick)
    [[nodiscard]] jsbind::Any onclick() const;
    /// Setter of the `onclick` attribute.
    /// [`Notification.onclick`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclick)
    void onclick(const jsbind::Any& value);
    /// [`Notification.onshow`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onshow)
    /// [`Notification.onshow`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onshow)
    [[nodiscard]] jsbind::Any onshow() const;
    /// Setter of the `onshow` attribute.
    /// [`Notification.onshow`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onshow)
    void onshow(const jsbind::Any& value);
    /// [`Notification.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onerror)
    /// [`Notification.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`Notification.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onerror)
    void onerror(const jsbind::Any& value);
    /// [`Notification.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclose)
    /// [`Notification.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`Notification.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclose)
    void onclose(const jsbind::Any& value);
    /// [`Notification.title`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/title)
    /// [`Notification.title`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/title)
    [[nodiscard]] jsbind::String title() const;
    /// [`Notification.dir`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/dir)
    /// [`Notification.dir`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/dir)
    [[nodiscard]] NotificationDirection dir() const;
    /// [`Notification.lang`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/lang)
    /// [`Notification.lang`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// [`Notification.body`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/body)
    /// [`Notification.body`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/body)
    [[nodiscard]] jsbind::String body() const;
    /// [`Notification.tag`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/tag)
    /// [`Notification.tag`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/tag)
    [[nodiscard]] jsbind::String tag() const;
    /// [`Notification.image`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/image)
    /// [`Notification.image`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/image)
    [[nodiscard]] jsbind::String image() const;
    /// [`Notification.icon`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/icon)
    /// [`Notification.icon`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/icon)
    [[nodiscard]] jsbind::String icon() const;
    /// [`Notification.badge`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/badge)
    /// [`Notification.badge`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/badge)
    [[nodiscard]] jsbind::String badge() const;
    /// [`Notification.vibrate`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/vibrate)
    /// [`Notification.vibrate`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/vibrate)
    [[nodiscard]] jsbind::TypedArray<unsigned long> vibrate() const;
    /// [`Notification.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/timestamp)
    /// [`Notification.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/timestamp)
    [[nodiscard]] jsbind::Any timestamp() const;
    /// [`Notification.renotify`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/renotify)
    /// [`Notification.renotify`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/renotify)
    [[nodiscard]] bool renotify() const;
    /// [`Notification.silent`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/silent)
    /// [`Notification.silent`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/silent)
    [[nodiscard]] bool silent() const;
    /// [`Notification.requireInteraction`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/requireInteraction)
    /// [`Notification.requireInteraction`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/requireInteraction)
    [[nodiscard]] bool requireInteraction() const;
    /// [`Notification.data`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/data)
    /// [`Notification.data`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/data)
    [[nodiscard]] jsbind::Any data() const;
    /// [`Notification.actions`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/actions)
    /// [`Notification.actions`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/actions)
    [[nodiscard]] jsbind::TypedArray<NotificationAction> actions() const;
    /// The close method.
    /// [`Notification.close`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/close)
    jsbind::Undefined close();
};

} // namespace webbind