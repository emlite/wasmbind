#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class NotificationAction;
class NotificationOptions;


class NotificationAction : public emlite::Val {
  explicit NotificationAction(Handle h) noexcept;
public:
    static NotificationAction take_ownership(Handle h) noexcept;
    explicit NotificationAction(const emlite::Val &val) noexcept;
    NotificationAction() noexcept;
    [[nodiscard]] NotificationAction clone() const noexcept;
    [[nodiscard]] jsbind::String action() const;
    void action(const jsbind::String& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
    [[nodiscard]] jsbind::String icon() const;
    void icon(const jsbind::String& value);
};

/// The Notification class.
/// [`Notification`](https://developer.mozilla.org/en-US/docs/Web/API/Notification)
class Notification : public EventTarget {
    explicit Notification(Handle h) noexcept;

public:
    explicit Notification(const emlite::Val &val) noexcept;
    static Notification take_ownership(Handle h) noexcept;

    [[nodiscard]] Notification clone() const noexcept;
    /// The `new Notification(..)` constructor, creating a new Notification instance
    Notification(const jsbind::String& title);
    /// The `new Notification(..)` constructor, creating a new Notification instance
    Notification(const jsbind::String& title, const NotificationOptions& options);
    /// Getter of the `permission` static attribute.
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
    [[nodiscard]] static unsigned long maxActions();
    /// Getter of the `onclick` attribute.
    /// [`Notification.onclick`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclick)
    [[nodiscard]] jsbind::Any onclick() const;
    /// Setter of the `onclick` attribute.
    /// [`Notification.onclick`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclick)
    void onclick(const jsbind::Any& value);
    /// Getter of the `onshow` attribute.
    /// [`Notification.onshow`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onshow)
    [[nodiscard]] jsbind::Any onshow() const;
    /// Setter of the `onshow` attribute.
    /// [`Notification.onshow`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onshow)
    void onshow(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`Notification.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`Notification.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onclose` attribute.
    /// [`Notification.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`Notification.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/onclose)
    void onclose(const jsbind::Any& value);
    /// Getter of the `title` attribute.
    /// [`Notification.title`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/title)
    [[nodiscard]] jsbind::String title() const;
    /// Getter of the `dir` attribute.
    /// [`Notification.dir`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/dir)
    [[nodiscard]] NotificationDirection dir() const;
    /// Getter of the `lang` attribute.
    /// [`Notification.lang`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/lang)
    [[nodiscard]] jsbind::String lang() const;
    /// Getter of the `body` attribute.
    /// [`Notification.body`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/body)
    [[nodiscard]] jsbind::String body() const;
    /// Getter of the `tag` attribute.
    /// [`Notification.tag`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/tag)
    [[nodiscard]] jsbind::String tag() const;
    /// Getter of the `image` attribute.
    /// [`Notification.image`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/image)
    [[nodiscard]] jsbind::String image() const;
    /// Getter of the `icon` attribute.
    /// [`Notification.icon`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/icon)
    [[nodiscard]] jsbind::String icon() const;
    /// Getter of the `badge` attribute.
    /// [`Notification.badge`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/badge)
    [[nodiscard]] jsbind::String badge() const;
    /// Getter of the `vibrate` attribute.
    /// [`Notification.vibrate`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/vibrate)
    [[nodiscard]] jsbind::TypedArray<unsigned long> vibrate() const;
    /// Getter of the `timestamp` attribute.
    /// [`Notification.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/timestamp)
    [[nodiscard]] jsbind::Any timestamp() const;
    /// Getter of the `renotify` attribute.
    /// [`Notification.renotify`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/renotify)
    [[nodiscard]] bool renotify() const;
    /// Getter of the `silent` attribute.
    /// [`Notification.silent`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/silent)
    [[nodiscard]] bool silent() const;
    /// Getter of the `requireInteraction` attribute.
    /// [`Notification.requireInteraction`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/requireInteraction)
    [[nodiscard]] bool requireInteraction() const;
    /// Getter of the `data` attribute.
    /// [`Notification.data`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/data)
    [[nodiscard]] jsbind::Any data() const;
    /// Getter of the `actions` attribute.
    /// [`Notification.actions`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/actions)
    [[nodiscard]] jsbind::TypedArray<NotificationAction> actions() const;
    /// The close method.
    /// [`Notification.close`](https://developer.mozilla.org/en-US/docs/Web/API/Notification/close)
    jsbind::Undefined close();
};

