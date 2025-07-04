#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class XRSpace;


class XRLightProbe : public EventTarget {
    explicit XRLightProbe(Handle h) noexcept;

public:
    explicit XRLightProbe(const emlite::Val &val) noexcept;
    static XRLightProbe take_ownership(Handle h) noexcept;

    XRLightProbe clone() const noexcept;
    XRSpace probeSpace() const;
    jsbind::Any onreflectionchange() const;
    void onreflectionchange(const jsbind::Any& value);
};

