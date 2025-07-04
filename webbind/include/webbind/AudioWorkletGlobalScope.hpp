#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"

class MessagePort;


class AudioWorkletGlobalScope : public WorkletGlobalScope {
    explicit AudioWorkletGlobalScope(Handle h) noexcept;

public:
    explicit AudioWorkletGlobalScope(const emlite::Val &val) noexcept;
    static AudioWorkletGlobalScope take_ownership(Handle h) noexcept;

    AudioWorkletGlobalScope clone() const noexcept;
    jsbind::Undefined registerProcessor(const jsbind::DOMString& name, const jsbind::Function& processorCtor);
    long long currentFrame() const;
    double currentTime() const;
    float sampleRate() const;
    unsigned long renderQuantumSize() const;
    jsbind::Any port() const;
};

