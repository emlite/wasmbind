#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class XRSpace;

/// Interface XRLightProbe
/// [`XRLightProbe`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightProbe)
class XRLightProbe : public EventTarget {
    explicit XRLightProbe(Handle h) noexcept;
public:
    explicit XRLightProbe(const emlite::Val &val) noexcept;
    static XRLightProbe take_ownership(Handle h) noexcept;
    [[nodiscard]] XRLightProbe clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `probeSpace` attribute.
    /// [`XRLightProbe.probeSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightProbe/probeSpace)
    [[nodiscard]] XRSpace probeSpace() const;
    /// Getter of the `onreflectionchange` attribute.
    /// [`XRLightProbe.onreflectionchange`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightProbe/onreflectionchange)
    [[nodiscard]] jsbind::Any onreflectionchange() const;
    /// Setter of the `onreflectionchange` attribute.
    /// [`XRLightProbe.onreflectionchange`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightProbe/onreflectionchange)
    void onreflectionchange(const jsbind::Any& value);
};

} // namespace webbind