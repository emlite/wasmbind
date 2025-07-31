#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PushSubscriptionOptions class.
/// [`PushSubscriptionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionOptions)
class PushSubscriptionOptions : public emlite::Val {
    explicit PushSubscriptionOptions(Handle h) noexcept;

public:
    explicit PushSubscriptionOptions(const emlite::Val &val) noexcept;
    static PushSubscriptionOptions take_ownership(Handle h) noexcept;

    [[nodiscard]] PushSubscriptionOptions clone() const noexcept;
    /// Getter of the `userVisibleOnly` attribute.
    /// [`PushSubscriptionOptions.userVisibleOnly`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionOptions/userVisibleOnly)
    [[nodiscard]] bool userVisibleOnly() const;
    /// Getter of the `applicationServerKey` attribute.
    /// [`PushSubscriptionOptions.applicationServerKey`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionOptions/applicationServerKey)
    [[nodiscard]] jsbind::ArrayBuffer applicationServerKey() const;
};

