#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type OptionalEffectTiming
class OptionalEffectTiming : public emlite::Val {
  explicit OptionalEffectTiming(Handle h) noexcept;
public:
    static OptionalEffectTiming take_ownership(Handle h) noexcept;
    explicit OptionalEffectTiming(const emlite::Val &val) noexcept;
    OptionalEffectTiming() noexcept;
    [[nodiscard]] OptionalEffectTiming clone() const noexcept;
    /// Getter of the `delay` attribute.
    [[nodiscard]] double delay() const;
    /// Setter of the `delay` attribute.
    void delay(double value);
    /// Getter of the `endDelay` attribute.
    [[nodiscard]] double endDelay() const;
    /// Setter of the `endDelay` attribute.
    void endDelay(double value);
    /// Getter of the `fill` attribute.
    [[nodiscard]] FillMode fill() const;
    /// Setter of the `fill` attribute.
    void fill(const FillMode& value);
    /// Getter of the `iterationStart` attribute.
    [[nodiscard]] double iterationStart() const;
    /// Setter of the `iterationStart` attribute.
    void iterationStart(double value);
    /// Getter of the `iterations` attribute.
    [[nodiscard]] double iterations() const;
    /// Setter of the `iterations` attribute.
    void iterations(double value);
    /// Getter of the `duration` attribute.
    [[nodiscard]] jsbind::Any duration() const;
    /// Setter of the `duration` attribute.
    void duration(const jsbind::Any& value);
    /// Getter of the `direction` attribute.
    [[nodiscard]] PlaybackDirection direction() const;
    /// Setter of the `direction` attribute.
    void direction(const PlaybackDirection& value);
    /// Getter of the `easing` attribute.
    [[nodiscard]] jsbind::String easing() const;
    /// Setter of the `easing` attribute.
    void easing(const jsbind::String& value);
};

} // namespace webbind