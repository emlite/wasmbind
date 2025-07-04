#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class MediaStream;


class MediaStreamAudioSourceNode : public AudioNode {
    explicit MediaStreamAudioSourceNode(Handle h) noexcept;

public:
    explicit MediaStreamAudioSourceNode(const emlite::Val &val) noexcept;
    static MediaStreamAudioSourceNode take_ownership(Handle h) noexcept;

    MediaStreamAudioSourceNode clone() const noexcept;
    MediaStreamAudioSourceNode(const AudioContext& context, const jsbind::Any& options);
    MediaStream mediaStream() const;
};

