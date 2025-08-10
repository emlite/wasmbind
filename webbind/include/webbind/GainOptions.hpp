#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type GainOptions
class GainOptions : public AudioNodeOptions {
  explicit GainOptions(Handle h) noexcept;
public:
    static GainOptions take_ownership(Handle h) noexcept;
    explicit GainOptions(const emlite::Val &val) noexcept;
    GainOptions() noexcept;
    [[nodiscard]] GainOptions clone() const noexcept;
    /// Getter of the `gain` attribute.
    [[nodiscard]] float gain() const;
    /// Setter of the `gain` attribute.
    void gain(float value);
};

} // namespace webbind