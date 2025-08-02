#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


/// The MediaStreamTrackAudioSourceNode class.
/// [`MediaStreamTrackAudioSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackAudioSourceNode)
class MediaStreamTrackAudioSourceNode : public AudioNode {
    explicit MediaStreamTrackAudioSourceNode(Handle h) noexcept;

public:
    explicit MediaStreamTrackAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaStreamTrackAudioSourceNode take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaStreamTrackAudioSourceNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaStreamTrackAudioSourceNode(..)` constructor, creating a new MediaStreamTrackAudioSourceNode instance
    MediaStreamTrackAudioSourceNode(const AudioContext& context, const jsbind::Any& options);
};

