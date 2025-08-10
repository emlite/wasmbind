#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRLightProbeInit
class XRLightProbeInit : public emlite::Val {
  explicit XRLightProbeInit(Handle h) noexcept;
public:
    static XRLightProbeInit take_ownership(Handle h) noexcept;
    explicit XRLightProbeInit(const emlite::Val &val) noexcept;
    XRLightProbeInit() noexcept;
    [[nodiscard]] XRLightProbeInit clone() const noexcept;
    /// Getter of the `reflectionFormat` attribute.
    [[nodiscard]] XRReflectionFormat reflectionFormat() const;
    /// Setter of the `reflectionFormat` attribute.
    void reflectionFormat(const XRReflectionFormat& value);
};

} // namespace webbind