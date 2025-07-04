#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParamMap;
class MessagePort;
class BaseAudioContext;


class AudioWorkletNode : public AudioNode {
    explicit AudioWorkletNode(Handle h) noexcept;

public:
    explicit AudioWorkletNode(const emlite::Val &val) noexcept;
    static AudioWorkletNode take_ownership(Handle h) noexcept;

    AudioWorkletNode clone() const noexcept;
    AudioWorkletNode(const BaseAudioContext& context, const jsbind::DOMString& name, const jsbind::Any& options);
    AudioParamMap parameters() const;
    jsbind::Any port() const;
    jsbind::Any onprocessorerror() const;
    void onprocessorerror(const jsbind::Any& value);
};

