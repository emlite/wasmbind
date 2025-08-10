#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PeriodicWaveConstraints
class PeriodicWaveConstraints : public emlite::Val {
  explicit PeriodicWaveConstraints(Handle h) noexcept;
public:
    static PeriodicWaveConstraints take_ownership(Handle h) noexcept;
    explicit PeriodicWaveConstraints(const emlite::Val &val) noexcept;
    PeriodicWaveConstraints() noexcept;
    [[nodiscard]] PeriodicWaveConstraints clone() const noexcept;
    /// Getter of the `disableNormalization` attribute.
    [[nodiscard]] bool disableNormalization() const;
    /// Setter of the `disableNormalization` attribute.
    void disableNormalization(bool value);
};

} // namespace webbind