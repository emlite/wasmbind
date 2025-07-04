#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRJointSpace;


class XRHand : public emlite::Val {
    explicit XRHand(Handle h) noexcept;

public:
    explicit XRHand(const emlite::Val &val) noexcept;
    static XRHand take_ownership(Handle h) noexcept;

    XRHand clone() const noexcept;
    unsigned long size() const;
    XRJointSpace get(const XRHandJoint& key);
};

