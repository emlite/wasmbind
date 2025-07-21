#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class RemotePlayback : public EventTarget {
    explicit RemotePlayback(Handle h) noexcept;

public:
    explicit RemotePlayback(const emlite::Val &val) noexcept;
    static RemotePlayback take_ownership(Handle h) noexcept;

    RemotePlayback clone() const noexcept;
    jsbind::Promise<long> watchAvailability(const jsbind::Function& callback);
    jsbind::Promise<jsbind::Undefined> cancelWatchAvailability();
    jsbind::Promise<jsbind::Undefined> cancelWatchAvailability(long id);
    RemotePlaybackState state() const;
    jsbind::Any onconnecting() const;
    void onconnecting(const jsbind::Any& value);
    jsbind::Any onconnect() const;
    void onconnect(const jsbind::Any& value);
    jsbind::Any ondisconnect() const;
    void ondisconnect(const jsbind::Any& value);
    jsbind::Promise<jsbind::Undefined> prompt();
};

