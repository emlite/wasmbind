#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRDepthInformation.hpp"
#include "enums.hpp"


class XRCPUDepthInformation : public XRDepthInformation {
    explicit XRCPUDepthInformation(Handle h) noexcept;

public:
    explicit XRCPUDepthInformation(const emlite::Val &val) noexcept;
    static XRCPUDepthInformation take_ownership(Handle h) noexcept;

    XRCPUDepthInformation clone() const noexcept;
    jsbind::ArrayBuffer data() const;
    float getDepthInMeters(float x, float y);
};

