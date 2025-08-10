#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class Notification;

/// Dictionary type NotificationEventInit
class NotificationEventInit : public ExtendableEventInit {
  explicit NotificationEventInit(Handle h) noexcept;
public:
    static NotificationEventInit take_ownership(Handle h) noexcept;
    explicit NotificationEventInit(const emlite::Val &val) noexcept;
    NotificationEventInit() noexcept;
    [[nodiscard]] NotificationEventInit clone() const noexcept;
    /// Getter of the `notification` attribute.
    [[nodiscard]] Notification notification() const;
    /// Setter of the `notification` attribute.
    void notification(const Notification& value);
    /// Getter of the `action` attribute.
    [[nodiscard]] jsbind::String action() const;
    /// Setter of the `action` attribute.
    void action(const jsbind::String& value);
};

} // namespace webbind