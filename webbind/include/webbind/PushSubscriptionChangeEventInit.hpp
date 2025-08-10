#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class PushSubscription;

/// Dictionary type PushSubscriptionChangeEventInit
/// [`PushSubscriptionChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionChangeEventInit)
class PushSubscriptionChangeEventInit : public ExtendableEventInit {
  explicit PushSubscriptionChangeEventInit(Handle h) noexcept;
public:
    static PushSubscriptionChangeEventInit take_ownership(Handle h) noexcept;
    explicit PushSubscriptionChangeEventInit(const emlite::Val &val) noexcept;
    PushSubscriptionChangeEventInit() noexcept;
    [[nodiscard]] PushSubscriptionChangeEventInit clone() const noexcept;
    [[nodiscard]] PushSubscription newSubscription() const;
    void newSubscription(const PushSubscription& value);
    [[nodiscard]] PushSubscription oldSubscription() const;
    void oldSubscription(const PushSubscription& value);
};

} // namespace webbind