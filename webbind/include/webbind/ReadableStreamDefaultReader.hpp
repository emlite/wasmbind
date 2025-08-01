#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStreamReadResult;


class ReadableStreamReadResult : public emlite::Val {
  explicit ReadableStreamReadResult(Handle h) noexcept;
public:
    static ReadableStreamReadResult take_ownership(Handle h) noexcept;
    explicit ReadableStreamReadResult(const emlite::Val &val) noexcept;
    ReadableStreamReadResult() noexcept;
    [[nodiscard]] ReadableStreamReadResult clone() const noexcept;
    [[nodiscard]] jsbind::Any value() const;
    void value(const jsbind::Any& value);
    [[nodiscard]] bool done() const;
    void done(bool value);
};

/// The ReadableStreamDefaultReader class.
/// [`ReadableStreamDefaultReader`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultReader)
class ReadableStreamDefaultReader : public emlite::Val {
    explicit ReadableStreamDefaultReader(Handle h) noexcept;

public:
    explicit ReadableStreamDefaultReader(const emlite::Val &val) noexcept;
    static ReadableStreamDefaultReader take_ownership(Handle h) noexcept;

    [[nodiscard]] ReadableStreamDefaultReader clone() const noexcept;
    /// The `new ReadableStreamDefaultReader(..)` constructor, creating a new ReadableStreamDefaultReader instance
    ReadableStreamDefaultReader(const ReadableStream& stream);
    /// The read method.
    /// [`ReadableStreamDefaultReader.read`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultReader/read)
    jsbind::Promise<ReadableStreamReadResult> read();
    /// The releaseLock method.
    /// [`ReadableStreamDefaultReader.releaseLock`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultReader/releaseLock)
    jsbind::Undefined releaseLock();
    /// Getter of the `closed` attribute.
    /// [`ReadableStreamDefaultReader.closed`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultReader/closed)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> closed() const;
    /// The cancel method.
    /// [`ReadableStreamDefaultReader.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultReader/cancel)
    jsbind::Promise<jsbind::Undefined> cancel();
    /// The cancel method.
    /// [`ReadableStreamDefaultReader.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultReader/cancel)
    jsbind::Promise<jsbind::Undefined> cancel(const jsbind::Any& reason);
};

