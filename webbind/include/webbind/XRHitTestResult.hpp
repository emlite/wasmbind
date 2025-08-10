#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRPose;
class XRSpace;
class XRAnchor;

/// Interface XRHitTestResult
/// [`XRHitTestResult`](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestResult)
class XRHitTestResult : public emlite::Val {
    explicit XRHitTestResult(Handle h) noexcept;
public:
    explicit XRHitTestResult(const emlite::Val &val) noexcept;
    static XRHitTestResult take_ownership(Handle h) noexcept;
    [[nodiscard]] XRHitTestResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getPose method.
    /// [`XRHitTestResult.getPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestResult/getPose)
    XRPose getPose(const XRSpace& baseSpace);
    /// The createAnchor method.
    /// [`XRHitTestResult.createAnchor`](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestResult/createAnchor)
    jsbind::Promise<XRAnchor> createAnchor();
};

} // namespace webbind