#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WritableStream;


/// The WritableStreamDefaultWriter class.
/// [`WritableStreamDefaultWriter`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter)
class WritableStreamDefaultWriter : public emlite::Val {
    explicit WritableStreamDefaultWriter(Handle h) noexcept;

public:
    explicit WritableStreamDefaultWriter(const emlite::Val &val) noexcept;
    static WritableStreamDefaultWriter take_ownership(Handle h) noexcept;

    [[nodiscard]] WritableStreamDefaultWriter clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new WritableStreamDefaultWriter(..)` constructor, creating a new WritableStreamDefaultWriter instance
    WritableStreamDefaultWriter(const WritableStream& stream);
    /// Getter of the `closed` attribute.
    /// [`WritableStreamDefaultWriter.closed`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/closed)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> closed() const;
    /// Getter of the `desiredSize` attribute.
    /// [`WritableStreamDefaultWriter.desiredSize`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/desiredSize)
    [[nodiscard]] double desiredSize() const;
    /// Getter of the `ready` attribute.
    /// [`WritableStreamDefaultWriter.ready`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/ready)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> ready() const;
    /// The abort method.
    /// [`WritableStreamDefaultWriter.abort`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/abort)
    jsbind::Promise<jsbind::Undefined> abort();
    /// The abort method.
    /// [`WritableStreamDefaultWriter.abort`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/abort)
    jsbind::Promise<jsbind::Undefined> abort(const jsbind::Any& reason);
    /// The close method.
    /// [`WritableStreamDefaultWriter.close`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/close)
    jsbind::Promise<jsbind::Undefined> close();
    /// The releaseLock method.
    /// [`WritableStreamDefaultWriter.releaseLock`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/releaseLock)
    jsbind::Undefined releaseLock();
    /// The write method.
    /// [`WritableStreamDefaultWriter.write`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/write)
    jsbind::Promise<jsbind::Undefined> write();
    /// The write method.
    /// [`WritableStreamDefaultWriter.write`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultWriter/write)
    jsbind::Promise<jsbind::Undefined> write(const jsbind::Any& chunk);
};

