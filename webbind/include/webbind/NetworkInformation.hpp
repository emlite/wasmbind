#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class NetworkInformation : public EventTarget {
    explicit NetworkInformation(Handle h) noexcept;

public:
    explicit NetworkInformation(const emlite::Val &val) noexcept;
    static NetworkInformation take_ownership(Handle h) noexcept;

    NetworkInformation clone() const noexcept;
    ConnectionType type() const;
    EffectiveConnectionType effectiveType() const;
    jsbind::Any downlinkMax() const;
    jsbind::Any downlink() const;
    jsbind::Any rtt() const;
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
    bool saveData() const;
};

