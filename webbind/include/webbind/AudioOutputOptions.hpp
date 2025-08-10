#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioOutputOptions
class AudioOutputOptions : public emlite::Val {
  explicit AudioOutputOptions(Handle h) noexcept;
public:
    static AudioOutputOptions take_ownership(Handle h) noexcept;
    explicit AudioOutputOptions(const emlite::Val &val) noexcept;
    AudioOutputOptions() noexcept;
    [[nodiscard]] AudioOutputOptions clone() const noexcept;
    /// Getter of the `deviceId` attribute.
    [[nodiscard]] jsbind::String deviceId() const;
    /// Setter of the `deviceId` attribute.
    void deviceId(const jsbind::String& value);
};

} // namespace webbind