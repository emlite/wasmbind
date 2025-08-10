#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class XRLayer;

/// Dictionary type XRLayerEventInit
class XRLayerEventInit : public EventInit {
  explicit XRLayerEventInit(Handle h) noexcept;
public:
    static XRLayerEventInit take_ownership(Handle h) noexcept;
    explicit XRLayerEventInit(const emlite::Val &val) noexcept;
    XRLayerEventInit() noexcept;
    [[nodiscard]] XRLayerEventInit clone() const noexcept;
    /// Getter of the `layer` attribute.
    [[nodiscard]] XRLayer layer() const;
    /// Setter of the `layer` attribute.
    void layer(const XRLayer& value);
};

} // namespace webbind