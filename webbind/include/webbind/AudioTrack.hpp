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
    jsbind::String id() const;
    jsbind::String kind() const;
    jsbind::String label() const;
    jsbind::String language() const;
    bool enabled() const;
    void enabled(bool value);
    SourceBuffer sourceBuffer() const;
};

