#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PeriodicWaveConstraints
/// [`PeriodicWaveConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicWaveConstraints)
class PeriodicWaveConstraints : public emlite::Val {
  explicit PeriodicWaveConstraints(Handle h) noexcept;
public:
    static PeriodicWaveConstraints take_ownership(Handle h) noexcept;
    explicit PeriodicWaveConstraints(const emlite::Val &val) noexcept;
    PeriodicWaveConstraints() noexcept;
    [[nodiscard]] PeriodicWaveConstraints clone() const noexcept;
    [[nodiscard]] bool disableNormalization() const;
    void disableNormalization(bool value);
};

} // namespace webbind