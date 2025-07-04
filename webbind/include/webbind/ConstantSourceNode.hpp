#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioScheduledSourceNode.hpp"
#include "enums.hpp"

class AudioParam;


class ConstantSourceNode : public AudioScheduledSourceNode {
    explicit ConstantSourceNode(Handle h) noexcept;

public:
    explicit ConstantSourceNode(const emlite::Val &val) noexcept;
    static ConstantSourceNode take_ownership(Handle h) noexcept;

    ConstantSourceNode clone() const noexcept;
    ConstantSourceNode(const BaseAudioContext& context, const jsbind::Any& options);
    AudioParam offset() const;
};

