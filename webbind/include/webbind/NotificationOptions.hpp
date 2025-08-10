#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NotificationAction.hpp"

namespace webbind {

/// Dictionary type NotificationOptions
/// [`NotificationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationOptions)
class NotificationOptions : public emlite::Val {
  explicit NotificationOptions(Handle h) noexcept;
public:
    static NotificationOptions take_ownership(Handle h) noexcept;
    explicit NotificationOptions(const emlite::Val &val) noexcept;
    NotificationOptions() noexcept;
    [[nodiscard]] NotificationOptions clone() const noexcept;
    [[nodiscard]] NotificationDirection dir() const;
    void dir(const NotificationDirection& value);
    [[nodiscard]] jsbind::String lang() const;
    void lang(const jsbind::String& value);
    [[nodiscard]] jsbind::String body() const;
    void body(const jsbind::String& value);
    [[nodiscard]] jsbind::String tag() const;
    void tag(const jsbind::String& value);
    [[nodiscard]] jsbind::String image() const;
    void image(const jsbind::String& value);
    [[nodiscard]] jsbind::String icon() const;
    void icon(const jsbind::String& value);
    [[nodiscard]] jsbind::String badge() const;
    void badge(const jsbind::String& value);
    [[nodiscard]] jsbind::Any vibrate() const;
    void vibrate(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    [[nodiscard]] bool renotify() const;
    void renotify(bool value);
    [[nodiscard]] bool silent() const;
    void silent(bool value);
    [[nodiscard]] bool requireInteraction() const;
    void requireInteraction(bool value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<NotificationAction> actions() const;
    void actions(const jsbind::TypedArray<NotificationAction>& value);
};

} // namespace webbind