#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class AudioSession : public EventTarget {
    explicit AudioSession(Handle h) noexcept;

public:
    explicit AudioSession(const emlite::Val &val) noexcept;
    static AudioSession take_ownership(Handle h) noexcept;

    AudioSession clone() const noexcept;
    AudioSessionType type() const;
    void type(const AudioSessionType& value);
    AudioSessionState state() const;
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
};

