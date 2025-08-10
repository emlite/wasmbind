#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PushSubscriptionOptionsInit
class PushSubscriptionOptionsInit : public emlite::Val {
  explicit PushSubscriptionOptionsInit(Handle h) noexcept;
public:
    static PushSubscriptionOptionsInit take_ownership(Handle h) noexcept;
    explicit PushSubscriptionOptionsInit(const emlite::Val &val) noexcept;
    PushSubscriptionOptionsInit() noexcept;
    [[nodiscard]] PushSubscriptionOptionsInit clone() const noexcept;
    /// Getter of the `userVisibleOnly` attribute.
    [[nodiscard]] bool userVisibleOnly() const;
    /// Setter of the `userVisibleOnly` attribute.
    void userVisibleOnly(bool value);
    /// Getter of the `applicationServerKey` attribute.
    [[nodiscard]] jsbind::Any applicationServerKey() const;
    /// Setter of the `applicationServerKey` attribute.
    void applicationServerKey(const jsbind::Any& value);
};

} // namespace webbind