#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class PushSubscription;


/// The PushSubscriptionChangeEvent class.
/// [`PushSubscriptionChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionChangeEvent)
class PushSubscriptionChangeEvent : public ExtendableEvent {
    explicit PushSubscriptionChangeEvent(Handle h) noexcept;

public:
    explicit PushSubscriptionChangeEvent(const emlite::Val &val) noexcept;
    static PushSubscriptionChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PushSubscriptionChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PushSubscriptionChangeEvent(..)` constructor, creating a new PushSubscriptionChangeEvent instance
    PushSubscriptionChangeEvent(const jsbind::String& type);
    /// The `new PushSubscriptionChangeEvent(..)` constructor, creating a new PushSubscriptionChangeEvent instance
    PushSubscriptionChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `newSubscription` attribute.
    /// [`PushSubscriptionChangeEvent.newSubscription`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionChangeEvent/newSubscription)
    [[nodiscard]] PushSubscription newSubscription() const;
    /// Getter of the `oldSubscription` attribute.
    /// [`PushSubscriptionChangeEvent.oldSubscription`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscriptionChangeEvent/oldSubscription)
    [[nodiscard]] PushSubscription oldSubscription() const;
};

