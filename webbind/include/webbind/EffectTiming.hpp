#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EffectTiming
/// [`EffectTiming`](https://developer.mozilla.org/en-US/docs/Web/API/EffectTiming)
class EffectTiming : public emlite::Val {
  explicit EffectTiming(Handle h) noexcept;
public:
    static EffectTiming take_ownership(Handle h) noexcept;
    explicit EffectTiming(const emlite::Val &val) noexcept;
    EffectTiming() noexcept;
    [[nodiscard]] EffectTiming clone() const noexcept;
    [[nodiscard]] FillMode fill() const;
    void fill(const FillMode& value);
    [[nodiscard]] double iterationStart() const;
    void iterationStart(double value);
    [[nodiscard]] double iterations() const;
    void iterations(double value);
    [[nodiscard]] PlaybackDirection direction() const;
    void direction(const PlaybackDirection& value);
    [[nodiscard]] jsbind::String easing() const;
    void easing(const jsbind::String& value);
};

} // namespace webbind