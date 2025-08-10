#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AudioDecoderConfig;

/// Dictionary type EncodedAudioChunkMetadata
class EncodedAudioChunkMetadata : public emlite::Val {
  explicit EncodedAudioChunkMetadata(Handle h) noexcept;
public:
    static EncodedAudioChunkMetadata take_ownership(Handle h) noexcept;
    explicit EncodedAudioChunkMetadata(const emlite::Val &val) noexcept;
    EncodedAudioChunkMetadata() noexcept;
    [[nodiscard]] EncodedAudioChunkMetadata clone() const noexcept;
    /// Getter of the `decoderConfig` attribute.
    [[nodiscard]] AudioDecoderConfig decoderConfig() const;
    /// Setter of the `decoderConfig` attribute.
    void decoderConfig(const AudioDecoderConfig& value);
};

} // namespace webbind