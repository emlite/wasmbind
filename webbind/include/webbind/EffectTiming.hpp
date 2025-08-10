#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EffectTiming
class EffectTiming : public emlite::Val {
  explicit EffectTiming(Handle h) noexcept;
public:
    static EffectTiming take_ownership(Handle h) noexcept;
    explicit EffectTiming(const emlite::Val &val) noexcept;
    EffectTiming() noexcept;
    [[nodiscard]] EffectTiming clone() const noexcept;
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