#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ReadableStreamDefaultReader.hpp"
#include "enums.hpp"

class ReadableStreamBYOBReaderReadOptions;


class ReadableStreamBYOBReaderReadOptions : public emlite::Val {
  explicit ReadableStreamBYOBReaderReadOptions(Handle h) noexcept;
public:
    static ReadableStreamBYOBReaderReadOptions take_ownership(Handle h) noexcept;
    explicit ReadableStreamBYOBReaderReadOptions(const emlite::Val &val) noexcept;
    ReadableStreamBYOBReaderReadOptions() noexcept;
    [[nodiscard]] ReadableStreamBYOBReaderReadOptions clone() const noexcept;
    [[nodiscard]] long long min() const;
    void min(long long value);
};

/// The ReadableStreamBYOBReader class.
/// [`ReadableStreamBYOBReader`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReader)
class ReadableStreamBYOBReader : public emlite::Val {
    explicit ReadableStreamBYOBReader(Handle h) noexcept;

public:
    explicit ReadableStreamBYOBReader(const emlite::Val &val) noexcept;
    static ReadableStreamBYOBReader take_ownership(Handle h) noexcept;

    [[nodiscard]] ReadableStreamBYOBReader clone() const noexcept;
    /// The `new ReadableStreamBYOBReader(..)` constructor, creating a new ReadableStreamBYOBReader instance
    ReadableStreamBYOBReader(const ReadableStream& stream);
    /// The read method.
    /// [`ReadableStreamBYOBReader.read`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReader/read)
    jsbind::Promise<ReadableStreamReadResult> read(const jsbind::Any& view);
    /// The read method.
    /// [`ReadableStreamBYOBReader.read`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReader/read)
    jsbind::Promise<ReadableStreamReadResult> read(const jsbind::Any& view, const ReadableStreamBYOBReaderReadOptions& options);
    /// The releaseLock method.
    /// [`ReadableStreamBYOBReader.releaseLock`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReader/releaseLock)
    jsbind::Undefined releaseLock();
    /// Getter of the `closed` attribute.
    /// [`ReadableStreamBYOBReader.closed`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReader/closed)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> closed() const;
    /// The cancel method.
    /// [`ReadableStreamBYOBReader.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReader/cancel)
    jsbind::Promise<jsbind::Undefined> cancel();
    /// The cancel method.
    /// [`ReadableStreamBYOBReader.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBReader/cancel)
    jsbind::Promise<jsbind::Undefined> cancel(const jsbind::Any& reason);
};

