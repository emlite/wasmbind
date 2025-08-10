#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EncodedVideoChunkInit.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface EncodedVideoChunk
/// [`EncodedVideoChunk`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunk)
class EncodedVideoChunk : public emlite::Val {
    explicit EncodedVideoChunk(Handle h) noexcept;
public:
    explicit EncodedVideoChunk(const emlite::Val &val) noexcept;
    static EncodedVideoChunk take_ownership(Handle h) noexcept;
    [[nodiscard]] EncodedVideoChunk clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new EncodedVideoChunk(..)` constructor, creating a new EncodedVideoChunk instance
    EncodedVideoChunk(const EncodedVideoChunkInit& init);
    /// Getter of the `type` attribute.
    /// [`EncodedVideoChunk.type`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunk/type)
    [[nodiscard]] EncodedVideoChunkType type() const;
    /// Getter of the `timestamp` attribute.
    /// [`EncodedVideoChunk.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunk/timestamp)
    [[nodiscard]] long long timestamp() const;
    /// Getter of the `duration` attribute.
    /// [`EncodedVideoChunk.duration`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunk/duration)
    [[nodiscard]] long long duration() const;
    /// Getter of the `byteLength` attribute.
    /// [`EncodedVideoChunk.byteLength`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunk/byteLength)
    [[nodiscard]] unsigned long byteLength() const;
    /// The copyTo method.
    /// [`EncodedVideoChunk.copyTo`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunk/copyTo)
    jsbind::Undefined copyTo(const jsbind::Any& destination);
};

} // namespace webbind