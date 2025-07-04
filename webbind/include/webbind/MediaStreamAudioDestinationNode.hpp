#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class MediaStream;


class MediaStreamAudioDestinationNode : public AudioNode {
    explicit MediaStreamAudioDestinationNode(Handle h) noexcept;

public:
    explicit MediaStreamAudioDestinationNode(const emlite::Val &val) noexcept;
    static MediaStreamAudioDestinationNode take_ownership(Handle h) noexcept;

    MediaStreamAudioDestinationNode clone() const noexcept;
    MediaStreamAudioDestinationNode(const AudioContext& context, const jsbind::Any& options);
    MediaStream stream() const;
};

