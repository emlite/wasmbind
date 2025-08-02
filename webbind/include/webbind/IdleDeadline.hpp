#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The IdleDeadline class.
/// [`IdleDeadline`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDeadline)
class IdleDeadline : public emlite::Val {
    explicit IdleDeadline(Handle h) noexcept;

public:
    explicit IdleDeadline(const emlite::Val &val) noexcept;
    static IdleDeadline take_ownership(Handle h) noexcept;

    [[nodiscard]] IdleDeadline clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The timeRemaining method.
    /// [`IdleDeadline.timeRemaining`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDeadline/timeRemaining)
    jsbind::Any timeRemaining();
    /// Getter of the `didTimeout` attribute.
    /// [`IdleDeadline.didTimeout`](https://developer.mozilla.org/en-US/docs/Web/API/IdleDeadline/didTimeout)
    [[nodiscard]] bool didTimeout() const;
};

