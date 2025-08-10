#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioSinkOptions
class AudioSinkOptions : public emlite::Val {
  explicit AudioSinkOptions(Handle h) noexcept;
public:
    static AudioSinkOptions take_ownership(Handle h) noexcept;
    explicit AudioSinkOptions(const emlite::Val &val) noexcept;
    AudioSinkOptions() noexcept;
    [[nodiscard]] AudioSinkOptions clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] AudioSinkType type() const;
    /// Setter of the `type` attribute.
    void type(const AudioSinkType& value);
};

} // namespace webbind