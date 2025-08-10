#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PushSubscriptionJSON.hpp"
#include "enums.hpp"

namespace webbind {

class PushSubscriptionOptions;

/// Interface PushSubscription
/// [`PushSubscription`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription)
class PushSubscription : public emlite::Val {
    explicit PushSubscription(Handle h) noexcept;
public:
    explicit PushSubscription(const emlite::Val &val) noexcept;
    static PushSubscription take_ownership(Handle h) noexcept;
    [[nodiscard]] PushSubscription clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PushSubscription.endpoint`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/endpoint)
    /// [`PushSubscription.endpoint`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/endpoint)
    [[nodiscard]] jsbind::String endpoint() const;
    /// [`PushSubscription.expirationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/expirationTime)
    /// [`PushSubscription.expirationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/expirationTime)
    [[nodiscard]] jsbind::Any expirationTime() const;
    /// [`PushSubscription.options`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/options)
    /// [`PushSubscription.options`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/options)
    [[nodiscard]] PushSubscriptionOptions options() const;
    /// The getKey method.
    /// [`PushSubscription.getKey`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/getKey)
    jsbind::ArrayBuffer getKey(const PushEncryptionKeyName& name);
    /// The unsubscribe method.
    /// [`PushSubscription.unsubscribe`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/unsubscribe)
    jsbind::Promise<bool> unsubscribe();
    /// The toJSON method.
    /// [`PushSubscription.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/toJSON)
    PushSubscriptionJSON toJSON();
};

} // namespace webbind