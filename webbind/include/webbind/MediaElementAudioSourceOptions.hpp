#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class HTMLMediaElement;

/// Dictionary type MediaElementAudioSourceOptions
/// [`MediaElementAudioSourceOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MediaElementAudioSourceOptions)
class MediaElementAudioSourceOptions : public emlite::Val {
  explicit MediaElementAudioSourceOptions(Handle h) noexcept;
public:
    static MediaElementAudioSourceOptions take_ownership(Handle h) noexcept;
    explicit MediaElementAudioSourceOptions(const emlite::Val &val) noexcept;
    MediaElementAudioSourceOptions() noexcept;
    [[nodiscard]] MediaElementAudioSourceOptions clone() const noexcept;
    [[nodiscard]] HTMLMediaElement mediaElement() const;
    void mediaElement(const HTMLMediaElement& value);
};

} // namespace webbind