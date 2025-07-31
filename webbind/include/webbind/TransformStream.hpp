#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


/// The TransformStream class.
/// [`TransformStream`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream)
class TransformStream : public emlite::Val {
    explicit TransformStream(Handle h) noexcept;

public:
    explicit TransformStream(const emlite::Val &val) noexcept;
    static TransformStream take_ownership(Handle h) noexcept;

    [[nodiscard]] TransformStream clone() const noexcept;
    /// The `new TransformStream(..)` constructor, creating a new TransformStream instance
    TransformStream();
    /// The `new TransformStream(..)` constructor, creating a new TransformStream instance
    TransformStream(const jsbind::Object& transformer);
    /// The `new TransformStream(..)` constructor, creating a new TransformStream instance
    TransformStream(const jsbind::Object& transformer, const jsbind::Any& writableStrategy);
    /// The `new TransformStream(..)` constructor, creating a new TransformStream instance
    TransformStream(const jsbind::Object& transformer, const jsbind::Any& writableStrategy, const jsbind::Any& readableStrategy);
    /// Getter of the `readable` attribute.
    /// [`TransformStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// Getter of the `writable` attribute.
    /// [`TransformStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

