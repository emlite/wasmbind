#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface Baseline
/// [`Baseline`](https://developer.mozilla.org/en-US/docs/Web/API/Baseline)
class Baseline : public emlite::Val {
    explicit Baseline(Handle h) noexcept;
public:
    explicit Baseline(const emlite::Val &val) noexcept;
    static Baseline take_ownership(Handle h) noexcept;
    [[nodiscard]] Baseline clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`Baseline.name`](https://developer.mozilla.org/en-US/docs/Web/API/Baseline/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `value` attribute.
    /// [`Baseline.value`](https://developer.mozilla.org/en-US/docs/Web/API/Baseline/value)
    [[nodiscard]] double value() const;
};

} // namespace webbind