#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRInputSource;
class XRHitTestResult;


class XRTransientInputHitTestResult : public emlite::Val {
    explicit XRTransientInputHitTestResult(Handle h) noexcept;

public:
    explicit XRTransientInputHitTestResult(const emlite::Val &val) noexcept;
    static XRTransientInputHitTestResult take_ownership(Handle h) noexcept;

    XRTransientInputHitTestResult clone() const noexcept;
    XRInputSource inputSource() const;
    jsbind::TypedArray<XRHitTestResult> results() const;
};

