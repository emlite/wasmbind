#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class HTMLMediaElement;
class AudioContext;


class MediaElementAudioSourceNode : public AudioNode {
    explicit MediaElementAudioSourceNode(Handle h) noexcept;

public:
    explicit MediaElementAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaElementAudioSourceNode take_ownership(Handle h) noexcept;

    MediaElementAudioSourceNode clone() const noexcept;
    MediaElementAudioSourceNode(const AudioContext& context, const jsbind::Any& options);
    HTMLMediaElement mediaElement() const;
};

