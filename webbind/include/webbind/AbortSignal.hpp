#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AbortSignal;


/// The AbortSignal class.
/// [`AbortSignal`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal)
class AbortSignal : public EventTarget {
    explicit AbortSignal(Handle h) noexcept;

public:
    explicit AbortSignal(const emlite::Val &val) noexcept;
    static AbortSignal take_ownership(Handle h) noexcept;

    [[nodiscard]] AbortSignal clone() const noexcept;
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
    /// Getter of the `aborted` attribute.
    /// [`AbortSignal.aborted`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/aborted)
    [[nodiscard]] bool aborted() const;
    /// Getter of the `reason` attribute.
    /// [`AbortSignal.reason`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/reason)
    [[nodiscard]] jsbind::Any reason() const;
    /// The throwIfAborted method.
    /// [`AbortSignal.throwIfAborted`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/throwIfAborted)
    jsbind::Undefined throwIfAborted();
    /// Getter of the `onabort` attribute.
    /// [`AbortSignal.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/onabort)
    [[nodiscard]] jsbind::Any onabort() const;
    /// Setter of the `onabort` attribute.
    /// [`AbortSignal.onabort`](https://developer.mozilla.org/en-US/docs/Web/API/AbortSignal/onabort)
    void onabort(const jsbind::Any& value);
};

