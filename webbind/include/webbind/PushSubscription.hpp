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
    jsbind::USVString endpoint() const;
    void endpoint(const jsbind::USVString& value);
    jsbind::Any expirationTime() const;
    void expirationTime(const jsbind::Any& value);
    jsbind::Record<jsbind::DOMString, jsbind::USVString> keys() const;
    void keys(const jsbind::Record<jsbind::DOMString, jsbind::USVString>& value);
};

class PushSubscription : public emlite::Val {
    explicit PushSubscription(Handle h) noexcept;

public:
    explicit PushSubscription(const emlite::Val &val) noexcept;
    static PushSubscription take_ownership(Handle h) noexcept;

    PushSubscription clone() const noexcept;
    jsbind::USVString endpoint() const;
    jsbind::Any expirationTime() const;
    PushSubscriptionOptions options() const;
    jsbind::ArrayBuffer getKey(const PushEncryptionKeyName& name);
    jsbind::Promise<bool> unsubscribe();
    PushSubscriptionJSON toJSON();
};

