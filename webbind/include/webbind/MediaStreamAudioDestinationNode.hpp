#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

class AudioContext;
class MediaStream;

/// Interface MediaStreamAudioDestinationNode
/// [`MediaStreamAudioDestinationNode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioDestinationNode)
class MediaStreamAudioDestinationNode : public AudioNode {
    explicit MediaStreamAudioDestinationNode(Handle h) noexcept;
public:
    explicit MediaStreamAudioDestinationNode(const emlite::Val &val) noexcept;
    static MediaStreamAudioDestinationNode take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaStreamAudioDestinationNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaStreamAudioDestinationNode(..)` constructor, creating a new MediaStreamAudioDestinationNode instance
    MediaStreamAudioDestinationNode(const AudioContext& context);
    /// The `new MediaStreamAudioDestinationNode(..)` constructor, creating a new MediaStreamAudioDestinationNode instance
    MediaStreamAudioDestinationNode(const AudioContext& context, const AudioNodeOptions& options);
    /// Getter of the `stream` attribute.
    /// [`MediaStreamAudioDestinationNode.stream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioDestinationNode/stream)
    [[nodiscard]] MediaStream stream() const;
};

} // namespace webbind