#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStreamTrack;

/// Dictionary type MediaStreamTrackAudioSourceOptions
/// [`MediaStreamTrackAudioSourceOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackAudioSourceOptions)
class MediaStreamTrackAudioSourceOptions : public emlite::Val {
  explicit MediaStreamTrackAudioSourceOptions(Handle h) noexcept;
public:
    static MediaStreamTrackAudioSourceOptions take_ownership(Handle h) noexcept;
    explicit MediaStreamTrackAudioSourceOptions(const emlite::Val &val) noexcept;
    MediaStreamTrackAudioSourceOptions() noexcept;
    [[nodiscard]] MediaStreamTrackAudioSourceOptions clone() const noexcept;
    [[nodiscard]] MediaStreamTrack mediaStreamTrack() const;
    void mediaStreamTrack(const MediaStreamTrack& value);
};

} // namespace webbind