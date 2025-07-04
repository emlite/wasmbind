#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MessagePort;


class AudioWorkletProcessor : public emlite::Val {
    explicit AudioWorkletProcessor(Handle h) noexcept;

public:
    explicit AudioWorkletProcessor(const emlite::Val &val) noexcept;
    static AudioWorkletProcessor take_ownership(Handle h) noexcept;

    AudioWorkletProcessor clone() const noexcept;
    AudioWorkletProcessor();
    jsbind::Any port() const;
};

