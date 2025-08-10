#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioSinkOptions
/// [`AudioSinkOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSinkOptions)
class AudioSinkOptions : public emlite::Val {
  explicit AudioSinkOptions(Handle h) noexcept;
public:
    static AudioSinkOptions take_ownership(Handle h) noexcept;
    explicit AudioSinkOptions(const emlite::Val &val) noexcept;
    AudioSinkOptions() noexcept;
    [[nodiscard]] AudioSinkOptions clone() const noexcept;
    [[nodiscard]] AudioSinkType type() const;
    void type(const AudioSinkType& value);
};

} // namespace webbind