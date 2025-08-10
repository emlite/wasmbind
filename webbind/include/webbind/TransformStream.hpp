#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "QueuingStrategy.hpp"

namespace webbind {

class ReadableStream;
class WritableStream;

/// Interface TransformStream
/// [`TransformStream`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream)
class TransformStream : public emlite::Val {
    explicit TransformStream(Handle h) noexcept;
public:
    explicit TransformStream(const emlite::Val &val) noexcept;
    static TransformStream take_ownership(Handle h) noexcept;
    [[nodiscard]] TransformStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TransformStream(..)` constructor, creating a new TransformStream instance
    TransformStream();
    /// The `new TransformStream(..)` constructor, creating a new TransformStream instance
    TransformStream(const jsbind::Object& transformer);
    /// The `new TransformStream(..)` constructor, creating a new TransformStream instance
    TransformStream(const jsbind::Object& transformer, const QueuingStrategy& writableStrategy);
    /// The `new TransformStream(..)` constructor, creating a new TransformStream instance
    TransformStream(const jsbind::Object& transformer, const QueuingStrategy& writableStrategy, const QueuingStrategy& readableStrategy);
    /// [`TransformStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream/readable)
    /// [`TransformStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// [`TransformStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream/writable)
    /// [`TransformStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TransformStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

} // namespace webbind