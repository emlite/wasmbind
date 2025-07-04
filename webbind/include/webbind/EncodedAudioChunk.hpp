#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EncodedAudioChunk : public emlite::Val {
    explicit EncodedAudioChunk(Handle h) noexcept;

public:
    explicit EncodedAudioChunk(const emlite::Val &val) noexcept;
    static EncodedAudioChunk take_ownership(Handle h) noexcept;

    EncodedAudioChunk clone() const noexcept;
    EncodedAudioChunk(const jsbind::Any& init);
    EncodedAudioChunkType type() const;
    long long timestamp() const;
    long long duration() const;
    unsigned long byteLength() const;
    jsbind::Undefined copyTo(const jsbind::Any& destination);
};

