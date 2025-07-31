#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class HTMLMediaElement;
class AudioContext;


/// The MediaElementAudioSourceNode class.
/// [`MediaElementAudioSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaElementAudioSourceNode)
class MediaElementAudioSourceNode : public AudioNode {
    explicit MediaElementAudioSourceNode(Handle h) noexcept;

public:
    explicit MediaElementAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaElementAudioSourceNode take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaElementAudioSourceNode clone() const noexcept;
    /// The `new MediaElementAudioSourceNode(..)` constructor, creating a new MediaElementAudioSourceNode instance
    MediaElementAudioSourceNode(const AudioContext& context, const jsbind::Any& options);
    /// Getter of the `mediaElement` attribute.
    /// [`MediaElementAudioSourceNode.mediaElement`](https://developer.mozilla.org/en-US/docs/Web/API/MediaElementAudioSourceNode/mediaElement)
    [[nodiscard]] HTMLMediaElement mediaElement() const;
};

