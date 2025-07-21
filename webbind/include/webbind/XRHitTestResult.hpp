#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRPose;
class XRSpace;
class XRAnchor;


class XRHitTestResult : public emlite::Val {
    explicit XRHitTestResult(Handle h) noexcept;

public:
    explicit XRHitTestResult(const emlite::Val &val) noexcept;
    static XRHitTestResult take_ownership(Handle h) noexcept;

    XRHitTestResult clone() const noexcept;
    XRPose getPose(const XRSpace& baseSpace);
    jsbind::Promise<XRAnchor> createAnchor();
};

