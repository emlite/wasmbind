#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStream;

/// Dictionary type MediaStreamAudioSourceOptions
class MediaStreamAudioSourceOptions : public emlite::Val {
  explicit MediaStreamAudioSourceOptions(Handle h) noexcept;
public:
    static MediaStreamAudioSourceOptions take_ownership(Handle h) noexcept;
    explicit MediaStreamAudioSourceOptions(const emlite::Val &val) noexcept;
    MediaStreamAudioSourceOptions() noexcept;
    [[nodiscard]] MediaStreamAudioSourceOptions clone() const noexcept;
    /// Getter of the `mediaStream` attribute.
    [[nodiscard]] MediaStream mediaStream() const;
    /// Setter of the `mediaStream` attribute.
    void mediaStream(const MediaStream& value);
};

} // namespace webbind