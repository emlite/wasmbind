#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class AbortSignal;

/// Interface AbortSignal
/// [`AbortSignal`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal)
class AbortSignal : public EventTarget {
    explicit AbortSignal(Handle h) noexcept;
public:
    explicit AbortSignal(const emlite::Val &val) noexcept;
    static AbortSignal take_ownership(Handle h) noexcept;
    [[nodiscard]] AbortSignal clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The abort method.
    /// [`AbortSignal.abort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/abort)
    static AbortSignal abort();
    /// The abort method.
    /// [`AbortSignal.abort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/abort)
    static AbortSignal abort(const jsbind::Any& reason);
    /// The timeout method.
    /// [`AbortSignal.timeout`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/timeout)
    static AbortSignal timeout(long long milliseconds);
    /// The any method.
    /// [`AbortSignal.any`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/any)
    static AbortSignal any(const jsbind::TypedArray<AbortSignal>& signals);
    /// [`AbortSignal.aborted`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/aborted)
    /// [`AbortSignal.aborted`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/aborted)
    [[nodiscard]] bool aborted() const;
    /// [`AbortSignal.reason`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/reason)
    /// [`AbortSignal.reason`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/reason)
    [[nodiscard]] jsbind::Any reason() const;
    /// The throwIfAborted method.
    /// [`AbortSignal.throwIfAborted`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/throwIfAborted)
    jsbind::Undefined throwIfAborted();
    /// [`AbortSignal.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/onabort)
    /// [`AbortSignal.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`AbortSignal.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/onabort)
    void onabort(const jsbind::Any& value);
};

} // namespace webbind