#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSpace;

/// Dictionary type XRMediaLayerInit
class XRMediaLayerInit : public emlite::Val {
  explicit XRMediaLayerInit(Handle h) noexcept;
public:
    static XRMediaLayerInit take_ownership(Handle h) noexcept;
    explicit XRMediaLayerInit(const emlite::Val &val) noexcept;
    XRMediaLayerInit() noexcept;
    [[nodiscard]] XRMediaLayerInit clone() const noexcept;
    /// Getter of the `space` attribute.
    [[nodiscard]] XRSpace space() const;
    /// Setter of the `space` attribute.
    void space(const XRSpace& value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] XRLayerLayout layout() const;
    /// Setter of the `layout` attribute.
    void layout(const XRLayerLayout& value);
    /// Getter of the `invertStereo` attribute.
    [[nodiscard]] bool invertStereo() const;
    /// Setter of the `invertStereo` attribute.
    void invertStereo(bool value);
};

} // namespace webbind