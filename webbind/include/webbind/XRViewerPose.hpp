#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRPose.hpp"
#include "enums.hpp"

class XRView;


class XRViewerPose : public XRPose {
    explicit XRViewerPose(Handle h) noexcept;

public:
    explicit XRViewerPose(const emlite::Val &val) noexcept;
    static XRViewerPose take_ownership(Handle h) noexcept;

    XRViewerPose clone() const noexcept;
    jsbind::FrozenArray<XRView> views() const;
};

