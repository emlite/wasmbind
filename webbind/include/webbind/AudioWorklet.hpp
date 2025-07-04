#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Worklet.hpp"
#include "enums.hpp"

class MessagePort;


class AudioWorklet : public Worklet {
    explicit AudioWorklet(Handle h) noexcept;

public:
    explicit AudioWorklet(const emlite::Val &val) noexcept;
    static AudioWorklet take_ownership(Handle h) noexcept;

    AudioWorklet clone() const noexcept;
    jsbind::Any port() const;
};

