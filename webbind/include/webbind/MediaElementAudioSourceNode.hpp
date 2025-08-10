#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"
#include "MediaElementAudioSourceOptions.hpp"

namespace webbind {

class AudioContext;
class HTMLMediaElement;

/// Interface MediaElementAudioSourceNode
/// [`MediaElementAudioSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaElementAudioSourceNode)
class MediaElementAudioSourceNode : public AudioNode {
    explicit MediaElementAudioSourceNode(Handle h) noexcept;
public:
    explicit MediaElementAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaElementAudioSourceNode take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaElementAudioSourceNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaElementAudioSourceNode(..)` constructor, creating a new MediaElementAudioSourceNode instance
    MediaElementAudioSourceNode(const AudioContext& context, const MediaElementAudioSourceOptions& options);
    /// [`MediaElementAudioSourceNode.mediaElement`](https://developer.mozilla.org/en-US/docs/Web/API/MediaElementAudioSourceNode/mediaElement)
    /// [`MediaElementAudioSourceNode.mediaElement`](https://developer.mozilla.org/en-US/docs/Web/API/MediaElementAudioSourceNode/mediaElement)
    [[nodiscard]] HTMLMediaElement mediaElement() const;
};

} // namespace webbind