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
    PushSubscriptionJSON clone() const noexcept;
    jsbind::String endpoint() const;
    void endpoint(const jsbind::String& value);
    jsbind::Any expirationTime() const;
    void expirationTime(const jsbind::Any& value);
    jsbind::Record<jsbind::String, jsbind::String> keys() const;
    void keys(const jsbind::Record<jsbind::String, jsbind::String>& value);
};

class PushSubscription : public emlite::Val {
    explicit PushSubscription(Handle h) noexcept;

public:
    explicit PushSubscription(const emlite::Val &val) noexcept;
    static PushSubscription take_ownership(Handle h) noexcept;

    PushSubscription clone() const noexcept;
    jsbind::String endpoint() const;
    jsbind::Any expirationTime() const;
    PushSubscriptionOptions options() const;
    jsbind::ArrayBuffer getKey(const PushEncryptionKeyName& name);
    jsbind::Promise<bool> unsubscribe();
    PushSubscriptionJSON toJSON();
};

