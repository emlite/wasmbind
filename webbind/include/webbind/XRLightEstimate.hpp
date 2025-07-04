#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMPointReadOnly;


class XRLightEstimate : public emlite::Val {
    explicit XRLightEstimate(Handle h) noexcept;

public:
    explicit XRLightEstimate(const emlite::Val &val) noexcept;
    static XRLightEstimate take_ownership(Handle h) noexcept;

    XRLightEstimate clone() const noexcept;
    jsbind::Float32Array sphericalHarmonicsCoefficients() const;
    DOMPointReadOnly primaryLightDirection() const;
    DOMPointReadOnly primaryLightIntensity() const;
};

