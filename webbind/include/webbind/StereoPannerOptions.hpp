#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type StereoPannerOptions
/// [`StereoPannerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/StereoPannerOptions)
class StereoPannerOptions : public AudioNodeOptions {
  explicit StereoPannerOptions(Handle h) noexcept;
public:
    static StereoPannerOptions take_ownership(Handle h) noexcept;
    explicit StereoPannerOptions(const emlite::Val &val) noexcept;
    StereoPannerOptions() noexcept;
    [[nodiscard]] StereoPannerOptions clone() const noexcept;
    [[nodiscard]] float pan() const;
    void pan(float value);
};

} // namespace webbind