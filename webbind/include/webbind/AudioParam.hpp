#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AudioParam;


class AudioParam : public emlite::Val {
    explicit AudioParam(Handle h) noexcept;

public:
    explicit AudioParam(const emlite::Val &val) noexcept;
    static AudioParam take_ownership(Handle h) noexcept;

    AudioParam clone() const noexcept;
    float value() const;
    void value(float value);
    AutomationRate automationRate() const;
    void automationRate(const AutomationRate& value);
    float defaultValue() const;
    float minValue() const;
    float maxValue() const;
    AudioParam setValueAtTime(float value, double startTime);
    AudioParam linearRampToValueAtTime(float value, double endTime);
    AudioParam exponentialRampToValueAtTime(float value, double endTime);
    AudioParam setTargetAtTime(float target, double startTime, float timeConstant);
    AudioParam setValueCurveAtTime(jsbind::Sequence<float> values, double startTime, double duration);
    AudioParam cancelScheduledValues(double cancelTime);
    AudioParam cancelAndHoldAtTime(double cancelTime);
};

