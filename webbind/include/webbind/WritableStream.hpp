#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class QueuingStrategy;
class WritableStreamDefaultWriter;

/// Interface WritableStream
/// [`WritableStream`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStream)
class WritableStream : public emlite::Val {
    explicit WritableStream(Handle h) noexcept;
public:
    explicit WritableStream(const emlite::Val &val) noexcept;
    static WritableStream take_ownership(Handle h) noexcept;
    [[nodiscard]] WritableStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new WritableStream(..)` constructor, creating a new WritableStream instance
    WritableStream();
    /// The `new WritableStream(..)` constructor, creating a new WritableStream instance
    WritableStream(const jsbind::Object& underlyingSink);
    /// The `new WritableStream(..)` constructor, creating a new WritableStream instance
    WritableStream(const jsbind::Object& underlyingSink, const QueuingStrategy& strategy);
    /// [`WritableStream.locked`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStream/locked)
    /// [`WritableStream.locked`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStream/locked)
    [[nodiscard]] bool locked() const;
    /// The abort method.
    /// [`WritableStream.abort`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStream/abort)
    jsbind::Promise<jsbind::Undefined> abort();
    /// The abort method.
    /// [`WritableStream.abort`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStream/abort)
    jsbind::Promise<jsbind::Undefined> abort(const jsbind::Any& reason);
    /// The close method.
    /// [`WritableStream.close`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStream/close)
    jsbind::Promise<jsbind::Undefined> close();
    /// The getWriter method.
    /// [`WritableStream.getWriter`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStream/getWriter)
    WritableStreamDefaultWriter getWriter();
};

} // namespace webbind