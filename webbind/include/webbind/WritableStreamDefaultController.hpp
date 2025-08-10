#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Interface WritableStreamDefaultController
/// [`WritableStreamDefaultController`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultController)
class WritableStreamDefaultController : public emlite::Val {
    explicit WritableStreamDefaultController(Handle h) noexcept;
public:
    explicit WritableStreamDefaultController(const emlite::Val &val) noexcept;
    static WritableStreamDefaultController take_ownership(Handle h) noexcept;
    [[nodiscard]] WritableStreamDefaultController clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `signal` attribute.
    /// [`WritableStreamDefaultController.signal`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultController/signal)
    [[nodiscard]] AbortSignal signal() const;
    /// The error method.
    /// [`WritableStreamDefaultController.error`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultController/error)
    jsbind::Undefined error();
    /// The error method.
    /// [`WritableStreamDefaultController.error`](https://developer.mozilla.org/en-US/docs/Web/API/WritableStreamDefaultController/error)
    jsbind::Undefined error(const jsbind::Any& e);
};

} // namespace webbind