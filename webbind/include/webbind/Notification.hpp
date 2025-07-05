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
    jsbind::DOMString action() const;
    void action(const jsbind::DOMString& value);
    jsbind::DOMString title() const;
    void title(const jsbind::DOMString& value);
    jsbind::USVString icon() const;
    void icon(const jsbind::USVString& value);
};

class Notification : public EventTarget {
    explicit Notification(Handle h) noexcept;

public:
    explicit Notification(const emlite::Val &val) noexcept;
    static Notification take_ownership(Handle h) noexcept;

    Notification clone() const noexcept;
    Notification(const jsbind::DOMString& title);
    Notification(const jsbind::DOMString& title, const NotificationOptions& options);
    static NotificationPermission permission();
    static jsbind::Promise requestPermission();
    static jsbind::Promise requestPermission(const jsbind::Function& deprecatedCallback);
    static unsigned long maxActions();
    jsbind::Any onclick() const;
    void onclick(const jsbind::Any& value);
    jsbind::Any onshow() const;
    void onshow(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onclose() const;
    void onclose(const jsbind::Any& value);
    jsbind::DOMString title() const;
    NotificationDirection dir() const;
    jsbind::DOMString lang() const;
    jsbind::DOMString body() const;
    jsbind::DOMString tag() const;
    jsbind::USVString image() const;
    jsbind::USVString icon() const;
    jsbind::USVString badge() const;
    jsbind::FrozenArray<unsigned long> vibrate() const;
    jsbind::Any timestamp() const;
    bool renotify() const;
    bool silent() const;
    bool requireInteraction() const;
    jsbind::Any data() const;
    jsbind::FrozenArray<NotificationAction> actions() const;
    jsbind::Undefined close();
};

