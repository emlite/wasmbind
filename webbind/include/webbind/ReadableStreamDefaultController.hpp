#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ReadableStreamDefaultController
/// [`ReadableStreamDefaultController`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultController)
class ReadableStreamDefaultController : public emlite::Val {
    explicit ReadableStreamDefaultController(Handle h) noexcept;
public:
    explicit ReadableStreamDefaultController(const emlite::Val &val) noexcept;
    static ReadableStreamDefaultController take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadableStreamDefaultController clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `desiredSize` attribute.
    /// [`ReadableStreamDefaultController.desiredSize`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultController/desiredSize)
    [[nodiscard]] double desiredSize() const;
    /// The close method.
    /// [`ReadableStreamDefaultController.close`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultController/close)
    jsbind::Undefined close();
    /// The enqueue method.
    /// [`ReadableStreamDefaultController.enqueue`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultController/enqueue)
    jsbind::Undefined enqueue();
    /// The enqueue method.
    /// [`ReadableStreamDefaultController.enqueue`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultController/enqueue)
    jsbind::Undefined enqueue(const jsbind::Any& chunk);
    /// The error method.
    /// [`ReadableStreamDefaultController.error`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultController/error)
    jsbind::Undefined error();
    /// The error method.
    /// [`ReadableStreamDefaultController.error`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamDefaultController/error)
    jsbind::Undefined error(const jsbind::Any& e);
};

} // namespace webbind