#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioOutputOptions
/// [`AudioOutputOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AudioOutputOptions)
class AudioOutputOptions : public emlite::Val {
  explicit AudioOutputOptions(Handle h) noexcept;
public:
    static AudioOutputOptions take_ownership(Handle h) noexcept;
    explicit AudioOutputOptions(const emlite::Val &val) noexcept;
    AudioOutputOptions() noexcept;
    [[nodiscard]] AudioOutputOptions clone() const noexcept;
    [[nodiscard]] jsbind::String deviceId() const;
    void deviceId(const jsbind::String& value);
};

} // namespace webbind