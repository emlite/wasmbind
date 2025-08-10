#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ReadableStreamBYOBRequest;

/// Interface ReadableByteStreamController
/// [`ReadableByteStreamController`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController)
class ReadableByteStreamController : public emlite::Val {
    explicit ReadableByteStreamController(Handle h) noexcept;
public:
    explicit ReadableByteStreamController(const emlite::Val &val) noexcept;
    static ReadableByteStreamController take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadableByteStreamController clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ReadableByteStreamController.byobRequest`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController/byobRequest)
    /// [`ReadableByteStreamController.byobRequest`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController/byobRequest)
    [[nodiscard]] ReadableStreamBYOBRequest byobRequest() const;
    /// [`ReadableByteStreamController.desiredSize`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController/desiredSize)
    /// [`ReadableByteStreamController.desiredSize`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController/desiredSize)
    [[nodiscard]] double desiredSize() const;
    /// The close method.
    /// [`ReadableByteStreamController.close`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController/close)
    jsbind::Undefined close();
    /// The enqueue method.
    /// [`ReadableByteStreamController.enqueue`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController/enqueue)
    jsbind::Undefined enqueue(const jsbind::Any& chunk);
    /// The error method.
    /// [`ReadableByteStreamController.error`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController/error)
    jsbind::Undefined error();
    /// The error method.
    /// [`ReadableByteStreamController.error`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableByteStreamController/error)
    jsbind::Undefined error(const jsbind::Any& e);
};

} // namespace webbind