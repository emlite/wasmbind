#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class Notification;

/// Dictionary type PushEventInit
class PushEventInit : public ExtendableEventInit {
  explicit PushEventInit(Handle h) noexcept;
public:
    static PushEventInit take_ownership(Handle h) noexcept;
    explicit PushEventInit(const emlite::Val &val) noexcept;
    PushEventInit() noexcept;
    [[nodiscard]] PushEventInit clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
    /// Getter of the `notification` attribute.
    [[nodiscard]] Notification notification() const;
    /// Setter of the `notification` attribute.
    void notification(const Notification& value);
};

} // namespace webbind