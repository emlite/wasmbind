#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AudioParam;


class AudioListener : public emlite::Val {
    explicit AudioListener(Handle h) noexcept;

public:
    explicit AudioListener(const emlite::Val &val) noexcept;
    static AudioListener take_ownership(Handle h) noexcept;

    AudioListener clone() const noexcept;
    AudioParam positionX() const;
    AudioParam positionY() const;
    AudioParam positionZ() const;
    AudioParam forwardX() const;
    AudioParam forwardY() const;
    AudioParam forwardZ() const;
    AudioParam upX() const;
    AudioParam upY() const;
    AudioParam upZ() const;
    jsbind::Undefined setPosition(float x, float y, float z);
    jsbind::Undefined setOrientation(float x, float y, float z, float xUp, float yUp, float zUp);
};

