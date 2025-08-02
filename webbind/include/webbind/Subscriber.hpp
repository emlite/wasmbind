#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AbortSignal;


/// The Subscriber class.
/// [`Subscriber`](https://developer.mozilla.org/en-US/docs/Web/API/Subscriber)
class Subscriber : public emlite::Val {
    explicit Subscriber(Handle h) noexcept;

public:
    explicit Subscriber(const emlite::Val &val) noexcept;
    static Subscriber take_ownership(Handle h) noexcept;

    [[nodiscard]] Subscriber clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The next method.
    /// [`Subscriber.next`](https://developer.mozilla.org/en-US/docs/Web/API/Subscriber/next)
    jsbind::Undefined next(const jsbind::Any& value);
    /// The error method.
    /// [`Subscriber.error`](https://developer.mozilla.org/en-US/docs/Web/API/Subscriber/error)
    jsbind::Undefined error(const jsbind::Any& error);
    /// The complete method.
    /// [`Subscriber.complete`](https://developer.mozilla.org/en-US/docs/Web/API/Subscriber/complete)
    jsbind::Undefined complete();
    /// The addTeardown method.
    /// [`Subscriber.addTeardown`](https://developer.mozilla.org/en-US/docs/Web/API/Subscriber/addTeardown)
    jsbind::Undefined addTeardown(const jsbind::Any& teardown);
    /// Getter of the `active` attribute.
    /// [`Subscriber.active`](https://developer.mozilla.org/en-US/docs/Web/API/Subscriber/active)
    [[nodiscard]] bool active() const;
    /// Getter of the `signal` attribute.
    /// [`Subscriber.signal`](https://developer.mozilla.org/en-US/docs/Web/API/Subscriber/signal)
    [[nodiscard]] AbortSignal signal() const;
};

