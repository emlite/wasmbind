#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class PushSubscription;

/// Dictionary type PushSubscriptionChangeEventInit
class PushSubscriptionChangeEventInit : public ExtendableEventInit {
  explicit PushSubscriptionChangeEventInit(Handle h) noexcept;
public:
    static PushSubscriptionChangeEventInit take_ownership(Handle h) noexcept;
    explicit PushSubscriptionChangeEventInit(const emlite::Val &val) noexcept;
    PushSubscriptionChangeEventInit() noexcept;
    [[nodiscard]] PushSubscriptionChangeEventInit clone() const noexcept;
    /// Getter of the `newSubscription` attribute.
    [[nodiscard]] PushSubscription newSubscription() const;
    /// Setter of the `newSubscription` attribute.
    void newSubscription(const PushSubscription& value);
    /// Getter of the `oldSubscription` attribute.
    [[nodiscard]] PushSubscription oldSubscription() const;
    /// Setter of the `oldSubscription` attribute.
    void oldSubscription(const PushSubscription& value);
};

} // namespace webbind