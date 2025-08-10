#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EncodedAudioChunkInit.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface EncodedAudioChunk
/// [`EncodedAudioChunk`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk)
class EncodedAudioChunk : public emlite::Val {
    explicit EncodedAudioChunk(Handle h) noexcept;
public:
    explicit EncodedAudioChunk(const emlite::Val &val) noexcept;
    static EncodedAudioChunk take_ownership(Handle h) noexcept;
    [[nodiscard]] EncodedAudioChunk clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new EncodedAudioChunk(..)` constructor, creating a new EncodedAudioChunk instance
    EncodedAudioChunk(const EncodedAudioChunkInit& init);
    /// Getter of the `type` attribute.
    /// [`EncodedAudioChunk.type`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/type)
    [[nodiscard]] EncodedAudioChunkType type() const;
    /// Getter of the `timestamp` attribute.
    /// [`EncodedAudioChunk.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/timestamp)
    [[nodiscard]] long long timestamp() const;
    /// Getter of the `duration` attribute.
    /// [`EncodedAudioChunk.duration`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/duration)
    [[nodiscard]] long long duration() const;
    /// Getter of the `byteLength` attribute.
    /// [`EncodedAudioChunk.byteLength`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/byteLength)
    [[nodiscard]] unsigned long byteLength() const;
    /// The copyTo method.
    /// [`EncodedAudioChunk.copyTo`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/copyTo)
    jsbind::Undefined copyTo(const jsbind::Any& destination);
};

} // namespace webbind