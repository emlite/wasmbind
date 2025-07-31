#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class Notification;


/// The NotificationEvent class.
/// [`NotificationEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent)
class NotificationEvent : public ExtendableEvent {
    explicit NotificationEvent(Handle h) noexcept;

public:
    explicit NotificationEvent(const emlite::Val &val) noexcept;
    static NotificationEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] NotificationEvent clone() const noexcept;
    /// The `new NotificationEvent(..)` constructor, creating a new NotificationEvent instance
    NotificationEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `notification` attribute.
    /// [`NotificationEvent.notification`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent/notification)
    [[nodiscard]] Notification notification() const;
    /// Getter of the `action` attribute.
    /// [`NotificationEvent.action`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationEvent/action)
    [[nodiscard]] jsbind::String action() const;
};

