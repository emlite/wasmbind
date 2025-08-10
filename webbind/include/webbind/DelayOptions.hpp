#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type DelayOptions
/// [`DelayOptions`](https://developer.mozilla.org/en-US/docs/Web/API/DelayOptions)
class DelayOptions : public AudioNodeOptions {
  explicit DelayOptions(Handle h) noexcept;
public:
    static DelayOptions take_ownership(Handle h) noexcept;
    explicit DelayOptions(const emlite::Val &val) noexcept;
    DelayOptions() noexcept;
    [[nodiscard]] DelayOptions clone() const noexcept;
    [[nodiscard]] double maxDelayTime() const;
    void maxDelayTime(double value);
    [[nodiscard]] double delayTime() const;
    void delayTime(double value);
};

} // namespace webbind