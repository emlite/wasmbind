#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRJointSpace;


/// The XRHand class.
/// [`XRHand`](https://developer.mozilla.org/en-US/docs/Web/API/XRHand)
class XRHand : public emlite::Val {
    explicit XRHand(Handle h) noexcept;

public:
    explicit XRHand(const emlite::Val &val) noexcept;
    static XRHand take_ownership(Handle h) noexcept;

    [[nodiscard]] XRHand clone() const noexcept;
    /// Getter of the `size` attribute.
    /// [`XRHand.size`](https://developer.mozilla.org/en-US/docs/Web/API/XRHand/size)
    [[nodiscard]] unsigned long size() const;
    /// The get method.
    /// [`XRHand.get`](https://developer.mozilla.org/en-US/docs/Web/API/XRHand/get)
    XRJointSpace get(const XRHandJoint& key);
};

