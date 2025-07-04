#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class PushSubscriptionOptions : public emlite::Val {
    explicit PushSubscriptionOptions(Handle h) noexcept;

public:
    explicit PushSubscriptionOptions(const emlite::Val &val) noexcept;
    static PushSubscriptionOptions take_ownership(Handle h) noexcept;

    PushSubscriptionOptions clone() const noexcept;
    bool userVisibleOnly() const;
    jsbind::ArrayBuffer applicationServerKey() const;
};

