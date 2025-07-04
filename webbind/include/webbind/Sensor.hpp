#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class Sensor : public EventTarget {
    explicit Sensor(Handle h) noexcept;

public:
    explicit Sensor(const emlite::Val &val) noexcept;
    static Sensor take_ownership(Handle h) noexcept;

    Sensor clone() const noexcept;
    bool activated() const;
    bool hasReading() const;
    jsbind::Any timestamp() const;
    jsbind::Undefined start();
    jsbind::Undefined stop();
    jsbind::Any onreading() const;
    void onreading(const jsbind::Any& value);
    jsbind::Any onactivate() const;
    void onactivate(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
};

