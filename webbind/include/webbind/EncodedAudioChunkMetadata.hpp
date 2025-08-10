#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioDecoderConfig.hpp"

namespace webbind {

/// Dictionary type EncodedAudioChunkMetadata
/// [`EncodedAudioChunkMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunkMetadata)
class EncodedAudioChunkMetadata : public emlite::Val {
  explicit EncodedAudioChunkMetadata(Handle h) noexcept;
public:
    static EncodedAudioChunkMetadata take_ownership(Handle h) noexcept;
    explicit EncodedAudioChunkMetadata(const emlite::Val &val) noexcept;
    EncodedAudioChunkMetadata() noexcept;
    [[nodiscard]] EncodedAudioChunkMetadata clone() const noexcept;
    [[nodiscard]] AudioDecoderConfig decoderConfig() const;
    void decoderConfig(const AudioDecoderConfig& value);
};

} // namespace webbind