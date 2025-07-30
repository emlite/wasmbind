#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class BroadcastChannel : public EventTarget {
    explicit BroadcastChannel(Handle h) noexcept;

public:
    explicit BroadcastChannel(const emlite::Val &val) noexcept;
    static BroadcastChannel take_ownership(Handle h) noexcept;

    BroadcastChannel clone() const noexcept;
    BroadcastChannel(const jsbind::String& name);
    jsbind::String name() const;
    jsbind::Undefined postMessage(const jsbind::Any& message);
    jsbind::Undefined close();
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Any onmessageerror() const;
    void onmessageerror(const jsbind::Any& value);
};

