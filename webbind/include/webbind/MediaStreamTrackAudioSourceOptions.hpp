#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStreamTrack;

/// Dictionary type MediaStreamTrackAudioSourceOptions
class MediaStreamTrackAudioSourceOptions : public emlite::Val {
  explicit MediaStreamTrackAudioSourceOptions(Handle h) noexcept;
public:
    static MediaStreamTrackAudioSourceOptions take_ownership(Handle h) noexcept;
    explicit MediaStreamTrackAudioSourceOptions(const emlite::Val &val) noexcept;
    MediaStreamTrackAudioSourceOptions() noexcept;
    [[nodiscard]] MediaStreamTrackAudioSourceOptions clone() const noexcept;
    /// Getter of the `mediaStreamTrack` attribute.
    [[nodiscard]] MediaStreamTrack mediaStreamTrack() const;
    /// Setter of the `mediaStreamTrack` attribute.
    void mediaStreamTrack(const MediaStreamTrack& value);
};

} // namespace webbind