#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRLayer.hpp"
#include "enums.hpp"


class XRCompositionLayer : public XRLayer {
    explicit XRCompositionLayer(Handle h) noexcept;

public:
    explicit XRCompositionLayer(const emlite::Val &val) noexcept;
    static XRCompositionLayer take_ownership(Handle h) noexcept;

    XRCompositionLayer clone() const noexcept;
    XRLayerLayout layout() const;
    bool blendTextureSourceAlpha() const;
    void blendTextureSourceAlpha(bool value);
    bool forceMonoPresentation() const;
    void forceMonoPresentation(bool value);
    float opacity() const;
    void opacity(float value);
    unsigned long mipLevels() const;
    XRLayerQuality quality() const;
    void quality(const XRLayerQuality& value);
    bool needsRedraw() const;
    jsbind::Undefined destroy();
};

