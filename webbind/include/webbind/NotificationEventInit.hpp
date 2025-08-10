#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class Notification;

/// Dictionary type NotificationEventInit
/// [`NotificationEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEventInit)
class NotificationEventInit : public ExtendableEventInit {
  explicit NotificationEventInit(Handle h) noexcept;
public:
    static NotificationEventInit take_ownership(Handle h) noexcept;
    explicit NotificationEventInit(const emlite::Val &val) noexcept;
    NotificationEventInit() noexcept;
    [[nodiscard]] NotificationEventInit clone() const noexcept;
    [[nodiscard]] Notification notification() const;
    void notification(const Notification& value);
    [[nodiscard]] jsbind::String action() const;
    void action(const jsbind::String& value);
};

} // namespace webbind