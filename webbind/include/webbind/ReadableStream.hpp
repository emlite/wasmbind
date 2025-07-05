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
    ReadableStreamGetReaderOptions clone() const noexcept;
    ReadableStreamReaderMode mode() const;
    void mode(const ReadableStreamReaderMode& value);
};

class ReadableWritablePair : public emlite::Val {
  explicit ReadableWritablePair(Handle h) noexcept;
public:
    static ReadableWritablePair take_ownership(Handle h) noexcept;
    explicit ReadableWritablePair(const emlite::Val &val) noexcept;
    ReadableWritablePair() noexcept;
    ReadableWritablePair clone() const noexcept;
    ReadableStream readable() const;
    void readable(const ReadableStream& value);
    WritableStream writable() const;
    void writable(const WritableStream& value);
};

class StreamPipeOptions : public emlite::Val {
  explicit StreamPipeOptions(Handle h) noexcept;
public:
    static StreamPipeOptions take_ownership(Handle h) noexcept;
    explicit StreamPipeOptions(const emlite::Val &val) noexcept;
    StreamPipeOptions() noexcept;
    StreamPipeOptions clone() const noexcept;
    bool preventClose() const;
    void preventClose(bool value);
    bool preventAbort() const;
    void preventAbort(bool value);
    bool preventCancel() const;
    void preventCancel(bool value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class ReadableStream : public emlite::Val {
    explicit ReadableStream(Handle h) noexcept;

public:
    explicit ReadableStream(const emlite::Val &val) noexcept;
    static ReadableStream take_ownership(Handle h) noexcept;

    ReadableStream clone() const noexcept;
    ReadableStream();
    ReadableStream(const jsbind::Object& underlyingSource);
    ReadableStream(const jsbind::Object& underlyingSource, const jsbind::Any& strategy);
    static ReadableStream from(const jsbind::Any& asyncIterable);
    bool locked() const;
    jsbind::Promise cancel();
    jsbind::Promise cancel(const jsbind::Any& reason);
    jsbind::Any getReader();
    jsbind::Any getReader(const ReadableStreamGetReaderOptions& options);
    ReadableStream pipeThrough(const ReadableWritablePair& transform);
    ReadableStream pipeThrough(const ReadableWritablePair& transform, const StreamPipeOptions& options);
    jsbind::Promise pipeTo(const WritableStream& destination);
    jsbind::Promise pipeTo(const WritableStream& destination, const StreamPipeOptions& options);
    jsbind::Sequence<ReadableStream> tee();
};

