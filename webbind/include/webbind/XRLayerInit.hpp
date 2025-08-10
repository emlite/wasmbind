#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSpace;

/// Dictionary type XRLayerInit
/// [`XRLayerInit`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerInit)
class XRLayerInit : public emlite::Val {
  explicit XRLayerInit(Handle h) noexcept;
public:
    static XRLayerInit take_ownership(Handle h) noexcept;
    explicit XRLayerInit(const emlite::Val &val) noexcept;
    XRLayerInit() noexcept;
    [[nodiscard]] XRLayerInit clone() const noexcept;
    [[nodiscard]] XRSpace space() const;
    void space(const XRSpace& value);
    [[nodiscard]] jsbind::Any colorFormat() const;
    void colorFormat(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any depthFormat() const;
    void depthFormat(const jsbind::Any& value);
    [[nodiscard]] unsigned long mipLevels() const;
    void mipLevels(unsigned long value);
    [[nodiscard]] unsigned long viewPixelWidth() const;
    void viewPixelWidth(unsigned long value);
    [[nodiscard]] unsigned long viewPixelHeight() const;
    void viewPixelHeight(unsigned long value);
    [[nodiscard]] XRLayerLayout layout() const;
    void layout(const XRLayerLayout& value);
    [[nodiscard]] bool isStatic() const;
    void isStatic(bool value);
    [[nodiscard]] bool clearOnAccess() const;
    void clearOnAccess(bool value);
};

} // namespace webbind