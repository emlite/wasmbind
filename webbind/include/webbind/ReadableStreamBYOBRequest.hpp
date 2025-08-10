#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ReadableStreamBYOBRequest
/// [`ReadableStreamBYOBRequest`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBRequest)
class ReadableStreamBYOBRequest : public emlite::Val {
    explicit ReadableStreamBYOBRequest(Handle h) noexcept;
public:
    explicit ReadableStreamBYOBRequest(const emlite::Val &val) noexcept;
    static ReadableStreamBYOBRequest take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadableStreamBYOBRequest clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ReadableStreamBYOBRequest.view`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBRequest/view)
    /// [`ReadableStreamBYOBRequest.view`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBRequest/view)
    [[nodiscard]] jsbind::Any view() const;
    /// The respond method.
    /// [`ReadableStreamBYOBRequest.respond`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBRequest/respond)
    jsbind::Undefined respond(long long bytesWritten);
    /// The respondWithNewView method.
    /// [`ReadableStreamBYOBRequest.respondWithNewView`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBRequest/respondWithNewView)
    jsbind::Undefined respondWithNewView(const jsbind::Any& view);
};

} // namespace webbind