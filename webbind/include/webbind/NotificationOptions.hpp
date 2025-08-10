#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "NotificationAction.hpp"

namespace webbind {

/// Dictionary type NotificationOptions
class NotificationOptions : public emlite::Val {
  explicit NotificationOptions(Handle h) noexcept;
public:
    static NotificationOptions take_ownership(Handle h) noexcept;
    explicit NotificationOptions(const emlite::Val &val) noexcept;
    NotificationOptions() noexcept;
    [[nodiscard]] NotificationOptions clone() const noexcept;
    /// Getter of the `dir` attribute.
    [[nodiscard]] NotificationDirection dir() const;
    /// Setter of the `dir` attribute.
    void dir(const NotificationDirection& value);
    /// Getter of the `lang` attribute.
    [[nodiscard]] jsbind::String lang() const;
    /// Setter of the `lang` attribute.
    void lang(const jsbind::String& value);
    /// Getter of the `body` attribute.
    [[nodiscard]] jsbind::String body() const;
    /// Setter of the `body` attribute.
    void body(const jsbind::String& value);
    /// Getter of the `tag` attribute.
    [[nodiscard]] jsbind::String tag() const;
    /// Setter of the `tag` attribute.
    void tag(const jsbind::String& value);
    /// Getter of the `image` attribute.
    [[nodiscard]] jsbind::String image() const;
    /// Setter of the `image` attribute.
    void image(const jsbind::String& value);
    /// Getter of the `icon` attribute.
    [[nodiscard]] jsbind::String icon() const;
    /// Setter of the `icon` attribute.
    void icon(const jsbind::String& value);
    /// Getter of the `badge` attribute.
    [[nodiscard]] jsbind::String badge() const;
    /// Setter of the `badge` attribute.
    void badge(const jsbind::String& value);
    /// Getter of the `vibrate` attribute.
    [[nodiscard]] jsbind::Any vibrate() const;
    /// Setter of the `vibrate` attribute.
    void vibrate(const jsbind::Any& value);
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] jsbind::Any timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(const jsbind::Any& value);
    /// Getter of the `renotify` attribute.
    [[nodiscard]] bool renotify() const;
    /// Setter of the `renotify` attribute.
    void renotify(bool value);
    /// Getter of the `silent` attribute.
    [[nodiscard]] bool silent() const;
    /// Setter of the `silent` attribute.
    void silent(bool value);
    /// Getter of the `requireInteraction` attribute.
    [[nodiscard]] bool requireInteraction() const;
    /// Setter of the `requireInteraction` attribute.
    void requireInteraction(bool value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
    /// Getter of the `actions` attribute.
    [[nodiscard]] jsbind::TypedArray<NotificationAction> actions() const;
    /// Setter of the `actions` attribute.
    void actions(const jsbind::TypedArray<NotificationAction>& value);
};

} // namespace webbind