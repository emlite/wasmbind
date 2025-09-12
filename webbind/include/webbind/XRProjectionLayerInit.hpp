#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRProjectionLayerInit
class XRProjectionLayerInit : public emlite::Val {
  explicit XRProjectionLayerInit(Handle h) noexcept;
public:
    static XRProjectionLayerInit take_ownership(Handle h) noexcept;
    explicit XRProjectionLayerInit(const emlite::Val &val) noexcept;
    XRProjectionLayerInit() noexcept;
    [[nodiscard]] XRProjectionLayerInit clone() const noexcept;
    /// Getter of the `textureType` attribute.
    [[nodiscard]] XRTextureType textureType() const;
    /// Setter of the `textureType` attribute.
    void textureType(const XRTextureType& value);
    /// Getter of the `colorFormat` attribute.
    [[nodiscard]] uint32_t colorFormat() const;
    /// Setter of the `colorFormat` attribute.
    void colorFormat(const uint32_t& value);
    /// Getter of the `depthFormat` attribute.
    [[nodiscard]] uint32_t depthFormat() const;
    /// Setter of the `depthFormat` attribute.
    void depthFormat(const uint32_t& value);
    /// Getter of the `scaleFactor` attribute.
    [[nodiscard]] double scaleFactor() const;
    /// Setter of the `scaleFactor` attribute.
    void scaleFactor(double value);
    /// Getter of the `clearOnAccess` attribute.
    [[nodiscard]] bool clearOnAccess() const;
    /// Setter of the `clearOnAccess` attribute.
    void clearOnAccess(bool value);
};

} // namespace webbind