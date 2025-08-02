#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMPointReadOnly;


/// The XRLightEstimate class.
/// [`XRLightEstimate`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate)
class XRLightEstimate : public emlite::Val {
    explicit XRLightEstimate(Handle h) noexcept;

public:
    explicit XRLightEstimate(const emlite::Val &val) noexcept;
    static XRLightEstimate take_ownership(Handle h) noexcept;

    [[nodiscard]] XRLightEstimate clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `sphericalHarmonicsCoefficients` attribute.
    /// [`XRLightEstimate.sphericalHarmonicsCoefficients`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/sphericalHarmonicsCoefficients)
    [[nodiscard]] jsbind::Float32Array sphericalHarmonicsCoefficients() const;
    /// Getter of the `primaryLightDirection` attribute.
    /// [`XRLightEstimate.primaryLightDirection`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/primaryLightDirection)
    [[nodiscard]] DOMPointReadOnly primaryLightDirection() const;
    /// Getter of the `primaryLightIntensity` attribute.
    /// [`XRLightEstimate.primaryLightIntensity`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/primaryLightIntensity)
    [[nodiscard]] DOMPointReadOnly primaryLightIntensity() const;
};

