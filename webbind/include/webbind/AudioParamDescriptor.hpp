#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioParamDescriptor
class AudioParamDescriptor : public emlite::Val {
  explicit AudioParamDescriptor(Handle h) noexcept;
public:
    static AudioParamDescriptor take_ownership(Handle h) noexcept;
    explicit AudioParamDescriptor(const emlite::Val &val) noexcept;
    AudioParamDescriptor() noexcept;
    [[nodiscard]] AudioParamDescriptor clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `defaultValue` attribute.
    [[nodiscard]] float defaultValue() const;
    /// Setter of the `defaultValue` attribute.
    void defaultValue(float value);
    /// Getter of the `minValue` attribute.
    [[nodiscard]] float minValue() const;
    /// Setter of the `minValue` attribute.
    void minValue(float value);
    /// Getter of the `maxValue` attribute.
    [[nodiscard]] float maxValue() const;
    /// Setter of the `maxValue` attribute.
    void maxValue(float value);
    /// Getter of the `automationRate` attribute.
    [[nodiscard]] AutomationRate automationRate() const;
    /// Setter of the `automationRate` attribute.
    void automationRate(const AutomationRate& value);
};

} // namespace webbind