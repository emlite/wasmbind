#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class ReadableStreamGetReaderOptions;
class ReadableWritablePair;
class StreamPipeOptions;
class WritableStream;
class AbortSignal;


class ReadableStreamGetReaderOptions : public emlite::Val {
  explicit ReadableStreamGetReaderOptions(Handle h) noexcept;
public:
    static ReadableStreamGetReaderOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamGetReaderOptions(const emlite::Val &val) noexcept;
    ReadableStreamGetReaderOptions() noexcept;
    [[nodiscard]] ReadableStreamGetReaderOptions clone() const noexcept;
    [[nodiscard]] ReadableStreamReaderMode mode() const;
    void mode(const ReadableStreamReaderMode& value);
};

class ReadableWritablePair : public emlite::Val {
  explicit ReadableWritablePair(Handle h) noexcept;
public:
    static ReadableWritablePair take_ownership(Handle h) noexcept;
    explicit ReadableWritablePair(const emlite::Val &val) noexcept;
    ReadableWritablePair() noexcept;
    [[nodiscard]] ReadableWritablePair clone() const noexcept;
    [[nodiscard]] ReadableStream readable() const;
    void readable(const ReadableStream& value);
    [[nodiscard]] WritableStream writable() const;
    void writable(const WritableStream& value);
};

class StreamPipeOptions : public emlite::Val {
  explicit StreamPipeOptions(Handle h) noexcept;
public:
    static StreamPipeOptions take_ownership(Handle h) noexcept;
    explicit StreamPipeOptions(const emlite::Val &val) noexcept;
    StreamPipeOptions() noexcept;
    [[nodiscard]] StreamPipeOptions clone() const noexcept;
    [[nodiscard]] bool preventClose() const;
    void preventClose(bool value);
    [[nodiscard]] bool preventAbort() const;
    void preventAbort(bool value);
    [[nodiscard]] bool preventCancel() const;
    void preventCancel(bool value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The ReadableStream class.
/// [`ReadableStream`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream)
class ReadableStream : public emlite::Val {
    explicit ReadableStream(Handle h) noexcept;

public:
    explicit ReadableStream(const emlite::Val &val) noexcept;
    static ReadableStream take_ownership(Handle h) noexcept;

    [[nodiscard]] ReadableStream clone() const noexcept;
    /// The `new ReadableStream(..)` constructor, creating a new ReadableStream instance
    ReadableStream();
    /// The `new ReadableStream(..)` constructor, creating a new ReadableStream instance
    ReadableStream(const jsbind::Object& underlyingSource);
    /// The `new ReadableStream(..)` constructor, creating a new ReadableStream instance
    ReadableStream(const jsbind::Object& underlyingSource, const jsbind::Any& strategy);
    /// The from method.
    /// [`ReadableStream.from`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStream/from)
    static ReadableStream from(const jsbind::Any& asyncIterable);
    /// Getter of the `locked` attribute.
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

