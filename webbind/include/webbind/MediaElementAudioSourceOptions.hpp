#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class HTMLMediaElement;

/// Dictionary type MediaElementAudioSourceOptions
class MediaElementAudioSourceOptions : public emlite::Val {
  explicit MediaElementAudioSourceOptions(Handle h) noexcept;
public:
    static MediaElementAudioSourceOptions take_ownership(Handle h) noexcept;
    explicit MediaElementAudioSourceOptions(const emlite::Val &val) noexcept;
    MediaElementAudioSourceOptions() noexcept;
    [[nodiscard]] MediaElementAudioSourceOptions clone() const noexcept;
    /// Getter of the `mediaElement` attribute.
    [[nodiscard]] HTMLMediaElement mediaElement() const;
    /// Setter of the `mediaElement` attribute.
    void mediaElement(const HTMLMediaElement& value);
};

} // namespace webbind