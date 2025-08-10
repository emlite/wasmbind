#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EffectTiming.hpp"

namespace webbind {

/// Dictionary type KeyframeEffectOptions
class KeyframeEffectOptions : public EffectTiming {
  explicit KeyframeEffectOptions(Handle h) noexcept;
public:
    static KeyframeEffectOptions take_ownership(Handle h) noexcept;
    explicit KeyframeEffectOptions(const emlite::Val &val) noexcept;
    KeyframeEffectOptions() noexcept;
    [[nodiscard]] KeyframeEffectOptions clone() const noexcept;
    /// Getter of the `composite` attribute.
    [[nodiscard]] CompositeOperation composite() const;
    /// Setter of the `composite` attribute.
    void composite(const CompositeOperation& value);
    /// Getter of the `pseudoElement` attribute.
    [[nodiscard]] jsbind::String pseudoElement() const;
    /// Setter of the `pseudoElement` attribute.
    void pseudoElement(const jsbind::String& value);
};

} // namespace webbind