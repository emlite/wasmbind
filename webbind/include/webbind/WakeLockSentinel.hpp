#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class WakeLockSentinel : public EventTarget {
    explicit WakeLockSentinel(Handle h) noexcept;

public:
    explicit WakeLockSentinel(const emlite::Val &val) noexcept;
    static WakeLockSentinel take_ownership(Handle h) noexcept;

    WakeLockSentinel clone() const noexcept;
    bool released() const;
    WakeLockType type() const;
    jsbind::Promise release();
    jsbind::Any onrelease() const;
    void onrelease(const jsbind::Any& value);
};

