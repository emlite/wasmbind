#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AudioParam;


/// The AudioParam class.
/// [`AudioParam`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam)
class AudioParam : public emlite::Val {
    explicit AudioParam(Handle h) noexcept;

public:
    explicit AudioParam(const emlite::Val &val) noexcept;
    static AudioParam take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioParam clone() const noexcept;
    /// Getter of the `value` attribute.
    /// [`AudioParam.value`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/value)
    [[nodiscard]] float value() const;
    /// Setter of the `value` attribute.
    /// [`AudioParam.value`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/value)
    void value(float value);
    /// Getter of the `automationRate` attribute.
    /// [`AudioParam.automationRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/automationRate)
    [[nodiscard]] AutomationRate automationRate() const;
    /// Setter of the `automationRate` attribute.
    /// [`AudioParam.automationRate`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/automationRate)
    void automationRate(const AutomationRate& value);
    /// Getter of the `defaultValue` attribute.
    /// [`AudioParam.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/defaultValue)
    [[nodiscard]] float defaultValue() const;
    /// Getter of the `minValue` attribute.
    /// [`AudioParam.minValue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/minValue)
    [[nodiscard]] float minValue() const;
    /// Getter of the `maxValue` attribute.
    /// [`AudioParam.maxValue`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/maxValue)
    [[nodiscard]] float maxValue() const;
    /// The setValueAtTime method.
    /// [`AudioParam.setValueAtTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/setValueAtTime)
    AudioParam setValueAtTime(float value, double startTime);
    /// The linearRampToValueAtTime method.
    /// [`AudioParam.linearRampToValueAtTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/linearRampToValueAtTime)
    AudioParam linearRampToValueAtTime(float value, double endTime);
    /// The exponentialRampToValueAtTime method.
    /// [`AudioParam.exponentialRampToValueAtTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/exponentialRampToValueAtTime)
    AudioParam exponentialRampToValueAtTime(float value, double endTime);
    /// The setTargetAtTime method.
    /// [`AudioParam.setTargetAtTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/setTargetAtTime)
    AudioParam setTargetAtTime(float target, double startTime, float timeConstant);
    /// The setValueCurveAtTime method.
    /// [`AudioParam.setValueCurveAtTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/setValueCurveAtTime)
    AudioParam setValueCurveAtTime(jsbind::TypedArray<float> values, double startTime, double duration);
    /// The cancelScheduledValues method.
    /// [`AudioParam.cancelScheduledValues`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/cancelScheduledValues)
    AudioParam cancelScheduledValues(double cancelTime);
    /// The cancelAndHoldAtTime method.
    /// [`AudioParam.cancelAndHoldAtTime`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParam/cancelAndHoldAtTime)
    AudioParam cancelAndHoldAtTime(double cancelTime);
};

