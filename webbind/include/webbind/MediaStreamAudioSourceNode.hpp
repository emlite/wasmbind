#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "MediaStreamAudioSourceOptions.hpp"

namespace webbind {

class AudioContext;
class MediaStream;

/// Interface MediaStreamAudioSourceNode
/// [`MediaStreamAudioSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioSourceNode)
class MediaStreamAudioSourceNode : public AudioNode {
    explicit MediaStreamAudioSourceNode(Handle h) noexcept;
public:
    explicit MediaStreamAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaStreamAudioSourceNode take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaStreamAudioSourceNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaStreamAudioSourceNode(..)` constructor, creating a new MediaStreamAudioSourceNode instance
    MediaStreamAudioSourceNode(const AudioContext& context, const MediaStreamAudioSourceOptions& options);
    /// Getter of the `mediaStream` attribute.
    /// [`MediaStreamAudioSourceNode.mediaStream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioSourceNode/mediaStream)
    [[nodiscard]] MediaStream mediaStream() const;
};

} // namespace webbind