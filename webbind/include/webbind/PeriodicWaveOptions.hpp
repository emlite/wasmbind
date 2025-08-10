#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PeriodicWaveConstraints.hpp"

namespace webbind {

/// Dictionary type PeriodicWaveOptions
class PeriodicWaveOptions : public PeriodicWaveConstraints {
  explicit PeriodicWaveOptions(Handle h) noexcept;
public:
    static PeriodicWaveOptions take_ownership(Handle h) noexcept;
    explicit PeriodicWaveOptions(const emlite::Val &val) noexcept;
    PeriodicWaveOptions() noexcept;
    [[nodiscard]] PeriodicWaveOptions clone() const noexcept;
    /// Getter of the `real` attribute.
    [[nodiscard]] jsbind::TypedArray<float> real() const;
    /// Setter of the `real` attribute.
    void real(jsbind::TypedArray<float> value);
    /// Getter of the `imag` attribute.
    [[nodiscard]] jsbind::TypedArray<float> imag() const;
    /// Setter of the `imag` attribute.
    void imag(jsbind::TypedArray<float> value);
};

} // namespace webbind