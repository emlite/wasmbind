#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRPose.hpp"
#include "enums.hpp"

class XRView;


/// The XRViewerPose class.
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

