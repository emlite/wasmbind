#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WakeLockSentinel;


/// The WakeLock class.
/// [`WakeLock`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLock)
class WakeLock : public emlite::Val {
    explicit WakeLock(Handle h) noexcept;

public:
    explicit WakeLock(const emlite::Val &val) noexcept;
    static WakeLock take_ownership(Handle h) noexcept;

    [[nodiscard]] WakeLock clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The request method.
    /// [`WakeLock.request`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLock/request)
    jsbind::Promise<WakeLockSentinel> request();
    /// The request method.
    /// [`WakeLock.request`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLock/request)
    jsbind::Promise<WakeLockSentinel> request(const WakeLockType& type);
};

