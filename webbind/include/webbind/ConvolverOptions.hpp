#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

class AudioBuffer;

/// Dictionary type ConvolverOptions
/// [`ConvolverOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverOptions)
class ConvolverOptions : public AudioNodeOptions {
  explicit ConvolverOptions(Handle h) noexcept;
public:
    static ConvolverOptions take_ownership(Handle h) noexcept;
    explicit ConvolverOptions(const emlite::Val &val) noexcept;
    ConvolverOptions() noexcept;
    [[nodiscard]] ConvolverOptions clone() const noexcept;
    [[nodiscard]] AudioBuffer buffer() const;
    void buffer(const AudioBuffer& value);
    [[nodiscard]] bool disableNormalization() const;
    void disableNormalization(bool value);
};

} // namespace webbind