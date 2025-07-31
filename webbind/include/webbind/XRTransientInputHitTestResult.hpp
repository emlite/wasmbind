#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRInputSource;
class XRHitTestResult;


/// The XRTransientInputHitTestResult class.
/// [`XRTransientInputHitTestResult`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult)
class XRTransientInputHitTestResult : public emlite::Val {
    explicit XRTransientInputHitTestResult(Handle h) noexcept;

public:
    explicit XRTransientInputHitTestResult(const emlite::Val &val) noexcept;
    static XRTransientInputHitTestResult take_ownership(Handle h) noexcept;

    [[nodiscard]] XRTransientInputHitTestResult clone() const noexcept;
    /// Getter of the `inputSource` attribute.
    /// [`XRTransientInputHitTestResult.inputSource`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult/inputSource)
    [[nodiscard]] XRInputSource inputSource() const;
    /// Getter of the `results` attribute.
    /// [`XRTransientInputHitTestResult.results`](https://developer.mozilla.org/en-US/docs/Web/API/XRTransientInputHitTestResult/results)
    [[nodiscard]] jsbind::TypedArray<XRHitTestResult> results() const;
};

