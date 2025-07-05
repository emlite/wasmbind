#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PushSubscription;
class PushSubscriptionOptionsInit;


class PushSubscriptionOptionsInit : public emlite::Val {
  explicit PushSubscriptionOptionsInit(Handle h) noexcept;
public:
    static PushSubscriptionOptionsInit take_ownership(Handle h) noexcept;
    explicit PushSubscriptionOptionsInit(const emlite::Val &val) noexcept;
    PushSubscriptionOptionsInit() noexcept;
    PushSubscriptionOptionsInit clone() const noexcept;
    bool userVisibleOnly() const;
    void userVisibleOnly(bool value);
    jsbind::Any applicationServerKey() const;
    void applicationServerKey(const jsbind::Any& value);
};

class PushManager : public emlite::Val {
    explicit PushManager(Handle h) noexcept;

public:
    explicit PushManager(const emlite::Val &val) noexcept;
    static PushManager take_ownership(Handle h) noexcept;

    PushManager clone() const noexcept;
    static jsbind::FrozenArray<jsbind::DOMString> supportedContentEncodings();
    jsbind::Promise subscribe();
    jsbind::Promise subscribe(const PushSubscriptionOptionsInit& options);
    jsbind::Promise getSubscription();
    jsbind::Promise permissionState();
    jsbind::Promise permissionState(const PushSubscriptionOptionsInit& options);
};

