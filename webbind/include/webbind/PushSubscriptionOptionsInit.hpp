#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PushSubscriptionOptionsInit
/// [`PushSubscriptionOptionsInit`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionOptionsInit)
class PushSubscriptionOptionsInit : public emlite::Val {
  explicit PushSubscriptionOptionsInit(Handle h) noexcept;
public:
    static PushSubscriptionOptionsInit take_ownership(Handle h) noexcept;
    explicit PushSubscriptionOptionsInit(const emlite::Val &val) noexcept;
    PushSubscriptionOptionsInit() noexcept;
    [[nodiscard]] PushSubscriptionOptionsInit clone() const noexcept;
    [[nodiscard]] bool userVisibleOnly() const;
    void userVisibleOnly(bool value);
    [[nodiscard]] jsbind::Any applicationServerKey() const;
    void applicationServerKey(const jsbind::Any& value);
};

} // namespace webbind