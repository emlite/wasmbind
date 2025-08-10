#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EffectTiming.hpp"

namespace webbind {

/// Dictionary type KeyframeEffectOptions
/// [`KeyframeEffectOptions`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffectOptions)
class KeyframeEffectOptions : public EffectTiming {
  explicit KeyframeEffectOptions(Handle h) noexcept;
public:
    static KeyframeEffectOptions take_ownership(Handle h) noexcept;
    explicit KeyframeEffectOptions(const emlite::Val &val) noexcept;
    KeyframeEffectOptions() noexcept;
    [[nodiscard]] KeyframeEffectOptions clone() const noexcept;
    [[nodiscard]] CompositeOperation composite() const;
    void composite(const CompositeOperation& value);
    [[nodiscard]] jsbind::String pseudoElement() const;
    void pseudoElement(const jsbind::String& value);
};

} // namespace webbind