#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSpace;

/// Dictionary type XRLayerInit
class XRLayerInit : public emlite::Val {
  explicit XRLayerInit(Handle h) noexcept;
public:
    static XRLayerInit take_ownership(Handle h) noexcept;
    explicit XRLayerInit(const emlite::Val &val) noexcept;
    XRLayerInit() noexcept;
    [[nodiscard]] XRLayerInit clone() const noexcept;
    /// Getter of the `space` attribute.
    [[nodiscard]] XRSpace space() const;
    /// Setter of the `space` attribute.
    void space(const XRSpace& value);
    /// Getter of the `colorFormat` attribute.
    [[nodiscard]] jsbind::Any colorFormat() const;
    /// Setter of the `colorFormat` attribute.
    void colorFormat(const jsbind::Any& value);
    /// Getter of the `depthFormat` attribute.
    [[nodiscard]] jsbind::Any depthFormat() const;
    /// Setter of the `depthFormat` attribute.
    void depthFormat(const jsbind::Any& value);
    /// Getter of the `mipLevels` attribute.
    [[nodiscard]] unsigned long mipLevels() const;
    /// Setter of the `mipLevels` attribute.
    void mipLevels(unsigned long value);
    /// Getter of the `viewPixelWidth` attribute.
    [[nodiscard]] unsigned long viewPixelWidth() const;
    /// Setter of the `viewPixelWidth` attribute.
    void viewPixelWidth(unsigned long value);
    /// Getter of the `viewPixelHeight` attribute.
    [[nodiscard]] unsigned long viewPixelHeight() const;
    /// Setter of the `viewPixelHeight` attribute.
    void viewPixelHeight(unsigned long value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] XRLayerLayout layout() const;
    /// Setter of the `layout` attribute.
    void layout(const XRLayerLayout& value);
    /// Getter of the `isStatic` attribute.
    [[nodiscard]] bool isStatic() const;
    /// Setter of the `isStatic` attribute.
    void isStatic(bool value);
    /// Getter of the `clearOnAccess` attribute.
    [[nodiscard]] bool clearOnAccess() const;
    /// Setter of the `clearOnAccess` attribute.
    void clearOnAccess(bool value);
};

} // namespace webbind