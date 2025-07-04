#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class Notification;


class NotificationEvent : public ExtendableEvent {
    explicit NotificationEvent(Handle h) noexcept;

public:
    explicit NotificationEvent(const emlite::Val &val) noexcept;
    static NotificationEvent take_ownership(Handle h) noexcept;

    NotificationEvent clone() const noexcept;
    NotificationEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    Notification notification() const;
    jsbind::DOMString action() const;
};

