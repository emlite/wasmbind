#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRDepthInformation.hpp"

namespace webbind {

/// Interface XRCPUDepthInformation
/// [`XRCPUDepthInformation`](https://developer.mozilla.org/en-US/docs/Web/API/XRCPUDepthInformation)
class XRCPUDepthInformation : public XRDepthInformation {
    explicit XRCPUDepthInformation(Handle h) noexcept;
public:
    explicit XRCPUDepthInformation(const emlite::Val &val) noexcept;
    static XRCPUDepthInformation take_ownership(Handle h) noexcept;
    [[nodiscard]] XRCPUDepthInformation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `data` attribute.
    /// [`XRCPUDepthInformation.data`](https://developer.mozilla.org/en-US/docs/Web/API/XRCPUDepthInformation/data)
    [[nodiscard]] jsbind::ArrayBuffer data() const;
    /// The getDepthInMeters method.
    /// [`XRCPUDepthInformation.getDepthInMeters`](https://developer.mozilla.org/en-US/docs/Web/API/XRCPUDepthInformation/getDepthInMeters)
    float getDepthInMeters(float x, float y);
};

} // namespace webbind