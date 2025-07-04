#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class BatteryManager : public EventTarget {
    explicit BatteryManager(Handle h) noexcept;

public:
    explicit BatteryManager(const emlite::Val &val) noexcept;
    static BatteryManager take_ownership(Handle h) noexcept;

    BatteryManager clone() const noexcept;
    bool charging() const;
    double chargingTime() const;
    double dischargingTime() const;
    double level() const;
    jsbind::Any onchargingchange() const;
    void onchargingchange(const jsbind::Any& value);
    jsbind::Any onchargingtimechange() const;
    void onchargingtimechange(const jsbind::Any& value);
    jsbind::Any ondischargingtimechange() const;
    void ondischargingtimechange(const jsbind::Any& value);
    jsbind::Any onlevelchange() const;
    void onlevelchange(const jsbind::Any& value);
};

