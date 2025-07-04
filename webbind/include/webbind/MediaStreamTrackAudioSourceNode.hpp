#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class MediaStreamTrackAudioSourceNode : public AudioNode {
    explicit MediaStreamTrackAudioSourceNode(Handle h) noexcept;

public:
    explicit MediaStreamTrackAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaStreamTrackAudioSourceNode take_ownership(Handle h) noexcept;

    MediaStreamTrackAudioSourceNode clone() const noexcept;
    MediaStreamTrackAudioSourceNode(const AudioContext& context, const jsbind::Any& options);
};

