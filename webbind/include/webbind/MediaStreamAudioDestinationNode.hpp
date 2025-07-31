#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class MediaStream;


/// The MediaStreamAudioDestinationNode class.
/// [`MediaStreamAudioDestinationNode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioDestinationNode)
class MediaStreamAudioDestinationNode : public AudioNode {
    explicit MediaStreamAudioDestinationNode(Handle h) noexcept;

public:
    explicit MediaStreamAudioDestinationNode(const emlite::Val &val) noexcept;
    static MediaStreamAudioDestinationNode take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaStreamAudioDestinationNode clone() const noexcept;
    /// The `new MediaStreamAudioDestinationNode(..)` constructor, creating a new MediaStreamAudioDestinationNode instance
    MediaStreamAudioDestinationNode(const AudioContext& context);
    /// The `new MediaStreamAudioDestinationNode(..)` constructor, creating a new MediaStreamAudioDestinationNode instance
    MediaStreamAudioDestinationNode(const AudioContext& context, const jsbind::Any& options);
    /// Getter of the `stream` attribute.
    /// [`MediaStreamAudioDestinationNode.stream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioDestinationNode/stream)
    [[nodiscard]] MediaStream stream() const;
};

