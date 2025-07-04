#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SourceBuffer;


class AudioTrack : public emlite::Val {
    explicit AudioTrack(Handle h) noexcept;

public:
    explicit AudioTrack(const emlite::Val &val) noexcept;
    static AudioTrack take_ownership(Handle h) noexcept;

    AudioTrack clone() const noexcept;
    jsbind::DOMString id() const;
    jsbind::DOMString kind() const;
    jsbind::DOMString label() const;
    jsbind::DOMString language() const;
    bool enabled() const;
    void enabled(bool value);
    SourceBuffer sourceBuffer() const;
};

