#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRLightProbeInit
/// [`XRLightProbeInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRLightProbeInit)
class XRLightProbeInit : public emlite::Val {
  explicit XRLightProbeInit(Handle h) noexcept;
public:
    static XRLightProbeInit take_ownership(Handle h) noexcept;
    explicit XRLightProbeInit(const emlite::Val &val) noexcept;
    XRLightProbeInit() noexcept;
    [[nodiscard]] XRLightProbeInit clone() const noexcept;
    [[nodiscard]] XRReflectionFormat reflectionFormat() const;
    void reflectionFormat(const XRReflectionFormat& value);
};

} // namespace webbind