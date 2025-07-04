#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EncodedVideoChunk : public emlite::Val {
    explicit EncodedVideoChunk(Handle h) noexcept;

public:
    explicit EncodedVideoChunk(const emlite::Val &val) noexcept;
    static EncodedVideoChunk take_ownership(Handle h) noexcept;

    EncodedVideoChunk clone() const noexcept;
    EncodedVideoChunk(const jsbind::Any& init);
    EncodedVideoChunkType type() const;
    long long timestamp() const;
    long long duration() const;
    unsigned long byteLength() const;
    jsbind::Undefined copyTo(const jsbind::Any& destination);
};

