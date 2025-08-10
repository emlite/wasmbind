#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type StereoPannerOptions
class StereoPannerOptions : public AudioNodeOptions {
  explicit StereoPannerOptions(Handle h) noexcept;
public:
    static StereoPannerOptions take_ownership(Handle h) noexcept;
    explicit StereoPannerOptions(const emlite::Val &val) noexcept;
    StereoPannerOptions() noexcept;
    [[nodiscard]] StereoPannerOptions clone() const noexcept;
    /// Getter of the `pan` attribute.
    [[nodiscard]] float pan() const;
    /// Setter of the `pan` attribute.
    void pan(float value);
};

} // namespace webbind