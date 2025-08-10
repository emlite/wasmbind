#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type GainOptions
/// [`GainOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GainOptions)
class GainOptions : public AudioNodeOptions {
  explicit GainOptions(Handle h) noexcept;
public:
    static GainOptions take_ownership(Handle h) noexcept;
    explicit GainOptions(const emlite::Val &val) noexcept;
    GainOptions() noexcept;
    [[nodiscard]] GainOptions clone() const noexcept;
    [[nodiscard]] float gain() const;
    void gain(float value);
};

} // namespace webbind