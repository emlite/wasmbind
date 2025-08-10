#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "MediaStreamTrackAudioSourceOptions.hpp"

namespace webbind {

class AudioContext;

/// Interface MediaStreamTrackAudioSourceNode
/// [`MediaStreamTrackAudioSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackAudioSourceNode)
class MediaStreamTrackAudioSourceNode : public AudioNode {
    explicit MediaStreamTrackAudioSourceNode(Handle h) noexcept;
public:
    explicit MediaStreamTrackAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaStreamTrackAudioSourceNode take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaStreamTrackAudioSourceNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaStreamTrackAudioSourceNode(..)` constructor, creating a new MediaStreamTrackAudioSourceNode instance
    MediaStreamTrackAudioSourceNode(const AudioContext& context, const MediaStreamTrackAudioSourceOptions& options);
};

} // namespace webbind