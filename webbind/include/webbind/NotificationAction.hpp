#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NotificationAction
/// [`NotificationAction`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationAction)
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

} // namespace webbind