#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type DynamicsCompressorOptions
/// [`DynamicsCompressorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorOptions)
class DynamicsCompressorOptions : public AudioNodeOptions {
  explicit DynamicsCompressorOptions(Handle h) noexcept;
public:
    static DynamicsCompressorOptions take_ownership(Handle h) noexcept;
    explicit DynamicsCompressorOptions(const emlite::Val &val) noexcept;
    DynamicsCompressorOptions() noexcept;
    [[nodiscard]] DynamicsCompressorOptions clone() const noexcept;
    [[nodiscard]] float attack() const;
    void attack(float value);
    [[nodiscard]] float knee() const;
    void knee(float value);
    [[nodiscard]] float ratio() const;
    void ratio(float value);
    [[nodiscard]] float release() const;
    void release(float value);
    [[nodiscard]] float threshold() const;
    void threshold(float value);
};

} // namespace webbind