#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class VideoDecoderConfig;
class SvcOutputMetadata;

/// Dictionary type EncodedVideoChunkMetadata
class EncodedVideoChunkMetadata : public emlite::Val {
  explicit EncodedVideoChunkMetadata(Handle h) noexcept;
public:
    static EncodedVideoChunkMetadata take_ownership(Handle h) noexcept;
    explicit EncodedVideoChunkMetadata(const emlite::Val &val) noexcept;
    EncodedVideoChunkMetadata() noexcept;
    [[nodiscard]] EncodedVideoChunkMetadata clone() const noexcept;
    /// Getter of the `decoderConfig` attribute.
    [[nodiscard]] VideoDecoderConfig decoderConfig() const;
    /// Setter of the `decoderConfig` attribute.
    void decoderConfig(const VideoDecoderConfig& value);
    /// Getter of the `svc` attribute.
    [[nodiscard]] SvcOutputMetadata svc() const;
    /// Setter of the `svc` attribute.
    void svc(const SvcOutputMetadata& value);
    /// Getter of the `alphaSideData` attribute.
    [[nodiscard]] jsbind::Any alphaSideData() const;
    /// Setter of the `alphaSideData` attribute.
    void alphaSideData(const jsbind::Any& value);
};

} // namespace webbind