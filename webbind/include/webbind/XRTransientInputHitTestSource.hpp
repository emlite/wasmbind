#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The XRTransientInputHitTestSource class.
/// [`XRTransientInputHitTestSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestSource)
class XRTransientInputHitTestSource : public emlite::Val {
    explicit XRTransientInputHitTestSource(Handle h) noexcept;

public:
    explicit XRTransientInputHitTestSource(const emlite::Val &val) noexcept;
    static XRTransientInputHitTestSource take_ownership(Handle h) noexcept;

    [[nodiscard]] XRTransientInputHitTestSource clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The cancel method.
    /// [`XRTransientInputHitTestSource.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestSource/cancel)
    jsbind::Undefined cancel();
};

