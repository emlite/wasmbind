#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type DelayOptions
class DelayOptions : public AudioNodeOptions {
  explicit DelayOptions(Handle h) noexcept;
public:
    static DelayOptions take_ownership(Handle h) noexcept;
    explicit DelayOptions(const emlite::Val &val) noexcept;
    DelayOptions() noexcept;
    [[nodiscard]] DelayOptions clone() const noexcept;
    /// Getter of the `maxDelayTime` attribute.
    [[nodiscard]] double maxDelayTime() const;
    /// Setter of the `maxDelayTime` attribute.
    void maxDelayTime(double value);
    /// Getter of the `delayTime` attribute.
    [[nodiscard]] double delayTime() const;
    /// Setter of the `delayTime` attribute.
    void delayTime(double value);
};

} // namespace webbind