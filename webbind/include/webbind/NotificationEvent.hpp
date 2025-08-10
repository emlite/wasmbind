#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"
#include "NotificationEventInit.hpp"

namespace webbind {

class Notification;

/// Interface NotificationEvent
/// [`NotificationEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent)
class NotificationEvent : public ExtendableEvent {
    explicit NotificationEvent(Handle h) noexcept;
public:
    explicit NotificationEvent(const emlite::Val &val) noexcept;
    static NotificationEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] NotificationEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new NotificationEvent(..)` constructor, creating a new NotificationEvent instance
    NotificationEvent(const jsbind::String& type, const NotificationEventInit& eventInitDict);
    /// [`NotificationEvent.notification`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent/notification)
    /// [`NotificationEvent.notification`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent/notification)
    [[nodiscard]] Notification notification() const;
    /// [`NotificationEvent.action`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent/action)
    /// [`NotificationEvent.action`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent/action)
    [[nodiscard]] jsbind::String action() const;
};

} // namespace webbind