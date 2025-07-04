#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class AudioScheduledSourceNode : public AudioNode {
    explicit AudioScheduledSourceNode(Handle h) noexcept;

public:
    explicit AudioScheduledSourceNode(const emlite::Val &val) noexcept;
    static AudioScheduledSourceNode take_ownership(Handle h) noexcept;

    AudioScheduledSourceNode clone() const noexcept;
    jsbind::Any onended() const;
    void onended(const jsbind::Any& value);
    jsbind::Undefined start(double when);
    jsbind::Undefined stop(double when);
};

