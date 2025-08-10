#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRLayerInit.hpp"

namespace webbind {

class DOMPointReadOnly;

/// Dictionary type XRCubeLayerInit
class XRCubeLayerInit : public XRLayerInit {
  explicit XRCubeLayerInit(Handle h) noexcept;
public:
    static XRCubeLayerInit take_ownership(Handle h) noexcept;
    explicit XRCubeLayerInit(const emlite::Val &val) noexcept;
    XRCubeLayerInit() noexcept;
    [[nodiscard]] XRCubeLayerInit clone() const noexcept;
    /// Getter of the `orientation` attribute.
    [[nodiscard]] DOMPointReadOnly orientation() const;
    /// Setter of the `orientation` attribute.
    void orientation(const DOMPointReadOnly& value);
};

} // namespace webbind