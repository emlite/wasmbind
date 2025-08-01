#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class MediaStream;


/// The MediaStreamAudioSourceNode class.
/// [`MediaStreamAudioSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioSourceNode)
class MediaStreamAudioSourceNode : public AudioNode {
    explicit MediaStreamAudioSourceNode(Handle h) noexcept;

public:
    explicit MediaStreamAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaStreamAudioSourceNode take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaStreamAudioSourceNode clone() const noexcept;
    /// The `new MediaStreamAudioSourceNode(..)` constructor, creating a new MediaStreamAudioSourceNode instance
    MediaStreamAudioSourceNode(const AudioContext& context, const jsbind::Any& options);
    /// Getter of the `mediaStream` attribute.
    /// [`MediaStreamAudioSourceNode.mediaStream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioSourceNode/mediaStream)
    [[nodiscard]] MediaStream mediaStream() const;
};

