#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStream;

/// Dictionary type MediaStreamAudioSourceOptions
/// [`MediaStreamAudioSourceOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioSourceOptions)
class MediaStreamAudioSourceOptions : public emlite::Val {
  explicit MediaStreamAudioSourceOptions(Handle h) noexcept;
public:
    static MediaStreamAudioSourceOptions take_ownership(Handle h) noexcept;
    explicit MediaStreamAudioSourceOptions(const emlite::Val &val) noexcept;
    MediaStreamAudioSourceOptions() noexcept;
    [[nodiscard]] MediaStreamAudioSourceOptions clone() const noexcept;
    [[nodiscard]] MediaStream mediaStream() const;
    void mediaStream(const MediaStream& value);
};

} // namespace webbind