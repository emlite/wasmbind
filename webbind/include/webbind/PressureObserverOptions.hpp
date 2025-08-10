#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PressureObserverOptions
/// [`PressureObserverOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PressureObserverOptions)
class PressureObserverOptions : public emlite::Val {
  explicit PressureObserverOptions(Handle h) noexcept;
public:
    static PressureObserverOptions take_ownership(Handle h) noexcept;
    explicit PressureObserverOptions(const emlite::Val &val) noexcept;
    PressureObserverOptions() noexcept;
    [[nodiscard]] PressureObserverOptions clone() const noexcept;
    [[nodiscard]] unsigned long sampleInterval() const;
    void sampleInterval(unsigned long value);
};

} // namespace webbind