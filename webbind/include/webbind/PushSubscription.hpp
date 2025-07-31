#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PushSubscriptionOptions;
class PushSubscriptionJSON;


class PushSubscriptionJSON : public emlite::Val {
  explicit PushSubscriptionJSON(Handle h) noexcept;
public:
    static PushSubscriptionJSON take_ownership(Handle h) noexcept;
    explicit PushSubscriptionJSON(const emlite::Val &val) noexcept;
    PushSubscriptionJSON() noexcept;
    [[nodiscard]] PushSubscriptionJSON clone() const noexcept;
    [[nodiscard]] jsbind::String endpoint() const;
    void endpoint(const jsbind::String& value);
    [[nodiscard]] jsbind::Any expirationTime() const;
    void expirationTime(const jsbind::Any& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::String> keys() const;
    void keys(const jsbind::Record<jsbind::String, jsbind::String>& value);
};

/// The PushSubscription class.
/// [`PushSubscription`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription)
class PushSubscription : public emlite::Val {
    explicit PushSubscription(Handle h) noexcept;

public:
    explicit PushSubscription(const emlite::Val &val) noexcept;
    static PushSubscription take_ownership(Handle h) noexcept;

    [[nodiscard]] PushSubscription clone() const noexcept;
    /// Getter of the `endpoint` attribute.
    /// [`PushSubscription.endpoint`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/endpoint)
    [[nodiscard]] jsbind::String endpoint() const;
    /// Getter of the `expirationTime` attribute.
    /// [`PushSubscription.expirationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PushSubscription/expirationTime)
    [[nodiscard]] jsbind::Any expirationTime() const;
    /// Getter of the `options` attribute.
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

