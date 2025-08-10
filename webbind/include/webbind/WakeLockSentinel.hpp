#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface WakeLockSentinel
/// [`WakeLockSentinel`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel)
class WakeLockSentinel : public EventTarget {
    explicit WakeLockSentinel(Handle h) noexcept;
public:
    explicit WakeLockSentinel(const emlite::Val &val) noexcept;
    static WakeLockSentinel take_ownership(Handle h) noexcept;
    [[nodiscard]] WakeLockSentinel clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`WakeLockSentinel.released`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel/released)
    /// [`WakeLockSentinel.released`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel/released)
    [[nodiscard]] bool released() const;
    /// [`WakeLockSentinel.type`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel/type)
    /// [`WakeLockSentinel.type`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel/type)
    [[nodiscard]] WakeLockType type() const;
    /// The release method.
    /// [`WakeLockSentinel.release`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel/release)
    jsbind::Promise<jsbind::Undefined> release();
    /// [`WakeLockSentinel.onrelease`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel/onrelease)
    /// [`WakeLockSentinel.onrelease`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel/onrelease)
    [[nodiscard]] jsbind::Any onrelease() const;
    /// Setter of the `onrelease` attribute.
    /// [`WakeLockSentinel.onrelease`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockSentinel/onrelease)
    void onrelease(const jsbind::Any& value);
};

} // namespace webbind