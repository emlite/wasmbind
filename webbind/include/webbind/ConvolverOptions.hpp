#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

class AudioBuffer;

/// Dictionary type ConvolverOptions
class ConvolverOptions : public AudioNodeOptions {
  explicit ConvolverOptions(Handle h) noexcept;
public:
    static ConvolverOptions take_ownership(Handle h) noexcept;
    explicit ConvolverOptions(const emlite::Val &val) noexcept;
    ConvolverOptions() noexcept;
    [[nodiscard]] ConvolverOptions clone() const noexcept;
    /// Getter of the `buffer` attribute.
    [[nodiscard]] AudioBuffer buffer() const;
    /// Setter of the `buffer` attribute.
    void buffer(const AudioBuffer& value);
    /// Getter of the `disableNormalization` attribute.
    [[nodiscard]] bool disableNormalization() const;
    /// Setter of the `disableNormalization` attribute.
    void disableNormalization(bool value);
};

} // namespace webbind