#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRPose.hpp"

namespace webbind {

class XRView;

/// Interface XRViewerPose
/// [`XRViewerPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewerPose)
class XRViewerPose : public XRPose {
    explicit XRViewerPose(Handle h) noexcept;
public:
    explicit XRViewerPose(const emlite::Val &val) noexcept;
    static XRViewerPose take_ownership(Handle h) noexcept;
    [[nodiscard]] XRViewerPose clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `views` attribute.
    /// [`XRViewerPose.views`](https://developer.mozilla.org/en-US/docs/Web/API/XRViewerPose/views)
    [[nodiscard]] jsbind::TypedArray<XRView> views() const;
};

} // namespace webbind