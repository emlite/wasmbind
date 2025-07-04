#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "BaseAudioContext.hpp"
#include "enums.hpp"

class AudioBuffer;


class OfflineAudioContext : public BaseAudioContext {
    explicit OfflineAudioContext(Handle h) noexcept;

public:
    explicit OfflineAudioContext(const emlite::Val &val) noexcept;
    static OfflineAudioContext take_ownership(Handle h) noexcept;

    OfflineAudioContext clone() const noexcept;
    OfflineAudioContext(unsigned long numberOfChannels, unsigned long length, float sampleRate);
    jsbind::Promise startRendering();
    jsbind::Promise resume();
    jsbind::Promise suspend(double suspendTime);
    unsigned long length() const;
    jsbind::Any oncomplete() const;
    void oncomplete(const jsbind::Any& value);
};

