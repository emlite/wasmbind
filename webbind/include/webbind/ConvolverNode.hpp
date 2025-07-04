#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioBuffer;


class ConvolverNode : public AudioNode {
    explicit ConvolverNode(Handle h) noexcept;

public:
    explicit ConvolverNode(const emlite::Val &val) noexcept;
    static ConvolverNode take_ownership(Handle h) noexcept;

    ConvolverNode clone() const noexcept;
    ConvolverNode(const BaseAudioContext& context, const jsbind::Any& options);
    AudioBuffer buffer() const;
    void buffer(const AudioBuffer& value);
    bool normalize() const;
    void normalize(bool value);
};

