#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type NotificationAction
class NotificationAction : public emlite::Val {
  explicit NotificationAction(Handle h) noexcept;
public:
    static NotificationAction take_ownership(Handle h) noexcept;
    explicit NotificationAction(const emlite::Val &val) noexcept;
    NotificationAction() noexcept;
    [[nodiscard]] NotificationAction clone() const noexcept;
    /// Getter of the `action` attribute.
    [[nodiscard]] jsbind::String action() const;
    /// Setter of the `action` attribute.
    void action(const jsbind::String& value);
    /// Getter of the `title` attribute.
    [[nodiscard]] jsbind::String title() const;
    /// Setter of the `title` attribute.
    void title(const jsbind::String& value);
    /// Getter of the `navigate` attribute.
    [[nodiscard]] jsbind::String navigate() const;
    /// Setter of the `navigate` attribute.
    void navigate(const jsbind::String& value);
    /// Getter of the `icon` attribute.
    [[nodiscard]] jsbind::String icon() const;
    /// Setter of the `icon` attribute.
    void icon(const jsbind::String& value);
};

} // namespace webbind