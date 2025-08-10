#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoDecoderConfig.hpp"
#include "SvcOutputMetadata.hpp"

namespace webbind {

/// Dictionary type EncodedVideoChunkMetadata
/// [`EncodedVideoChunkMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunkMetadata)
class EncodedVideoChunkMetadata : public emlite::Val {
  explicit EncodedVideoChunkMetadata(Handle h) noexcept;
public:
    static EncodedVideoChunkMetadata take_ownership(Handle h) noexcept;
    explicit EncodedVideoChunkMetadata(const emlite::Val &val) noexcept;
    EncodedVideoChunkMetadata() noexcept;
    [[nodiscard]] EncodedVideoChunkMetadata clone() const noexcept;
    [[nodiscard]] VideoDecoderConfig decoderConfig() const;
    void decoderConfig(const VideoDecoderConfig& value);
    [[nodiscard]] SvcOutputMetadata svc() const;
    void svc(const SvcOutputMetadata& value);
    [[nodiscard]] jsbind::Any alphaSideData() const;
    void alphaSideData(const jsbind::Any& value);
};

} // namespace webbind