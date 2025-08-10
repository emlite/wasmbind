#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Interface AbortController
/// [`AbortController`](https://developer.mozilla.org/en-US/docs/Web/API/AbortController)
class AbortController : public emlite::Val {
    explicit AbortController(Handle h) noexcept;
public:
    explicit AbortController(const emlite::Val &val) noexcept;
    static AbortController take_ownership(Handle h) noexcept;
    [[nodiscard]] AbortController clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AbortController(..)` constructor, creating a new AbortController instance
    AbortController();
    /// [`AbortController.signal`](https://developer.mozilla.org/en-US/docs/Web/API/AbortController/signal)
    /// [`AbortController.signal`](https://developer.mozilla.org/en-US/docs/Web/API/AbortController/signal)
    [[nodiscard]] AbortSignal signal() const;
    /// The abort method.
    /// [`AbortController.abort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortController/abort)
    jsbind::Undefined abort();
    /// The abort method.
    /// [`AbortController.abort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortController/abort)
    jsbind::Undefined abort(const jsbind::Any& reason);
};

} // namespace webbind