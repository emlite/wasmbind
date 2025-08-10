#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class QueuingStrategy;
class ReadableStream;
class ReadableStreamGetReaderOptions;
class ReadableWritablePair;
class StreamPipeOptions;
class WritableStream;

/// Interface ReadableStream
/// [`ReadableStream`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream)
class ReadableStream : public emlite::Val {
    explicit ReadableStream(Handle h) noexcept;
public:
    explicit ReadableStream(const emlite::Val &val) noexcept;
    static ReadableStream take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadableStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ReadableStream(..)` constructor, creating a new ReadableStream instance
    ReadableStream();
    /// The `new ReadableStream(..)` constructor, creating a new ReadableStream instance
    ReadableStream(const jsbind::Object& underlyingSource);
    /// The `new ReadableStream(..)` constructor, creating a new ReadableStream instance
    ReadableStream(const jsbind::Object& underlyingSource, const QueuingStrategy& strategy);
    /// The from method.
    /// [`ReadableStream.from`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/from)
    static ReadableStream from(const jsbind::Any& asyncIterable);
    /// [`ReadableStream.locked`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/locked)
    /// [`ReadableStream.locked`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/locked)
    [[nodiscard]] bool locked() const;
    /// The cancel method.
    /// [`ReadableStream.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/cancel)
    jsbind::Promise<jsbind::Undefined> cancel();
    /// The cancel method.
    /// [`ReadableStream.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/cancel)
    jsbind::Promise<jsbind::Undefined> cancel(const jsbind::Any& reason);
    /// The getReader method.
    /// [`ReadableStream.getReader`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/getReader)
    jsbind::Any getReader();
    /// The getReader method.
    /// [`ReadableStream.getReader`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/getReader)
    jsbind::Any getReader(const ReadableStreamGetReaderOptions& options);
    /// The pipeThrough method.
    /// [`ReadableStream.pipeThrough`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/pipeThrough)
    ReadableStream pipeThrough(const ReadableWritablePair& transform);
    /// The pipeThrough method.
    /// [`ReadableStream.pipeThrough`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/pipeThrough)
    ReadableStream pipeThrough(const ReadableWritablePair& transform, const StreamPipeOptions& options);
    /// The pipeTo method.
    /// [`ReadableStream.pipeTo`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/pipeTo)
    jsbind::Promise<jsbind::Undefined> pipeTo(const WritableStream& destination);
    /// The pipeTo method.
    /// [`ReadableStream.pipeTo`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/pipeTo)
    jsbind::Promise<jsbind::Undefined> pipeTo(const WritableStream& destination, const StreamPipeOptions& options);
    /// The tee method.
    /// [`ReadableStream.tee`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/tee)
    jsbind::TypedArray<ReadableStream> tee();
};

} // namespace webbind