#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRInputSource;
class XRHitTestResult;

/// Interface XRTransientInputHitTestResult
/// [`XRTransientInputHitTestResult`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult)
class XRTransientInputHitTestResult : public emlite::Val {
    explicit XRTransientInputHitTestResult(Handle h) noexcept;
public:
    explicit XRTransientInputHitTestResult(const emlite::Val &val) noexcept;
    static XRTransientInputHitTestResult take_ownership(Handle h) noexcept;
    [[nodiscard]] XRTransientInputHitTestResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRTransientInputHitTestResult.inputSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult/inputSource)
    /// [`XRTransientInputHitTestResult.inputSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult/inputSource)
    [[nodiscard]] XRInputSource inputSource() const;
    /// [`XRTransientInputHitTestResult.results`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult/results)
    /// [`XRTransientInputHitTestResult.results`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult/results)
    [[nodiscard]] jsbind::TypedArray<XRHitTestResult> results() const;
};

} // namespace webbind