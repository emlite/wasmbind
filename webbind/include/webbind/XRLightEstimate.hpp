#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMPointReadOnly;

/// Interface XRLightEstimate
/// [`XRLightEstimate`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate)
class XRLightEstimate : public emlite::Val {
    explicit XRLightEstimate(Handle h) noexcept;
public:
    explicit XRLightEstimate(const emlite::Val &val) noexcept;
    static XRLightEstimate take_ownership(Handle h) noexcept;
    [[nodiscard]] XRLightEstimate clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRLightEstimate.sphericalHarmonicsCoefficients`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/sphericalHarmonicsCoefficients)
    /// [`XRLightEstimate.sphericalHarmonicsCoefficients`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/sphericalHarmonicsCoefficients)
    [[nodiscard]] jsbind::Float32Array sphericalHarmonicsCoefficients() const;
    /// [`XRLightEstimate.primaryLightDirection`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/primaryLightDirection)
    /// [`XRLightEstimate.primaryLightDirection`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/primaryLightDirection)
    [[nodiscard]] DOMPointReadOnly primaryLightDirection() const;
    /// [`XRLightEstimate.primaryLightIntensity`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/primaryLightIntensity)
    /// [`XRLightEstimate.primaryLightIntensity`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightEstimate/primaryLightIntensity)
    [[nodiscard]] DOMPointReadOnly primaryLightIntensity() const;
};

} // namespace webbind