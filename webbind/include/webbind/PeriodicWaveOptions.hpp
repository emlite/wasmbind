#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PeriodicWaveConstraints.hpp"

namespace webbind {

/// Dictionary type PeriodicWaveOptions
/// [`PeriodicWaveOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicWaveOptions)
class PeriodicWaveOptions : public PeriodicWaveConstraints {
  explicit PeriodicWaveOptions(Handle h) noexcept;
public:
    static PeriodicWaveOptions take_ownership(Handle h) noexcept;
    explicit PeriodicWaveOptions(const emlite::Val &val) noexcept;
    PeriodicWaveOptions() noexcept;
    [[nodiscard]] PeriodicWaveOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<float> real() const;
    void real(jsbind::TypedArray<float> value);
    [[nodiscard]] jsbind::TypedArray<float> imag() const;
    void imag(jsbind::TypedArray<float> value);
};

} // namespace webbind