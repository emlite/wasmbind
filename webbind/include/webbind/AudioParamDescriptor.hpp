#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioParamDescriptor
/// [`AudioParamDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParamDescriptor)
class AudioParamDescriptor : public emlite::Val {
  explicit AudioParamDescriptor(Handle h) noexcept;
public:
    static AudioParamDescriptor take_ownership(Handle h) noexcept;
    explicit AudioParamDescriptor(const emlite::Val &val) noexcept;
    AudioParamDescriptor() noexcept;
    [[nodiscard]] AudioParamDescriptor clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] float defaultValue() const;
    void defaultValue(float value);
    [[nodiscard]] float minValue() const;
    void minValue(float value);
    [[nodiscard]] float maxValue() const;
    void maxValue(float value);
    [[nodiscard]] AutomationRate automationRate() const;
    void automationRate(const AutomationRate& value);
};

} // namespace webbind