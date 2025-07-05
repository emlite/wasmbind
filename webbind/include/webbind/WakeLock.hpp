#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WakeLockSentinel;


class WakeLock : public emlite::Val {
    explicit WakeLock(Handle h) noexcept;

public:
    explicit WakeLock(const emlite::Val &val) noexcept;
    static WakeLock take_ownership(Handle h) noexcept;

    WakeLock clone() const noexcept;
    jsbind::Promise request();
    jsbind::Promise request(const WakeLockType& type);
};

