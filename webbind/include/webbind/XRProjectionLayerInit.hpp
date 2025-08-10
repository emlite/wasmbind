#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRProjectionLayerInit
/// [`XRProjectionLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRProjectionLayerInit)
class XRProjectionLayerInit : public emlite::Val {
  explicit XRProjectionLayerInit(Handle h) noexcept;
public:
    static XRProjectionLayerInit take_ownership(Handle h) noexcept;
    explicit XRProjectionLayerInit(const emlite::Val &val) noexcept;
    XRProjectionLayerInit() noexcept;
    [[nodiscard]] XRProjectionLayerInit clone() const noexcept;
    [[nodiscard]] XRTextureType textureType() const;
    void textureType(const XRTextureType& value);
    [[nodiscard]] jsbind::Any colorFormat() const;
    void colorFormat(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any depthFormat() const;
    void depthFormat(const jsbind::Any& value);
    [[nodiscard]] double scaleFactor() const;
    void scaleFactor(double value);
    [[nodiscard]] bool clearOnAccess() const;
    void clearOnAccess(bool value);
};

} // namespace webbind