#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type OptionalEffectTiming
/// [`OptionalEffectTiming`](https://developer.mozilla.org/en-US/docs/Web/API/OptionalEffectTiming)
class OptionalEffectTiming : public emlite::Val {
  explicit OptionalEffectTiming(Handle h) noexcept;
public:
    static OptionalEffectTiming take_ownership(Handle h) noexcept;
    explicit OptionalEffectTiming(const emlite::Val &val) noexcept;
    OptionalEffectTiming() noexcept;
    [[nodiscard]] OptionalEffectTiming clone() const noexcept;
    [[nodiscard]] double delay() const;
    void delay(double value);
    [[nodiscard]] double endDelay() const;
    void endDelay(double value);
    [[nodiscard]] FillMode fill() const;
    void fill(const FillMode& value);
    [[nodiscard]] double iterationStart() const;
    void iterationStart(double value);
    [[nodiscard]] double iterations() const;
    void iterations(double value);
    [[nodiscard]] jsbind::Any duration() const;
    void duration(const jsbind::Any& value);
    [[nodiscard]] PlaybackDirection direction() const;
    void direction(const PlaybackDirection& value);
    [[nodiscard]] jsbind::String easing() const;
    void easing(const jsbind::String& value);
};

} // namespace webbind