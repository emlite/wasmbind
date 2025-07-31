#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The XRHitTestSource class.
/// [`XRHitTestSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestSource)
class XRHitTestSource : public emlite::Val {
    explicit XRHitTestSource(Handle h) noexcept;

public:
    explicit XRHitTestSource(const emlite::Val &val) noexcept;
    static XRHitTestSource take_ownership(Handle h) noexcept;

    [[nodiscard]] XRHitTestSource clone() const noexcept;
    /// The cancel method.
    /// [`XRHitTestSource.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestSource/cancel)
    jsbind::Undefined cancel();
};

