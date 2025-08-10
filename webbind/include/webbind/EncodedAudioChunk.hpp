#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class EncodedAudioChunkInit;

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
    /// [`EncodedAudioChunk.type`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/type)
    /// [`EncodedAudioChunk.type`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/type)
    [[nodiscard]] EncodedAudioChunkType type() const;
    /// [`EncodedAudioChunk.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/timestamp)
    /// [`EncodedAudioChunk.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/timestamp)
    [[nodiscard]] long long timestamp() const;
    /// [`EncodedAudioChunk.duration`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/duration)
    /// [`EncodedAudioChunk.duration`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/duration)
    [[nodiscard]] long long duration() const;
    /// [`EncodedAudioChunk.byteLength`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/byteLength)
    /// [`EncodedAudioChunk.byteLength`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/byteLength)
    [[nodiscard]] unsigned long byteLength() const;
    /// The copyTo method.
    /// [`EncodedAudioChunk.copyTo`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunk/copyTo)
    jsbind::Undefined copyTo(const jsbind::Any& destination);
};

} // namespace webbind