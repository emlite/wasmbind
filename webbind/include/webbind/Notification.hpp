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
    NotificationAction clone() const noexcept;
    jsbind::String action() const;
    void action(const jsbind::String& value);
    jsbind::String title() const;
    void title(const jsbind::String& value);
    jsbind::String icon() const;
    void icon(const jsbind::String& value);
};

class Notification : public EventTarget {
    explicit Notification(Handle h) noexcept;

public:
    explicit Notification(const emlite::Val &val) noexcept;
    static Notification take_ownership(Handle h) noexcept;

    Notification clone() const noexcept;
    Notification(const jsbind::String& title);
    Notification(const jsbind::String& title, const NotificationOptions& options);
    static NotificationPermission permission();
    static jsbind::Promise<NotificationPermission> requestPermission();
    static jsbind::Promise<NotificationPermission> requestPermission(const jsbind::Function& deprecatedCallback);
    static unsigned long maxActions();
    jsbind::Any onclick() const;
    void onclick(const jsbind::Any& value);
    jsbind::Any onshow() const;
    void onshow(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onclose() const;
    void onclose(const jsbind::Any& value);
    jsbind::String title() const;
    NotificationDirection dir() const;
    jsbind::String lang() const;
    jsbind::String body() const;
    jsbind::String tag() const;
    jsbind::String image() const;
    jsbind::String icon() const;
    jsbind::String badge() const;
    jsbind::TypedArray<unsigned long> vibrate() const;
    jsbind::Any timestamp() const;
    bool renotify() const;
    bool silent() const;
    bool requireInteraction() const;
    jsbind::Any data() const;
    jsbind::TypedArray<NotificationAction> actions() const;
    jsbind::Undefined close();
};

